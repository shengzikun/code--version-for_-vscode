#for i in range(1,10):
 #   for j in range(1,i+1):
#        result= j*i
#        print("{}×{}={}".format(j,i,result),end=' ')
#    print()


from pyecharts.charts import Bar
bar=Bar()
bar.add_xaxis([1,2,3,4,5,6,])
bar.add_yaxis("商家a",[5,20,36,10,75,90])
bar.render()
