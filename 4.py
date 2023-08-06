
import urllib.request
url="https://jwpd.webvpn.jsei.edu.cn/xsxk/zzxkyzb_cxZzxkYzbIndex.html?gnmkdm=N253512&layout=default&su=2022220961t&ps=2jsei0961"

html=urllib.request.urlopen(url)

html=html.read()
html=html.decode()
print(html)

 
