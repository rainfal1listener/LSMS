// pages/adminLogin/adminLogin.js
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库
import Toast from '../../miniprogram_npm/@vant/weapp/toast/toast';
Page({

  /**
   * 页面的初始数据
   */
  data: {
    value : '',
    username : 'admin001',
    password : '',
  },
  adminLogin(){
    db.collection('admin').where({
      user: this.data.username,
      psw:this.data.password
    }).get().then((res) => {

      if (res.data.length) {
        app.globalData.admin = this.data.username;
        Toast('登录成功')
        wx.redirectTo({
          url: "/pages/openTimeManage/openTimeManage"
        })
      }
      else {
        Toast('登录失败')
      }
    });
  },
  onChange1(event) {
    // event.detail 为当前输入的值
    console.log(event.detail);
    this.data.username=event.detail
  },
  onChange2(event) {
    // event.detail 为当前输入的值
    console.log(event.detail);
    this.data.password = event.detail;
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