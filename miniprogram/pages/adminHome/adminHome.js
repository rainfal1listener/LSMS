// pages/adminHome/adminHome.js
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库
import Toast from '../../miniprogram_npm/@vant/weapp/toast/toast';
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
Page({

  /**
   * 页面的初始数据
   */
  data: {

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
    var that = this;
    wx.cloud.callFunction({
      name : "login",
      data : {}
    }).then((res) => {
      
      //console.log(res);
      //查
      db.collection('users').where({
        _openid : res.result._openid
      }).get().then((res)=>{
        
        if(res.data.length){
          app.userInfo = Object.assign(app.userInfo, res.data[0]);
          app.globalData.isLogin = true;
          this.setData({
            userPhoto: app.userInfo.userPhoto,
            nickName: app.globalData.admin,
            isLogin:true,
            cScore: app.userInfo.cScore,
            sScore: app.userInfo.sScore
          });
          app.globalData.cScore = app.userInfo.cScore,
          app.globalData.sScore = app.userInfo.cScore,
          app.globalData.gender = app.userInfo.gender
          
        }
        else{
          that.setDate({
            disabled : false,
          });
        }
      });
    });
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