#乘法表========================
#for i in range(1,10):
 #   for j in range(1,i+1):
#        result= j*i
#        print("{}×{}={}".format(j,i,result),end=' ')
#    print()
#============

# from pyecharts.charts import Bar
# bar=Bar()
# bar.add_xaxis([1,2,3,4,5,6,])
# bar.add_yaxis("商家a",[5,20,36,10,75,90])
# bar.render()
#随机验证码=====================
# import random
# from random import randint

# yz=''
# for i in range(6):
#     # a=random.randint(0,9)
#     a=randint(0,9)
#     yz=yz+str(a)

# print(yz)  
# # # 时间===============================
# import datetime 
# nowtime=datetime.datetime.now()
# print(nowtime)
# # 出生日期================
# import datetime
# nowtime=datetime.datetime(2004,2,4,15,56,0,0)
# print(nowtime.min)
# print(nowtime.max)
# print(nowtime.year)
# print(nowtime.hour)
# print(nowtime.isoformat())
# print(nowtime.isoweekday())
# print(nowtime.strftime("%Y,%m,%d,%H:%i,M:%S,%A"))
# print("你出生于{0:%Y}年{0:%m}月{0:%d}日，星期{0:%A}".format(nowtime))
# <<<<<<< HEAD
        
# =======
# //猜数字=========================
# import random
# a=random.randint(1,100)
# print(a)
# count=0
# while True:
 
#  b=eval(input())
#  if a>b:
    
#     print("猜小了")
#     count=count+1
#  elif a<b:
#      print("猜大了")
#      count=count+1
#  else:
#      count=count+1
#      print("经过%d" %count)
#      break
#  //异常处理=====================
# try:
#     x=int(input("请输入第一个整数"))
#     y=int(input("请输入第一个整数"))
#     assert x==y,"x和y不相等"
# except ValueError as err1:
#     print(err1)
#     print("err1处理逻辑")
# except AssertionError as err2:
#     print(err2)
#     print("err2处理逻辑")
# except Exception as err3:
#     print(err3)
#      print("err3处理逻辑")     
    
#     print("程序继续往下执行")
# #=======================   

fo=open("1.txt","rt",encoding='UTF-8')
txt=fo.read()
#大小写转换
txt=txt.lower()
#去掉标点符号
str1="~!#%&*()',.;"
for ch in str1:#遍历str1并放在ch中
    txt=txt.replace(ch,"")
#把整篇分成一个个单词
words=txt.split()
#创建一个 字典
counts={}

for word in words:
    counts[word]=counts.get(word,0)+1

listwords=(list)(counts.items())
listwords.sort(key=lambda x:x[1],reverse=True)

for i in range(10):
    word,count=listwords[i]
    print("{0:<10}{1:>5}".format(word,count))

