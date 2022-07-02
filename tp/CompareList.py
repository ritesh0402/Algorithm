from mypackage.listpackage.listops import*
l1 = [22, 23, 24, 25]
l2 = [33, 34, 35, 36]
if(len(l1) == len(l2)):
    x = listcom()
    if (x.compare(l1, l2)):
        print("All Elements of L1 is smaller than elements of L2")
    else:
        print("All Elements of L1 is not smaller than elements of L2")
else:
    print("Size of 2 lists are not same")
l3 = x.merge(l1, l2)
print(l3)
