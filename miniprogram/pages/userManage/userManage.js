// pages/userManage/userManage.js
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库
Page({
  /**
   * 页面的初始数据
   */
  data: {
    chooseUser : '长按拉黑/接触拉黑用户',
    chooseIsBan : false,
    user : {},
    banList : {},
    banId:'',
    chooseUserId : '',
    value: '',
    undealReportNum: 0,
  },
  click(event){
    console.log(event);
    this.setData({
      chooseUserId: event.currentTarget.dataset.chooseuserid
    })
    console.log(this.data.chooseUserId)
  },
  onSearch(e){
    this.setData({
      value: e.detail
    });
    db.collection('users').where({
      nickName: db.RegExp({
        regexp: this.data.value,
        //从搜索栏中获取的value作为规则进行匹配。
        options: 'i',
        //大小写不区分
      })
    }).get()
      .then((res) => {
        if (res.data.length) {
          this.setData({
            user: res.data,
          });
          console.log('搜索成功')
        }
        else {
          this.setData({
            user: res.data,
          });
          console.log('搜索失败')
          console.log(this.data.user)
        }
      });
  },
  
  //信用分步进器
  onChange(event) {
    console.log(event.detail);
    this.setData({ active: event.detail });
    console.log(event.detail)
    if (event.detail == 0) {
      wx.redirectTo({
        url: '/pages/openTimeManage/openTimeManage',
      })
    }
    if (event.detail == 1) {
      wx.redirectTo({
        url: '/pages/userManage/userManage',
      })
    }
    if (event.detail == 2) {
      wx.redirectTo({
        url: '/pages/dealReport/dealReport',
      })
    }
  },
  onChangeScore(event){
    console.log(event);

    
    db.collection('users').doc(this.data.chooseUserId).update({
      data: {
        cScore:event.detail
      },
      success: res => {
        this.setData({
          
        })
        console.log('修改成功')
        
      },
      fail: err => {
        icon: 'none',
          console.error('[数据库] [更新记录] 失败：', err)
      }
    })
  },
  //拉黑用户或解除拉黑
  banOrDisban(e){
    console.log(e)
    this.setData({
      chooseUser: e.currentTarget.dataset.chooseuser
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
    var today = + Y + '-' + M + '-' + D;
    db.collection('banList').where({
      user: this.data.chooseUser,
    }).get()
      .then((res) => {
        if (!res.data.length) {//拉黑
          Dialog.confirm({
            message: "确定拉黑该用户?"
          }).then(() => {
            // on confirm
            db.collection('banList').add({//插入黑名单
              data: {
                user : this.data.chooseUser,
                date: today,
                reason:"管理员拉黑" 
              },
              success: function (res) {
                wx.showToast({
                  title: '拉黑成功',
                })
              },
              fail: console.error
            })
          }).catch(() => {
            // on cancel
          });
        }
        else {//解除拉黑
          db.collection('banList').where({
            user:this.data.chooseUser,
          }).get()
            .then((res) => {
              if (res.data.length) {
                this.setData({
                  banId: res.data[0]._id,
                });
                console.log(this.data.banId)
              }
              else {
                this.setDate({

                });
              }
            });
          Dialog.confirm({
            message: '确定取消拉黑该用户?'
          }).then(() => {
            // on confirm
            console.log('解除拉黑成功')
            db.collection('banList').doc(this.data.banId).remove({
              success: res => {
                wx.showToast({
                  title: '解除拉黑成功',
                })
                this.setData({
                  counterId: '',
                  count: null,
                })
              },
              fail: err => {
                wx.showToast({
                  icon: 'none',
                  title: '删除失败',
                })
                console.error('[数据库] [删除记录] 失败：', err)
              }
            })
          }).catch(() => {
            // on cancel
          });
        }
      });
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
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
    var today = + Y + '-' + M + '-' + D;
    db.collection('report').where({//获取未处理当天举报记录数据
      date: today,
      isDeal: false
    }).get()
      .then((res) => {
        app.globalData.undealReportNum = res.data.length;
        this.setData({
          undealReportNum: res.data.length,

        });
        console.log(res.data.length)
      });

  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {

  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {
    db.collection('users').get()
      .then((res) => {
        if (res.data.length) {
          this.setData({
            user: res.data,
          });
          console.log(res.data)
        }
        else {
          this.setDate({
          });
        }
      });
  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {

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