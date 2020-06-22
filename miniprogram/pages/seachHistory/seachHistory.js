// pages/seachHistory/seachHistory.js
var app = getApp()
const db = wx.cloud.database();
const date = new Date()
const years = [2019,2020]
const months = ['01','02','03','04','05','06','07','08','09',10,11,12]
const days = ['01', '02', '03', '04', '05', '06', '07', '08', '09', 10, 11, 12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31]

// for (let i = 1990; i <= date.getFullYear(); i++) {
//   years.push(i)
// }

// for (let i = 1; i <= 12; i++) {
//   months.push(i)
// }

// for (let i = 1; i <= 31; i++) {
//   days.push(i)
// }
Page({

  /**
   * 页面的初始数据
   */
  data: {
    historyRecord : {},
    years: years,
    year: date.getFullYear(),
    months: months,
    month: 2,
    days: days,
    day: 2,
    value: [9999, 1, 1],
    activeNames: ['0'],
    chooseDate : '',
  },
  submit(){
    this.setData({
      activeNames: ['0'],
      chooseDate: this.data.year + '-' + this.data.month + '-' + this.data.day
    })
    console.log(this.data.chooseDate)
    db.collection('historyRecord').where({
      isUsed: true,
      user: app.userInfo.nickName,
      date:this.data.chooseDate
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data)
        //这一步很重要，给ne赋值，没有这一步的话，前台就不会显示值      
        this.setData({
          historyRecord: res.data
        })
      }
    })
  },
  bindChange: function (e) {
    const val = e.detail.value
    this.setData({
      year: this.data.years[val[0]],
      month: this.data.months[val[1]],
      day: this.data.days[val[2]]
    })
    this.setData({
      //activeNames: ['0'],
      chooseDate: this.data.year + '-' + this.data.month + '-' + this.data.day
    })
    console.log(this.data.chooseDate)
    db.collection('historyRecord').where({
      isUsed: true,
      user: app.userInfo.nickName,
      date: this.data.chooseDate
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data)
        //这一步很重要，给ne赋值，没有这一步的话，前台就不会显示值      
        this.setData({
          historyRecord: res.data
        })
      }
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
    db.collection('historyRecord').where({
      isUsed : true,
      user : app.userInfo.nickName,
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data)
        //这一步很重要，给ne赋值，没有这一步的话，前台就不会显示值      
        this.setData({
          historyRecord: res.data
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