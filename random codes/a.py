l1= ["ashish","kumar","gupta","abishek","aakash"]
l2=[34,32,21,34,32]
l3 = list(l2)
minval = min(l2) #21
secondmin=0 # 0
l3.sort() #[21,32,32,34,34]
for i in range(len(l3)):
    if(minval < l3[i]):
        secondmin = l3[i]
        break
for i in range(len(l2)):
    if(secondmin == l2[i]):
        print(l1[i])
