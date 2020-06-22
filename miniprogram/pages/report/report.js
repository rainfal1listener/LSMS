// pages/report/report.js
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库
Page({

  /**
   * 页面的初始数据
   */
  data: {
    option1: [
      { text: '违规占座', value: '违规占座'},
      { text: '人不在', value: '人不在' },
      { text: '有东西人不在', value: '有东西人不在' }
    ],
    value1: '违规占座',
    room:'',
    seat: '',
    note: '',
    type: '',
  },
  onChange1(event) {
    // event.detail 为当前输入的值
    console.log(event.detail);
    this.data.room = event.detail
  },
  onChange2(event) {
    // event.detail 为当前输入的值
    console.log(event.detail);
    this.data.seat = event.detail
  },
  onChange3(event) {
    // event.detail 为当前输入的值
    console.log(event.detail);
    this.data.note = event.detail
  },
  onChange4({ event }) {
    this.setData({ switch2: detail });
    console.log(switch2)
  },
  submit(){
    Dialog.confirm({
      message: '感谢您为图书馆尽的一份力！您的监督有利于维护图书馆的秩序！'
    }).then(() => {
      // on confirm
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


      var today = + Y + '-' + M + '-' + D;
      var now = h + ':' + m
      db.collection('report').add({//插入举报记录
        data: {
          reporter: app.userInfo.nickName,
          room: this.data.room,
          seat: this.data.seat,
          type: this.data.value1,
          note:this.data.note,
          isDeal:false,
          date:today,
          time:now
        },
        success: function (res) {
          wx.showToast({
            title: '举报成功',
          })
        },
        fail: console.error
      })
    }).catch(() => {
      // on cancel
    });
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
  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {

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