// pages/dealReport/dealReport.js
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
Page({

  /**
   * 页面的初始数据
   */
  data: {
    isToday: true,
    reportRecord:{},
    reportId : '',
    undealReportNum: 0,
  },
  deal(e) {
    this.setData({//获取点击举报记录id
      reportId: e.currentTarget.dataset.reportid
    })
    console.log(this.data.reportId)
    Dialog.confirm({
      message: '确定已处理该举报'
    }).then(() => {
      // on confirm
      db.collection('report').doc(this.data.reportId).remove({
        success: res => {
          wx.showToast({
            title: '已处理该举报信息',
          })
          this.setData({
            counterId: '',
            count: null,
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
          if (this.data.isToday) {
            db.collection('report').where({
              date: today,
              isDeal: false
            }).get()
              .then((res) => {
                if (res.data.length) {
                  this.setData({
                    reportRecord: res.data,
                    undealReportNum:res.data.length
                  });
                  console.log(this.data.reportRecord)
                }
                else {
                  this.setDate({
                  });
                }
              });
          }
          else {
            db.collection('report').where({
              isDeal: false
            }).get()
              .then((res) => {
                if (res.data.length) {
                  this.setData({
                    reportRecord: res.data,
                    undealReportNum: res.data.length
                  });
                  console.log(this.data.reportRecord)
                }
                else {
                  this.setDate({
                  });
                }
              });
          }
        },
        fail: err => {
          wx.showToast({
            icon: 'none',
            title: '删除失败',
          })
          console.error('[数据库] [删除记录] 失败：', err)
        }
      })
    })
  },
  onChange(event) {
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
  onChangex({ detail }) {
    // 需要手动对 checked 状态进行更新
    this.setData({ isToday: detail });
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
    if (this.data.isToday) {
      db.collection('report').where({
        date: today,
        isDeal: false
      }).get()
        .then((res) => {
 
            this.setData({
              reportRecord: res.data,

            });
            console.log(this.data.reportRecord)
          })
         
    }
    else {
      db.collection('report').where({
        isDeal: false
      }).get()
        .then((res) => {
          if (res.data.length) {
            this.setData({
              reportRecord: res.data,

            });
            console.log(this.data.reportRecord)
          }
          else {
            this.setDate({
            });
          }
        });
    }
  },
  onChange2({ detail }) {
    // 需要手动对 checked 状态进行更新
    this.setData({ isToday: detail });
    console.log(this.data.isToday)
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
    if(this.data.isToday){
      console.log('只显示今天')
      var t=this;
      db.collection('report').where({
        date: today,
        isDeal: false
      }).get()
        .then((res) => {
          
            this.setData({
              reportRecord: res.data,

            });
            console.log(this.data.reportRecord)
          
          
        });
    }
    else{
      console.log('只显示今天')
      db.collection('report').where({
        isDeal: false
      }).get()
        .then((res) => {
          if (res.data.length) {
            this.setData({
              reportRecord: res.data,

            });
            console.log(this.data.reportRecord)
          }
          else {
            this.setDate({
              reportRecord: res.data,
            });
            console.log(this.data.reportRecord)
          }
        });
    }

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