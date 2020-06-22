// miniprogram/pages/user/user.js
const app = getApp();//拿到app.js的this对象
const db = wx.cloud.database();//初始化数据库

import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
import Toast from '../../miniprogram_npm/@vant/weapp/toast/toast';

Page({

  /**
   * 页面的初始数据
   */
  data: {
    userPhoto: "/images/user/Unlogin.png",
    nickName : "昵称",
    gender : "性别",
    isLogin: app.globalData.isLogin,
    cScore: app.globalData.cScore,
    sScore: app.globalData.sScore,
    disabled : false,
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
            nickName: app.userInfo.nickName,
            isLogin:true,
            cScore: app.userInfo.cScore,
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

  },


  login_confirm(ev){
    Dialog.confirm({
      title: '授权登录',
      message: '我们将获取您的用户和头像'
    }).then(() => {
      // on confirm
      let userInfo = ev.detail.userInfo;
      if (!this.data.logged && userInfo) {
        db.collection('users').add({//插入
          data: {
            userPhoto: userInfo.avatarUrl,
            nickName: userInfo.nickName,
            gender: userInfo.gender,//性别 0：未知、1：男、2：女
            cScore: 100,
            sScore: 100,
            choosePrefer : null,


          }
        }).then((res) => {
          db.collection('users').doc(res._id).get().then((res) => {//拿取当前id对应的所有字段
            //console.log(res.data);
            app.userInfo = Object.assign(app.userInfo, res.data);
            app.globalData.hasLogin = true;
            this.setData({
              userPhoto: app.userInfo.userPhoto,
              nickName: app.userInfo.nickName,
              isLogin: true
            });

          });
        });
        Toast.success('登录成功');
      }
      
    }).catch(() => {
      // on cancel
    });
  },
  bindGetUserInfo(ev){//写入数据库用户信息
    //console.log(ev);


  }
})