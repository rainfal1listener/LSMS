// pages/seats/seats.js
import Dialog from '../../miniprogram_npm/@vant/weapp/dialog/dialog';
import Toast from '../../miniprogram_npm/@vant/weapp/toast/toast';
const db = wx.cloud.database();

const app = getApp()
Page({

  /**
   * 页面的初始数据
   */
  data: {
    type :"插座",
    seat :[],
    choosenum : "",
    chooseNum: "",
    selectedRoomName : '',
    selectedTime : '',
    selectedId : '',
    selectRoomTime1:'',
    selectRoomTime2: '',
    selectRoomTime3: '',
    timeType:'',

    radio: true,

  },
  order(){
    Dialog.confirm({
      title: '请确定选择当前座位和时间段',
      message: '订座后如果没用按时签到或提前取消预约会扣除一定的信用分哦~'
    }).then(() => {
      //on confirm

      Toast.success('订座成功');
      getApp().globalData.isOrder = true;
      getApp().globalData.orderRoom = this.data.selectedRoomName;
      getApp().globalData.orderTime = this.data.selectedTime;
      getApp().globalData.orderSeatNum = this.data.chooseNum;
      getApp().globalData.orderSeatId = this.data.selectedId;
      //获取当前年月日
      var timestamp = Date.parse(new Date());
      var date = new Date(timestamp);
      //获取年份  
      var Y = date.getFullYear();
      //获取月份  
      var M = (date.getMonth() + 1 < 10 ? '0' + (date.getMonth() + 1) : date.getMonth() + 1);
      //获取当日日期 
      var D = date.getDate() < 10 ? '0' + date.getDate() : date.getDate();
      var tt = + Y+'-'+M+'-'+D ;
      
      //插入预定记录
      db.collection('orderRecord').add({
        // data 字段表示需新增的 JSON 数据
        data: {
          room: this.data.selectedRoomName,
          seat: this.data.chooseNum,
          orderSeatId : this.data.selectedId,
          user: app.globalData.userOpenId,
          orderDate: tt,
          orderTime: this.data.selectedTime,
          isUsed: false
        },
        success: function (res) {
          console.log('order Record Insert Success！')
        },
        fail: console.error
      })


      //修改座位状态
      if(this.data.timeType==1){
        db.collection('seat').doc(this.data.selectedId).update({
          // data 传入需要局部更新的数据
          data: {
            // 表示将 done 字段置为 true
            orderTime1:1,
            type:'noOrder',
            userOpenId: app.globalData.userOpenId
          },
          success: console.log('修改座位状态1成功'),
          fail: console.error
        })   
      }
      if (this.data.timeType==2) {
        db.collection('seat').doc(this.data.selectedId).update({
          // data 传入需要局部更新的数据
          data: {
            // 表示将 done 字段置为 true
            orderTime2: 2,
            type: 'noOrder',
            userOpenId: app.globalData.userOpenId
          },
          success: console.log('修改座位状态2成功'),
          fail: console.error
        })
      }
      if (this.data.timeType==3) {
        db.collection('seat').doc(this.data.selectedId).update({
          // data 传入需要局部更新的数据
          data: {
            // 表示将 done 字段置为 true
            orderTime3: 3,
            type: 'noOrder',
            userOpenId: app.globalData.userOpenId
          },
          success: console.log('修改座位状态3成功'),
          fail: console.error
        })
      }
      
      

      
      wx.switchTab({
        url: "/pages/home/home"
      })
      
    }).catch(() => {
      // on cancel
    });

    
  },
  onChange(event) {
    this.setData({
      radio: event.detail

    });
  },
  choose(e){
    this.setData({
      chooseNum: e.currentTarget.dataset.choosenum
    })
    db.collection('seat').where({
      num: this.data.chooseNum
    }).get({
      //如果查询成功的话    
      success: res => {
        console.log(res.data[0]._id)   
        this.setData({
          selectedId: res.data[0]._id
        })
      }
    })
  },

  /**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {
    
    this.setData({
      selectedRoomName: options.selectedRoomName,
      selectedTime: options.selectedTime
    })
    db.collection('seat').where({
      room: this.data.selectedRoomName
    }).get({
      //如果查询成功的话    
      success: res => {
        //console.log(res.data)   
        this.setData({
          seat: res.data
        })
      }
    })
    db.collection('room').where({//查询选座房间的3个时间段
      name: this.data.selectedRoomName
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
        if (this.data.selectedTime == this.data.selectRoomTime1){
          console.log('所选时间段为第一时间段')
          this.setData({
            timeType:1,
          })
          console.log(this.data.timeType)
        }
        if (this.data.selectedTime == this.data.selectRoomTime2) {
          console.log('所选时间段为第二时间段')
          this.setData({
            timeType: 2,
          })
        }
        if (this.data.selectedTime == this.data.selectRoomTime3) {
          console.log('所选时间段为第三时间段')
          this.setData({
            timeType: 3,
          })
        }
      }
      
    })
    

    //console.log(selectedRoomName)
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