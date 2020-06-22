// pages/home/home.js
var app = getApp()
const db = wx.cloud.database();

import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
import Toast from '../../miniprogram_npm/@vant/weapp/toast/toast';
Page({

  /**
   * 页面的初始数据
   */
  data: {
    //用户状态
    isLogin: null,
    isOrder : false,
    isSign : false,
    isLeave : false,
    genders : 0,

    orderRoom :  '',
    orderTime : '',
    orderSeatNum : '',
    orderSeatId: '',

    orderRecordId: '',
    historyRecordId: '',
    leaveRecordId: '',
    userName : '',

    selectRoomTime1:'',
    selectRoomTime2: '',
    selectRoomTime3: '',
    timeType:0,
    
    

    cleanTime : false,
    

    //Hi，按钮颜色 浅绿：#6ecb9f 深绿：#26c789
    green : '#6ecb9f',

    studyNum : 4524,//今日累计学习人数

    hour: '0' + 0,   // 时
    minute: '0' + 0,   // 分
    second: '0' + 0,    // 秒


    //倒计时时间
    time: 30 * 60 * 1000,
    
    
  },
  login_btn(){
    wx.reLaunch({
      url: '../user/user',
    })
  },
  finished() {
    Toast('倒计时结束');
  },

  //选座订座按钮
  order_btn(){
    db.collection('banList').where({
      user: this.data.userName,
    }).get()
      .then((res) => {
        if (res.data.length) {//拉黑
          Dialog.confirm({
            message: "您已被系统拉黑，请联系管理员解除黑名单"
          }).then(() => {
            // on confirm
          }).catch(() => {
            // on cancel
          });
        }
        else{
          wx.navigateTo({
            url: '../rooms/rooms',
          })
        }
      }) 
    //this.setData({isOrder:true})
     
    //this.setData({ isOrder: true })
  },
  //扫描签到按钮
  sign_btn() {
    //获取当前时间戳  
    var timestamp = Date.parse(new Date());
    timestamp = timestamp / 1000;
    console.log("当前时间戳为：" + timestamp);

    //获取当前时间  
    var n = timestamp * 1000;
    var date = new Date(n);
    //年  
    var Y = date.getFullYear();
    //月  
    var M = (date.getMonth() + 1 < 10 ? '0' + (date.getMonth() + 1) : date.getMonth() + 1);
    //日  
    var D = date.getDate() < 10 ? '0' + date.getDate() : date.getDate();
    //时  
    var h = date.getHours() < 10 ? '0' + date.getHours() : date.getHours();
    //分  
    var m = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();
    var date = + Y + '-' + M + '-' + D;
    var now = h + ':' + m
    var temp = this.data.orderTime.split("-");
    var leftHour = temp[0].split(':')[0];
    var leftMin = temp[0].split(':')[1];
    var rightHour = temp[1].split(':')[0];
    var rightMin = temp[1].split(':')[1];
    var nowHour = now.split(':')[0];
    var nowMin = now.split(':')[1];
    if (leftHour == '08') {
      leftHour = 8
    }
    if (nowHour == '05') {
      nowHour = 5
    }
    if (nowHour == '06') {
      nowHour = 6
    }
    if (nowHour == '07') {
      nowHour = 7
    }
    if (nowHour == '08') {
      nowHour = 8
    }
    if (nowHour == '09') {
      nowHour = 9
    }
    console.log(leftHour)
    console.log(leftMin)
    console.log(rightHour)
    console.log(rightMin)
    console.log(nowHour)
    console.log(nowMin)
    //leftHour <= nowHour && nowHour < rightHour
    if (leftHour <= nowHour && nowHour < rightHour){
    //this.setData({ isSign: true })
    var that = this;
    wx.scanCode({
      onlyFromCamera: true,
      success(res) {
        console.log(res)
        if (res.result == that.data.orderSeatId){
          console.log('签到成功');
          Toast('签到成功');
          that.setData({
            isSign: true,
            hour: '0' + 0,
            minute: '0' + 0,
            second: '0' + 0 
          });
          //开始计时
          //that.setInterval() 

          //查询并修改座位信息
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              that.setData({
                orderSeatId: res.data[0]._id
              });
            }
            else {
              console.log("no Order")
            }
            db.collection('seat').doc(that.data.orderSeatId).update({
              data: {
                type: 'isOrder',
                user: '',
              }
            })
          })
          //查询并修改预定座位记录
          db.collection('orderRecord').where({
            user: app.globalData.userOpenId,
            isUsed: false,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("search OrderRecord success")
              that.setData({
                orderRecordId: res.data[0]._id
              });
            }
            else {
              console.log("no search OrderRecord")
            }
            db.collection('orderRecord').doc(that.data.orderRecordId).update({
              data: {
                isUsed: true,
              }
            })
          })

          //获取当前时间戳  
          var timestamp = Date.parse(new Date());
          timestamp = timestamp / 1000;
          console.log("当前时间戳为：" + timestamp);

          //获取当前时间  
          var n = timestamp * 1000;
          var date = new Date(n);
          //年  
          var Y = date.getFullYear();
          //月  
          var M = (date.getMonth() + 1 < 10 ? '0' + (date.getMonth() + 1) : date.getMonth() + 1);
          //日  
          var D = date.getDate() < 10 ? '0' + date.getDate() : date.getDate();
          //时  
          var h = date.getHours() < 10 ? '0' + date.getHours() : date.getHours();
          //分  
          var m = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();


          var date = + Y + '-' + M + '-' + D;
          var now = h+':'+m
          //插入历史记录表
          db.collection('historyRecord').add({
            // data 字段表示需新增的 JSON 数据
            data: {
              room: that.data.orderRoom,
              seat: that.data.orderSeatNum,
              user: that.data.userName,//用户
              orderTime : that.data.orderTime,
              date: date,
              startTime: now,
              //useTime: '',
              isUsed : false,
            }
          })

        }
        else{
          console.log(that.data.orderSeatId);
          Toast('二维码错误，请选择正确座位');
        }
      }
    })
    }
    else{
      Toast.fail('请在规定时间内签到哦~');
    }
  },
  //取消预约按钮
  cancel_btn() { 

    this.setData({ isOrder : false,
                    //清空计时器
      hour: '0' + 0,
      minute: '0' + 0,
      second: '0' + 0 })
      //查询并修改座位信息
      console.log()
    db.collection('room').where({//查询选座房间的3个时间段
      name: this.data.orderRoom
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data[0]._id)
        this.setData({
          selectRoomTime1: res.data[0].time1,
          selectRoomTime2: res.data[0].time2,
          selectRoomTime3: res.data[0].time3,
        })
        //设置当前所选时间段
        if (this.data.orderTime == this.data.selectRoomTime1) {
          console.log('所选时间段为第一时间段')
          this.setData({
            timeType: 1,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime1: 0,
                }
              })
              console.log('修改座位状态1为0成功')
            }
            else {
              console.log("no select seat")
            }
            
          })
        }
        if (this.data.orderTime == this.data.selectRoomTime2) {
          console.log('所选时间段为第二时间段')
          this.setData({
            timeType: 2,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime2: 0,
                }
              })
              console.log('修改座位状态2为0成功')
            }
            else {
              console.log("no select seat")
            }

          })
        }
        if (this.data.orderTime == this.data.selectRoomTime3) {
          console.log('所选时间段为第三时间段')
          this.setData({
            timeType: 3,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime3: 0,
                }
              })
              console.log('修改座位状态3为0成功')
            }
            else {
              console.log("no select seat")
            }

          })
        }
      }

    })
    db.collection('seat').where({
        userOpenId: app.globalData.userOpenId,
      }).get().then((res) => {
        if (res.data.length) {
          console.log("select seat success")
          this.setData({
            orderSeatId:res.data[0]._id
          });
        }
        else {
          console.log("no Order")
        }
      // if(this.data.timeType==1){
      //   db.collection('seat').doc(this.data.orderSeatId).update({
      //     data: {
      //       type: 'noOrder',
      //       user: '',
      //       orderTime1:0,
      //     }
      //   })
      //   console.log('修改座位状态1为0成功')
      // }
      //   if (this.data.timeType == 2) {
      //     db.collection('seat').doc(this.data.orderSeatId).update({
      //       data: {
      //         type: 'noOrder',
      //         user: '',
      //         orderTime2: 0,
      //       }
      //     })
      //     console.log('修改座位状态2为0成功')
      //   }
      //   if (this.data.timeType == 3) {
      //     db.collection('seat').doc(this.data.orderSeatId).update({
      //       data: {
      //         type: 'noOrder',
      //         user: '',
      //         orderTime3: 0,
      //       }
      //     })
      //     console.log('修改座位状态3为0成功')
      //   }
      

    //查询并修改预定座位记录
    db.collection('orderRecord').where({
        user: app.globalData.userOpenId,
        isUsed: false,
      }).get().then((res) => {
        if (res.data.length) {
          console.log("search OrderRecord success")
          this.setData({
            orderRecordId:res.data[0]._id
          });
        }
        else {
          console.log("no search OrderRecord")
        }
      db.collection('orderRecord').doc(this.data.orderRecordId).update({
      data: {
        isUsed: true,
      }
      })
    })
      //查询并修改历史记录
      db.collection('historyRecord').where({
        user: this.data.userName,
        isUsed: false,
      }).get().then((res) => {
        if (res.data.length) {
          console.log("search historyRecord success")
          this.setData({
            historyRecordId: res.data[0]._id
          });
          db.collection('historyRecord').doc(this.data.historyRecord).update({
            data: {
              isUsed: true,
            }
          })
        }
        else {
          console.log("no search historyRecord")
        }
        
      })
    
    // db.collection('seat').where({
    //   user: app.globalData.userOpenId,
    // }).update({
    //   data: {
    //     type:'noOrder',
    //     user: '',
    //   }
    // })
    // db.collection('orderRecord').where({
    //   user: app.globalData.userOpenId,
    //   }).update({
    //   data: {
    //     isUsed: true,
    //   }
    // })
    getApp().globalData.isOrder = false;

      })
  },
  //暂离按钮
  leave_btn() {
    //获取当前时间戳  
    var timestamp = Date.parse(new Date());
    timestamp = timestamp / 1000;
    console.log("当前时间戳为：" + timestamp);

    //获取当前时间  
    var n = timestamp * 1000;
    var date = new Date(n);
    //年  
    var Y = date.getFullYear();
    //月  
    var M = (date.getMonth() + 1 < 10 ? '0' + (date.getMonth() + 1) : date.getMonth() + 1);
    //日  
    var D = date.getDate() < 10 ? '0' + date.getDate() : date.getDate();
    //时  
    var h = date.getHours() < 10 ? '0' + date.getHours() : date.getHours();
    //分  
    var m = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();

    var now = h + ':' + m;
    var date = + Y + '-' + M + '-' + D;
    //插入暂离记录表
    db.collection('leaveRecord').add({
      // data 字段表示需新增的 JSON 数据
      data: {
        room: this.data.orderRoom,
        seat: this.data.orderSeatNum,
        user: this.data.userName,//用户
        orderTime: this.data.orderTime,
        date: date,
        startTime: now,
        leaveTime: this.data.time,
        isUsed: true,
      }
    })
    this.setData({ isLeave: true })
  },
  //暂离签到按钮
  leaveSign_btn() {
    var that = this;
    wx.scanCode({
      onlyFromCamera: true,
      success(res) {
        console.log(res)
        if (res.result == that.data.orderSeatId) {
          console.log('暂离签到成功');
          console.log(that.data.time)
          Toast('暂离签到成功');
          that.setData({
            isLeave: false,
          });
          //获取当前时间戳  
          var timestamp = Date.parse(new Date());
          timestamp = timestamp / 1000;
          console.log("当前时间戳为：" + timestamp);

          //获取当前时间  
          var n = timestamp * 1000;
          var date = new Date(n);
          //年  
          var Y = date.getFullYear();
          //月  
          var M = (date.getMonth() + 1 < 10 ? '0' + (date.getMonth() + 1) : date.getMonth() + 1);
          //日  
          var D = date.getDate() < 10 ? '0' + date.getDate() : date.getDate();
          //时  
          var h = date.getHours() < 10 ? '0' + date.getHours() : date.getHours();
          //分  
          var m = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();


          var date = + Y + '-' + M + '-' + D;
          var now = h + ':' + m
          //暂离记录设置isUsed & 添加暂离时长和结束时间
          db.collection('leaveRecord').where({
            //user: this.data.userName,
            isUsed: false,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select leaveReocrd success")
              that.setData({
                //leaveRecordId: res.data[0]._id
              });
            }
            else {
              console.log("noselect leaveRecord")
            }
            db.collection('leaveRecord').doc(that.data.leaveRecordId).update({
              // data 字段表示需新增的 JSON 数据
              data: {

                endTime: now,
                //useTime: this.data.hour + ':' + this.data.minute,
                isUsed: true,
              }
            })
          })

        }
        else {
          console.log(that.data.orderSeatId);
          Toast('二维码错误，请选择原来座位');
        }
      }
    })
  },
  //离馆退座按钮
  finish_btn() {
    app.globalData.isOrder = false
    app.globalData.isSign = false
    db.collection('room').where({//查询选座房间的3个时间段
      name: this.data.orderRoom
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data[0]._id)
        this.setData({
          selectRoomTime1: res.data[0].time1,
          selectRoomTime2: res.data[0].time2,
          selectRoomTime3: res.data[0].time3,
        })
        //设置当前所选时间段
        if (this.data.orderTime == this.data.selectRoomTime1) {
          console.log('所选时间段为第一时间段')
          this.setData({
            timeType: 1,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime1: 0,
                }
              })
              console.log('修改座位状态1为0成功')
            }
            else {
              console.log("no select seat")
            }

          })
        }
        if (this.data.orderTime == this.data.selectRoomTime2) {
          console.log('所选时间段为第二时间段')
          this.setData({
            timeType: 2,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime2: 0,
                }
              })
              console.log('修改座位状态2为0成功')
            }
            else {
              console.log("no select seat")
            }

          })
        }
        if (this.data.orderTime == this.data.selectRoomTime3) {
          console.log('所选时间段为第三时间段')
          this.setData({
            timeType: 3,
          })
          console.log(this.data.timeType)
          db.collection('seat').where({
            userOpenId: app.globalData.userOpenId,
          }).get().then((res) => {
            if (res.data.length) {
              console.log("select seat success")
              this.setData({
                orderSeatId: res.data[0]._id
              });
              console.log(this.data.orderSeatId)
              db.collection('seat').doc(this.data.orderSeatId).update({
                data: {
                  type: 'noOrder',
                  userOpenId: '',
                  orderTime3: 0,
                }
              })
              console.log('修改座位状态3为0成功')
            }
            else {
              console.log("no select seat")
            }

          })
        }
      }

    })
    this.onLoad();  

    this.setData({ isOrder: false, 
                   isSign: false,
                   isLeave: false,
                   //清空计时器
                   cleanTime : true,
      hour: '0' + 0,
      minute: '0' + 0,
      second: '0' + 0 })
   

    //获取当前时间戳  
    var timestamp = Date.parse(new Date());
    timestamp = timestamp / 1000;
    console.log("当前时间戳为：" + timestamp);

    //获取当前时间  
    var n = timestamp * 1000;
    var date = new Date(n);
    //时  
    var h = date.getHours() < 10 ? '0' + date.getHours() : date.getHours();
    //分  
    var m = date.getMinutes() < 10 ? '0' + date.getMinutes() : date.getMinutes();

    var now = h + ':' + m

    var usertime = this.data.hour+':'+this.data.minute
    //历史记录设置isUsed & 添加使用时长和结束时间
    db.collection('historyRecord').where({
      user: this.data.userName,
      isUsed: false,
    }).get().then((res) => {
      if (res.data.length) {
        console.log("select historyRecord success")
        this.setData({
          historyRecordId: res.data[0]._id,
          isSign:false
        });
      }
      else {
        console.log("noselect historyRecord")
      }
    db.collection('historyRecord').doc(this.data.historyRecordId).update({
      // data 字段表示需新增的 JSON 数据
      data: {

        endTime: now,
        //useTime: this.data.hour + ':' + this.data.minute,
        isUsed: true,
      }
    })
   })
  },
  
  
  //信用分介绍弹窗
  cScoreTip() {
    Dialog.confirm({
      message: '信用分在60以上才能预定座位，可以通过在图书馆学习等方式获得,订座，暂离没有及时签到，离开没有带走随时物品等违规操作都会失去一定的信用分哦'
    }).then(() => {
      // on confirm
    }).catch(() => {
      // on cancel
    });
  },
  //计时器函数
  setInterval: function () {
    const that = this
    var second = that.data.second
    var minute = that.data.minute
    var hours = that.data.hours

    //在https://www.jianshu.com/p/3e754df548c4的计时器函数基础上添加了【暂离停止计时，释放座位清0】
    setInterval(function () {  // 设置定时器
      

      //如果暂离则停止计时
      var isLeave = that.data.isLeave
      if(!isLeave){
        second++
        if (second >= 60) {
          second = 0  //  大于等于60秒归零
          minute++
          if (minute >= 60) {
            minute = 0  //  大于等于60分归零
            hours++
            if (hours < 10) {
              // 少于10补零
              that.setData({
                hours: '0' + hours
              })
            } else {
              that.setData({
                hours: hours
              })
            }
          }
          if (minute < 10) {
            // 少于10补零
            that.setData({
              minute: '0' + minute
            })
          } else {
            that.setData({
              minute: minute
            })
          }
        }
        if (second < 10) {
          // 少于10补零
          that.setData({
            second: '0' + second
          })
        } else {
          that.setData({
            second: second
          })
        }
      }
    }, 1000)
  },

  onChange(e) {
    this.setData({
      timeData: e.detail
    });
  },


  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
    console.log('home.onload')
    const c = db.collection("users");
    //查
    // c.get().then(res=>{
    //   //console.log(res);
    // })
    //console.log(isOrder)

   


    //查询用户是否登录
    // wx.cloud.callFunction({
    //   name: "login",
    //   data: {}
    // }).then((res) => {
    //   app.globalData.userOpenId = res.result.openid;//获取登录用户的_openid
    //   console.log('userOpenid='+app.globalData.userOpenId)
    //   //查是否登录
    //   db.collection('users').where({
    //     _openid: res.result._openid
    //   }).get().then((res) => {
    //     if (res.data.length) {
    //       app.globalData.isLogin = true
    //       console.log("is login")
    //       this.setData({
    //         isLogin: true
    //       });
    //     }
    //     else {
    //       console.log("no login")
    //     }
    //   });
    //   //查是否预定
    //   db.collection('orderRecord').where({
    //     user: res.result._openid,
    //     isUsed : false,
    //   }).get().then((res) => {
    //     if (res.data.length) {
    //       app.globalData.isOrder = true
    //       console.log("is Order")
    //       this.setData({
    //         isOrder: true,
    //         orderRoom: res.data[0].room,
    //         orderTime: res.data[0].orderTime,
    //         orderSeatNum: res.data[0].seat,
    //       });
    //     }
    //     else {
    //       console.log("no Order")
    //     }
    //   });
    //   this.setData({
    //     isLogin: app.globalData.isLogin,
    //     genders: app.globalData.gender,
    //     isOrder: app.globalData.isOrder,
    //     orderSeatId : app.globalData.orderSeatId
    //   });
    // });

    //查询是否有预定记录
    // wx.cloud.callFunction({
    //   name: "login",
    //   data: {}
    // }).then((res) => {
    //   app.globalData.userOpenId = res.result.openid;//获取登录用户的_openid
    // }),
    // console.log('userOpenid=' + app.globalData.userOpenId)
    // db.collection('orderRecord').where({

    //   user: app.globalData.userOpenId,
    //   isUsed: false,
    // }).get({
    //   //如果查询成功的话    
    //   success: res => {
    //     console('isOrder')
    //     app.globalData.isOrder = true;
    //     console.log(res.data[0])
    //     this.setData({
    //       isOrder: true,
    //       orderRoom: res.data[0].room,
    //       orderTime: res.data[0].orderTime,
    //       orderSeatNum: res.data[0].seat,
    //     })
    //   },
    //   fail: err => {
    //     wx.showToast({
    //       icon: 'none',
    //       title: '查询记录失败'
    //     })
    //   }
    // })



  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {
    console.log('home.onReady')
  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {
    

    console.log('home.onshow');

    wx.cloud.callFunction({
      name: "login",
      data: {}
    }).then((res) => {
      app.globalData.userOpenId = res.result.openid;//获取登录用户的_openid
      console.log('userOpenid=' + app.globalData.userOpenId)

      //查询是否签到
      db.collection('historyRecord').where({
        //user: this.data.userName,
        isUsed: false,
      }).get().then((res) => {
        if (res.data.length) {
          app.globalData.isOrder = true,
          app.globalData.isSign = true
          console.log("is Sign")
          this.setData({
            isOrder:true,
            isSign: true,
            orderRoom: res.data[0].room,
            orderTime: res.data[0].orderTime,
            orderSeatNum: res.data[0].seat,
          });
          //开始计时
          this.setInterval();
          console.log(this.data.userName)
          console.log('isSign')
        }
        else {
          console.log("no Sign")
          console.log(this.data.userName)
        }
      });
      //查是否预定
      db.collection('orderRecord').where({
        user: res.result._openid,
        isUsed: false,
      }).get().then((res) => {
        if (res.data.length) {
          app.globalData.isOrder = true
          console.log("is Order")
          this.setData({
            isOrder: true,
            orderRoom: res.data[0].room,
            orderTime: res.data[0].orderTime,
            orderSeatNum: res.data[0].seat,
            orderSeatId: res.data[0].orderSeatId
          });
          db.collection('room').where({//查询选座房间的3个时间段
            name: this.data.orderRoom
          }).get({
            //如果查询成功的话    
            success: res => {
              console.log(res.data[0]._id)
              this.setData({
                selectRoomTime1: res.data[0].time1,
                selectRoomTime2: res.data[0].time2,
                selectRoomTime3: res.data[0].time3,
              })
              //设置当前所选时间段
              if (this.data.orderTime == this.data.selectRoomTime1) {
                console.log('所选时间段为第一时间段')
                this.setData({
                  timeType: 1,
                })
                console.log(this.data.timeType)
              }
              if (this.data.orderTime == this.data.selectRoomTime2) {
                console.log('所选时间段为第二时间段')
                this.setData({
                  timeType: 2,
                })
              }
              if (this.data.orderTime == this.data.selectRoomTime3) {
                console.log('所选时间段为第三时间段')
                this.setData({
                  timeType: 3,
                })
              }
            }

          })
        }
        else {
          console.log("no Order")
        }
      });
      //查是否登录
      db.collection('users').where({
        _openid: res.result._openid
      }).get().then((res) => {
        if (res.data.length) {
          app.globalData.isLogin = true
          console.log("is login")
          this.setData({
            isLogin: true,
            userName: res.data[0].nickName,
          });
        }
        else {
          console.log("no login")

        }
      });
      this.setData({
        isLogin: app.globalData.isLogin,
        genders: app.globalData.gender,
        isOrder: app.globalData.isOrder,
        orderSeatId: app.globalData.orderSeatId,
        isSign: app.globalData.isSign,
      });
    });
    
    // //查询是否有预定记录
    // db.collection('orderRecord').where({
      
    //  user: app.globalData.userOpenId,
    //  isUsed: false,
    // }).get({
    //   //如果查询成功的话    
    //   success: res => {
    //     console('isOrder')
    //     app.globalData.isOrder = true;
    //     console.log(res.data[0])
    //     this.setData({
    //       isOrder: true,
    //       orderRoom: res.data[0].room,
    //       orderTime: res.data[0].orderTime,
    //       orderSeatNum: res.data[0].seat,
    //     })
    //   },
    //   fail: err => {
    //     wx.showToast({
    //       icon: 'none',
    //       title: '查询记录失败'
    //     })
    //   }
    // })
    console.log(2);
    this.setData({
      isOrder: app.globalData.isOrder,
      // orderRoom : app.globalData.orderRoom,
      // orderTime : app.globalData.orderTime,
      // orderSeatNum : app.globalData.orderSeatNum,
      // orderSeatId : app.globalData.orderSeatId
    });
    console.log(3);
  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {
    console.log('onHide');
  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {
    console.log('onInload')
  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {

  }
})