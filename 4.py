
import urllib.request
url="https://weibo.com/hot"

html=urllib.request.urlopen(url)

html=html.read()
html=html.decode()
print(html)

 
