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
from random import randint

yz=''
for i in range(6):
    # a=random.randint(0,9)
    a=randint(0,9)
    yz=yz+str(a)

print(yz)  
# # 时间===============================
import datetime 
nowtime=datetime.datetime.now()
print(nowtime)
# 出生日期================
import datetime
nowtime=datetime.datetime(2004,2,4,15,56,0,0)
print(nowtime.min)
print(nowtime.max)
print(nowtime.year)
print(nowtime.hour)
print(nowtime.isoformat())
print(nowtime.isoweekday())
print(nowtime.strftime("%Y,%m,%d,%H:%i,M:%S,%A"))
print("你出生于{0:%Y}年{0:%m}月{0:%d}日，星期{0:%A}".format(nowtime))
        