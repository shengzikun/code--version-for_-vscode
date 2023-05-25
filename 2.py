s = 'i love love  you more thani cansay'
words=s.split()
print(words)
count={}
for word in s:
    count[word]=count.get(word,0)+1

print(count[word])