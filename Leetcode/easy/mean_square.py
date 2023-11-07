def solution(list1,list2):
    list3 = []
    for i in range(len(list1)):
        list3.append(list1[i]-list2[i])
        list3[i] **= 2
    return sum(list3)/(len(list3))

def solution1(a, b):
    return sum((x - y)**2 for x, y in zip(a, b)) / len(a)
