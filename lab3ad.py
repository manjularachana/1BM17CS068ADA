def median(m1,m2,a1,a2):
    if m1==m2:
        return m1
    elif m1>m2 and len(a1)!=2 and len(a2)!=2:
        if len(a1)%2==0:
            a=a1[0:len(a1)/2]
            if len(a)%2==0:
                m1=(a[len(a)/2]+a[len(a)/2-1])/2
            else:
                m1=a[len(a)//2]
        else:
            a=a1[0:a1.index(m1)+1]
            if len(a)%2==0:
                m1=(a[len(a)/2]+a[len(a)/2-1])/2
            else:
                m1=a[len(a)//2]
        if len(a2)%2==0:
            b=a2[len(a2)/2:len(a2)+1]
            if len(b)%2==0:
                m2=(b[len(b)/2]+b[len(b)/2-1])/2
            else:
                m2=b[len(b)//2]
        else:
            b=a2[a2.index(m2):len(a2)+1]
            if len(b)%2==0:
                m2=(b[len(b)/2]+b[len(b)/2-1])/2
            else:
                m2=b[len(b)//2]
        return median(m1,m2,a,b)
    elif m1<m2 and len(a1)!=2 and len(a2)!=2:
        if len(a1)%2==0:
            a=a1[len(a1)/2:len(a1)+1]
            if len(a)%2==0:
                m1=(a[len(a)/2]+a[len(a)/2-1])/2
            else:
                m1=a[len(a)//2]

        else:
            a=a1[a1.index(m1):len(a1)+1]
            if len(a)%2==0:
                m1=(a[len(a)/2]+a[len(a)/2-1])/2
            else:
                m1=a[len(a)//2]

        if len(a2)%2==0:
            b=a2[0:len(a2)/2]
            if len(b)%2==0:
                m2=(b[len(b)/2]+b[len(b)/2-1])/2
            else:
                m2=b[len(b)//2]
        else:
            b=a2[0:a2.index(m2)+1]
            if len(b)%2==0:
                m2=(b[len(b)/2]+b[len(b)/2-1])/2
            else:
                m2=b[len(b)//2]
        return median(m1,m2,a,b)
    if len(a1)==2 and len(a2)==2:
        mediani=(max(a1[0],a2[0])+min(a1[1],a2[1]))/2
        return mediani
print("enter the first sorted array")
li1,li2=[],[]
for i in range(8):
    aele=int(input())
    li1.append(aele)
print("enter the second array elements")
for i in range(8):
    bele=int(input())
    li2.append(bele)
me1,me2=0,0
if len(li1)%2==0:
    me1=(li1[len(li1)/2]+li1[len(li1)/2-1])/2
else:
    me1=li1[len(li1)//2]
if len(li2)%2==0:
    me2=(li2[len(li2)/2]+li2[len(li2)/2-1])/2
else:
    me2=li2[len(li2)//2]
print(me1," ",me2)
print(median(me1,me2,li1,li2))
