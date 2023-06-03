a=input('输入题目')
import urllib.request
url="https://www.hive-net.cn/backend/wangke/search?token=free&question=%s" %a

html=urllib.request.urlopen(url)

html=html.read()
html=html.decode()
print(html)

 
