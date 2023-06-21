# 水仙花
a=2
while a>0:

 d=(a//100)
 b=(a//10%10)
 c=(a%10)
 if(d**3+b**3+c**3==a):
  print("{}是水仙花".format(a))

 a=a+1
