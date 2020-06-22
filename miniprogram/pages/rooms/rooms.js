// pages/rooms/rooms.js
const db = wx.cloud.database();
Page({

  /**
   * 页面的初始数据
   */
  data: {
    activeNames: ['0'],
    rooms:[],
    time1 : "",
    time2 : "",
    time3 : "",
    chooseRoom : ""
  },
  time1_btn(e){
    console.log(e)
    var temp = e.currentTarget.dataset.chooseroom.name;
    var temp2 = e.currentTarget.dataset.chooseroom.time1;
    console.log(temp)
    wx.navigateTo({
      url: "../seats/seats?selectedRoomName=" + temp + '&selectedTime=' + temp2
    }) 
  },
  time2_btn(e) {
    console.log(e)
    var temp = e.currentTarget.dataset.chooseroom.name;
    var temp2 = e.currentTarget.dataset.chooseroom.time2;
    console.log(temp)
    wx.navigateTo({
      url: "../seats/seats?selectedRoomName=" + temp + '&selectedTime=' + temp2
    })
  },
  time3_btn(e) {
    console.log(e)
    var temp = e.currentTarget.dataset.chooseroom.name;
    var temp2 = e.currentTarget.dataset.chooseroom.time3;
    console.log(temp)
    wx.navigateTo({
      url: "../seats/seats?selectedRoomName=" + temp + '&selectedTime=' + temp2
    })
  },

  onChange(event) {
    this.setData({
      activeNames: event.detail
    });
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
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