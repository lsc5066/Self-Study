#리스트(변경 가능) vc 튜플(변경 불가능-고정)
t1 = (1,2,'a','b')
t2 = (3,4,'c','d')
print(t1[0])
print(t1 + t2)
print(t1[0]+1)

dic = {'name': 'Eric', 'age' : 15}
print(dic['name'])
print(dic['age'])
del dic['name']
print(dic)

dic1 = {1:'해', 2:'달', 3:'구름'}
print(dic1.keys())
print(dic1.values())
print(dic1.items())
for k in dic1.keys():
    print(k)

for k in dic1.values():
    print(k)

for k in dic1.items():
    print(k)

print(1 in dic1) #해당하는 key가 있는지 확인 - 있으면 True 없으면 False
print(4 in dic1)
dic1.clear() #dictionary 비우기
print(dic1)
print(dic1.get(3,'존재하지 않습니다')) #key3에 해당하는 value가 없으면 '존재하지 않습니다' 출력

#집합
s1 = {1,2,3}
print(type(s1))

s2 = [1,2,2,3,3]
newList = list(set(s2))
print(newList)

s3 = set([1,2,3,4,5,6])
s4 = set([4,5,6,7,8,9])

print(s3 & s4) #교집합
print(s3 | s4) #합집합 print(s3.union(s4))
print(s3 - s4) #s3의 차집합  print(s3.difference(s4))

s3.add(7)
print(s3)
s4.update([10,11,12])
print(s4)

#부울

a =[1,2,3]

if a:
    a.pop()
    print(a)

b = a #주소를 가져온 것
print(id(a)) #주소 확인
print(id(b))
print(a is b)

b = a[:] #값을 '복사'한 것
print(id(a))
print(id(b))
print(a is b)

z=3
y=5

z,y = y,z
print(z)
print(y)