num = 10
day = "three"
son = "son"

a = "I ate %d apples. so I was sick for %s days. " %(num, day)
b = "Hello! My name is {name}! Nice to meet you!".format(name="9noeS")
c = f"Let's go sonny Let's go {son}"
d = "%10s" % "hi"
e = "%0.6f" % 3.1415926535
f = "noroomforracism"
g = ":"
h = "i love you"
i = "You're so beautiful"
j = [1,2,"mom","dad","sis","me"]
j[0] = 3 #해당하는 자리 교체
j[0:3] = [] #리스트 비우기
j.append("grandmother") #리스트에 추가
 
print(a)
print(b)
print(c)
print(d)
print(e)
print(f.find('o')) #해당하는 문자의 index 찾기
print(f.count('r')) #해당하는 문자의 개수
print(g.join("abcdefg"))
print(h.upper())
print(i.replace("beautiful", "ugly"))
print(j)