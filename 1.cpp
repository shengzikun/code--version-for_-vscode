#include <stdio.h>
//int main(){
//	int a=0;
//	int b=0;
//	int c=0;
//    scanf("%d%d",&a,&b);
//	c=a+b;
//		printf("%d\n",c);
//
//	return 0;
//}
//===================================
//int main()
//{
//int a=0;
//scanf("%d",&a);
//if(a==0)
//	printf("恭喜你\n");
//else
//	printf("很遗憾\n");
//}
//=====================================
/*int main()
{
	int a=0;
	while(a<100)
	{
		printf("敲一行代码\n");
		a++;
	}
 return 0;
}*///字符串的结束是\0   "abcd\0"\0被隐藏了
//===============================================
//int Max(int a,int b)//自定义一个函数
//{
//if(a>b)
//	return a;
//else
//	return b;
//}
//int main()
//{
//	int a=10;
//	int b=17;
//	int max=0;
//	max=Max(a,b);
//	printf("max=%d\n",max);
//return 0;
//}
//=================================================
                    //(类型) 强制类型转换 double->int
               //()函数调用操作符  []下标引用 例如  arr[4]
/* int main()    //signed int=int  定义变量有符号 3可正可负
	                   //unsigned int 定义没有符号变量 3
{					 //typedef类型重定义
  typedef unsigned int abc;
	  unsigned int a=10;
  abc ab=10;
}
//=========================
*/
/*int test()
{
static int a=1;     //定义一个静态局部变量 ，生命周期增长
a++;			         //只能在自己源文件内使用
printf("%d\n",a);
return a;
}
int main()
{
int b=0;
	while(b<5)
	{
	test();
		b++;
	}
	return 0;
}*/
//=========================================
//
//#define max 100 定义max为100 所有max都为100
//宏
/*#define MAX(x,y) (x>y?x:y)
int main()
{
int a=1;
int b=2;
 int c=MAX(a,b);
  printf("%d\n",c);
return 0;

}*/ //bit<byte<kb<mb<gb<tb
/*int main()
{
int a=10;  
int* p=&a;
*p=20;

printf("%d\n",a );//&a取地址  %p地址格式 打印为十六进制
return 0;			//有一种变量来存放地址-指针变量

}
*///===================================
 
// struct book  //创建结构体类型
// {
// char name[20];
// int price;
// 
// };
//#include<string.h>
// int main()
// {      //创建一个结构体变量
//	 struct book b1={"c语言",55};
//	 struct book* pb = &b1;
//	 printf("%s\n",pb->name);
//	 printf("%d\n",pb->price);
//
//	 printf("书名:%s\n",b1.name);
//	 printf("价格:%d\n",b1.price);
//
//	 strcpy(b1.name,"c++");//字符串拷贝
//	 printf("%s\n",b1.name);
//
//	 b1.price=20;
//	 printf("价格:%d\n",b1.price);
// return 0;
// }
//==========================================
/*int main()
{
int age=0;
scanf("%d",&age);
if(age<18)
{
	printf("+++++++未成年+++++++\n");
	printf("=====不能打游戏=====\n");
}
	 else if (age>=18 && age<28)
	  printf("青年\n");
	 else if(age>=28 && age<50)
	  printf("壮年\n");
	 if(age>50)
	  printfint test()("老年\n");
	 return 0;


}*/
//======================================================
/*int main()
{
int a=1;
if(a=2)
	printf("hehe\n");   // =为赋值  == 为判断

}*/
//===================================================
// int main()
// {
// int a=0;
// while(a<100)
// {
// if(a%2==0)
// 	printf("%d ",a);
// 	a++;
// }

// }
//======================================

//int main()
//{
//	int a = 0;
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch用于多分支语句
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;  //遇到break直接终止整个程序
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	}
//	return 0;
// ==========================================================
// int main()
// {
// 	int i=1;
// 	while (i<=10)
// 	{

// 		if (i==5)
// 			continue;   //遇到continue 用于本次循环终止，直接跳到while再次循环
// 		printf("%d", i);
// 		i++;

// 	}
// =========================================================
// 	int main()
// {
// 	int a = getchar(); //getchar 输入
// 	putchar(a);//输出
// 		printf("%c", a);


// }
	//============================================
//int main()
//{
//	int ch = 0;
//	int ae = 0;
//	char passsword[20] = { 0 };
//	printf("输入密码");
//	scanf("%s",passsword);
//	while ((ch = getchar()) !='\n' );
//	{
//		;
//	}
//	printf("请确认");
//	ae = getchar();
//	if (ae == 'Y')
//	{
//		printf("成功");
//	}
//	else
//	{
//		printf("失败");
//	}
//	return 0;
//}
int main()
{
	int a=0;
	for(a=1;a<=10;a++)
	{
		if(a==2)
		continue;
		printf("%d",a);
	}
	return 0;

}
	
