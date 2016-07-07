    /*******************************************************************************************
程序名： 数码管动态显示
编写人： 花花雪
编写时间： 2016 年 7月7 日
硬件支持：AT89S52 
接口说明：
修改日志：
NO.1
/*******************************************************************************************
//说明 ：延时控制LED灯亮灭
			
*******************************************************************************************/
  //[单片机常用SFR头文件]
  # include <REG52.h> 
 // [常用定义声明]
  # define uint unsigned int
  # define uchar unsigned char
  sbit duanxuan=P2^1;//段选接的哪个引脚，改为哪个引脚
  sbit weixuan=P2^2;//位选接的哪个引脚，改为哪个引脚
  uchar code segcode[]={
  						0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,
						0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71
  						} ;		//共阴极数码管显示
 void delay_ms(uint x)
  {
  		uint i,j;
		for(i=x;i>0;i++)
			for(j=110;j>0;j++);

  }

 void main()
 {
 	while (1)
	{
	  weixuan=1;		//打开位选芯片的跟随模式
	  P0=0xfd;			//给74HC573输入数据
	  weixuan=0;	    // 关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  P0=0xff;			// 消除残影
		
	  duanxuan=1;		//打开段选芯片的跟随模式
	  P0=segcode[1];			//输入显示数据的编码	
	  duanxuan=0;		//关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  delay_ms(1000);

	  weixuan=1;		//打开位选芯片的跟随模式
	  P0=0xfb;			//给74HC573输入数据
	  weixuan=0;	    // 关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  P0=0xff;			// 消除残影
		
	  duanxuan=1;		//打开段选芯片的跟随模式
	  P0=segcode[2];			//输入显示数据的编码	
	  duanxuan=0;		//关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  delay_ms(1000);

	  weixuan=1;		//打开位选芯片的跟随模式
	  P0=0xf7;			//给74HC573输入数据
	  weixuan=0;	    // 关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  P0=0xff;			// 消除残影
		
	  duanxuan=1;		//打开段选芯片的跟随模式
	  P0=segcode[3];			//输入显示数据的编码	
	  duanxuan=0;		//关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  delay_ms(1000);

	  weixuan=1;		//打开位选芯片的跟随模式
	  P0=0xef;			//给74HC573输入数据
	  weixuan=0;	    // 关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  P0=0xff;			// 消除残影
		
	  duanxuan=1;		//打开段选芯片的跟随模式
	  P0=segcode[4];			//输入显示数据的编码	
	  duanxuan=0;		//关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  delay_ms(1000);

	  weixuan=1;		//打开位选芯片的跟随模式
	  P0=0xdf;			//给74HC573输入数据
	  weixuan=0;	    // 关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  P0=0xff;			// 消除残影
		
	  duanxuan=1;		//打开段选芯片的跟随模式
	  P0=segcode[5];			//输入显示数据的编码	
	  duanxuan=0;		//关闭跟随模式，打开锁存模式，保存上一次输入的数据
	  delay_ms(1000);

	}
 
 
 }