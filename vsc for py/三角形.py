def fun (x,y,z):
    if x+y>z or y+z>x or x+z>y:
        print('可以')
    else:
        print('不可以')


x=input("请输入第一个数")
y=input("请输入第二个数")
z=input("请输入第三个数")
fun(x,y,z)