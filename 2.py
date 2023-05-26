so=open("2.txt","rt",en coding='UTF-8')
txt=so.read()
txt=txt.lower()

str1=".','--=()"
for ch in str1:
    txt=txt.replace(ch,"")

word=txt.split()
counts={}

