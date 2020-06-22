// pages/openTimeManage/openTimeManage.js
const db = wx.cloud.database();
const app = getApp();//拿到app.js的this对象
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
Page({

  /**
   * 页面的初始数据
   */
  data: {
    activeNames: ['1'],
    rooms: [],
    time1: "08:00-12:00",
    time2: "12:00-18:00",
    time3: "18:00-22:00",
    chooseRoom: "",
    isOpen : false,
    roomId: '',
    status: true,
    aa: '',
    bb: '',
    cc: '',
    dd: '',
    ee: '',
    undealReportNum: 0,
  },
  tap(e){
      this.setData({//获取点击举报记录id
        roomId: e.currentTarget.dataset.roomid,
        // time1: e.currentTarget.dataset.one,
        // time2: e.currentTarget.dataset.two,
        // time3: e.currentTarget.dataset.three,
        // status: e.currentTarget.dataset.status,
      })
    console.log(this.data.roomId)
    console.log(this.data.time1)
    console.log(this.data.time2)
    console.log(this.data.time3)
    console.log(this.data.status)
  },
  summit(){
    Dialog.confirm({
      message: '确定修改开放时间？'
    }).then(() => {
      // on confirm
      
      db.collection('room').doc(this.data.roomId).update({
        data: {
          time1: this.data.time1,
          time2: this.data.time2,
          time3: this.data.time3,
        },
        success: res => {
          this.setData({
            activeNames: ['0']
          })
          console.log(this.data.roomId)
          console.log(this.data.time1)
          console.log(this.data.time2)
          console.log(this.data.time3)
          console.log(this.data.status)
        },
        fail: err => {
          icon: 'none',
            console.error('[数据库] [更新记录] 失败：', err)
        }
      })
    })
    console.log(this.data.time3)  
  },
  switch({ detail }) {
    // 需要手动对 checked 状态进行更新
    this.setData({ status: detail });
    console.log(this.data.status)
    db.collection('room').doc(this.data.roomId).update({
      data: {
        openStatus:this.data.status,
      },
      success: res => {
        this.setData({
         // activeNames: ['0']
        })
        console.log(this.data.roomId)
        console.log(this.data.time1)
        console.log(this.data.time2)
        console.log(this.data.time3)
        console.log(this.data.status)
      },
      fail: err => {
        icon: 'none',
          console.error('[数据库] [更新记录] 失败：', err)
      }
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

  onChanges(event) {
    this.setData({
      activeNames: event.detail
    });
  },
  onChange1(event) {
    // event.detail 为当前输入的值
    this.data.time1 = event.detail;
    console.log(this.data.time1)
  },
  onChange2(event) {
    // event.detail 为当前输入的值
    this.data.time2 = event.detail
    console.log(this.data.time2)
  },
  onChange3(event) {
    // event.detail 为当前输入的值
    this.data.time3 = event.detail
    console.log(this.data.time3)
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
    db.collection('room').get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data)
        //这一步很重要，给ne赋值，没有这一步的话，前台就不会显示值      
        this.setData({
          rooms: res.data
        })
      }
    })
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