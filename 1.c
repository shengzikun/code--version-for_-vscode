 #include <stdio.h>
#include<stdlib.h>

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
// int main()
// {
// 	int a=0;
// 	for(a=1;a<=10;a++)
// 	{
// 		if(a==2)
// 		continue;
// 		printf("%d",a);
// 	}
// 	return 0;
// }
//=========================
// int main()
// {
// int a;
// int b;
// for(a=1;a<10;a++)
// {
// 	for(b=1;b<=a;b++)
// 	{
// 	printf("%d*%d=%-3d",a,b,a*b);
// 	}
// 	printf("\n");
// }
// return 0;
// }
//===========================
// int main()
// {
// int a=0;
// int b=0;
// 	for(a=0;a<10;a++)
// 	{
// 		for(b=0;b<10;b++)
// 		{
// 			printf("hello\n");
// 		}
// 	}
// 	return 0;
// }
//===========
// int main()
// {
// 	int i=0;
// 	do
// 	{
//        printf(" %d ",i);
// 	   i++;
// 	}
//     while(i<=10);	   
// 	return 0;
// }
//阶乘1！+2！+3！=   =================
// int main()
// {
//  int a=0;
//  int b=0;
//  int s=1;
//  int c=0;
//  for(b=1;b<=3;b++)
// {
//      s=s*b;
//      c=c+s;
//  }
// printf("%d",c);
// return 0;
// }
//===============================
//找数字
// int main()
// {
//     int arr[]={1,2,3,4,5,7,6,7,8,9};
// 	int k=5;
// 	int b=0;
// 	int c=sizeof(arr)/sizeof(arr[0]);
// 	printf("%d\n",c);
	
// for(b=0;b<c;b++)
// {
// 	if(k==arr[b])
// 	    {
// 			printf("找到了,为%d",arr[b]);
// 			break;
// 		}


// }
// if(b==k)
// 	printf("找不到");

// return 0;
// }
//找数字2==============================
// int main()
// {
// int k=7;
// int arr[]={1,2,3,4,5,6,7,8,9};
// int sz=sizeof(arr)/sizeof(arr[0]);
// int left=0;
// int right=sz-1;
// while(left<=right)
// { 
// int mid=(left+right)/2;
// if(arr[mid]>k)
// {
// 	right=mid-1;
// }
// else if(arr[mid]<k)
// {
// 	left=mid+1;  
// }
// else
// {
// 	printf("为%d",mid);
// 	break;
// }
// }
// if(left>right)
// {
// 	printf("找不到");
// }
// return 0;
// }
//======================
// #include<windows.h>
// #include<stdlib.h>
// int main()
// {
// char arr1[]="welcome to bit!!!!!";
// char arr2[]="###################";

// int left=0;
// int right=strlen(arr1)-1;

// while(left<=right)
// {
// arr2[left]=arr1[left];
// arr2[right]=arr1[right];
// printf("%s\n",arr2);
// Sleep(1000);
// system("cls");//执行系统命令,清空对话
// left++;
// right--;
// }
// 	return 0;
// }
//密码验证=============
// #include<stdlib.h>
// int main()
// {
// 	int i=0;
// 	char password[20]={0};
// 	for(i=0;i<3;i++)
// 	{
//       scanf("%",password);
// 	  if(strcmp(password,"123456")==0)
// 	  {
// 		printf("success");
// 		break;
// 	  }
// 	}
// 	if(i==3)

// 		printf("fail");
	
// system("pause");
// return 0;
// }
//函数==============
// int add (int a,int b)
// {
// 	int z=0;
// 	z=a+b;
// 	return z;
// }
// int main()
// {
// 	int a=1;
// 	int b=2;
// 	int sum=add(a,b);
// 	printf("%d",sum);

// 	system("pause");
// 	return 0;
// }
//strcopy的用法====================
// #include<string.h>
// int main()
// {
// //strcpy复制========================
// 	// char arr1[]="bit";//隐藏了一个\0
// 	// char arr2[10]="";
// 	// strcpy(arr2,arr1);
// 	// printf("%s",arr2);//复制了\0
// //memset替换===============================
// 	// char arr1[]="hello word";
// 	// memset(arr1,'*',5);
// 	// printf("%s",arr1);
// 	system("pause");
// 	return 0;
// }	
//==========================
// int get_max(int a,int b)
// {
// 	int z=0;
// 	if(a>b)
// 	{
// 		return a;
// 	}
// 	else
// 	{
// 		return b;
// 	}
// }
// int main()
// {
// 	int a=36;
// 	int b=500;
// 	int max = get_max(a, b);
// 	printf("%d",max);
// 	system("pause");
// 	return 0;
// }
//====================指针====================
// void  swap(int*x,int*y)
// {

//   int tmp;
//   tmp=*x;
//   *x=*y;
//   *y=tmp;
  
// }
// int main()
// {     
// 	int a=19;
// 	int b=10; 
// 	swap(&a,&b);   
// 	printf("%d %d",a,b);
// 	system("pause");
// 	return 0;
// }
//===================================
// #include "add.h"

// int main()
// {
// 	int a=1;
// 	int b=4;
// 	int s=Add(a,b); 
//     printf("%d",s);
// 	system("psuse");
// 	return 0;
// }
//==================递归======================
// void print(int n)
// {
// 	if(n>9)
// 	{
// 		print(n/10);
// 	}
// 	printf("%d ",n%10);
// }
// int main()
// {
// 	unsigned int num=0;
// 	scanf("%d", &num);
// 	print(num); 
// 	return 0;
// }
//=================================================
// int my_strlen(char*str)
// {	//有计数器
// // int count=0;
// // while(*str!='\0')
// // {
// // 	count++;
// // 	str++;
// // }
// // return count;
// 	//无计数器
// 	if(*str != '\0')
// 	{
// 		return 1+my_strlen(str+1);
// 	}
// 	else
// 	 return 0;
// }
// int main()
// {
// 	char arr[]="bit";
// 	int len=my_strlen(arr);
// 	printf("%d\n  ",len); 
// 	return 0;
// }
//================================
// int count=0;
// int fac(int n)//效率不高
// {
// 	// if(a==3)
// 	{
// 		count++;
// 	}
//     if(a<1)
//      return 1;
//     else
//      return fac(a-1)+fac(a-2);

 // 	int a=1;
// 	int b=1;
// 	int c=1;
// 	while(n>2)
// 	{
// 		c=a+b;
// 		a=b; 
// 		b=c;
// 		n--;
// 	}
// return c;
// }
// int main()
// {
//     int n=0;
//     int ret=0;
//     scanf("%d",&n);
//     ret=fac(n);
//     printf("% d",ret);
//     return 0;
// }
// //==========================
// int main()
// {
// 	// char arr[]={3};
// 	// printf("%d\n",sizeof(arr));
// 	// //计算占空间大小 
// 	// printf("%d\n",strlen(arr));
// 	// //计算字符串长度 引用头文件

// 	//一维
// 	//char arr[]={1,2,3,4,5,6,7,8,9,10};
// 	//二维
// 	char ch[2][4]={{1,2,3},{4,5}};
// 	printf("%d",ch[1][1]);
	
// 	return 0;
// } 
//========================
int main()
{
	
	return 0;
}