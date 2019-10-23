#include<iostream>
using namespace std;
int main(){
int n,a[10],flag=-1;
cout<<"enter n:";
cin>>n;
cout<<"enter the array elements";
for(int i=0;i<n;i++){
cin>>a[i];
}
int m=n/2-1;
for(int i=0;i<m;i++){
if(2*i+1<n){
if(a[i]>=max(a[2*i],a[2*i+1]))
continue;
else{
cout<<"not a max heap";
flag=1;
break;
}
}
else{
if(a[i]>a[2*i])
continue;
else{
cout<<"not a max heap";
flag=1;
break;
}
}
}
if(flag==-1){
cout<<"it is a max heap";
}
return 0;
}
