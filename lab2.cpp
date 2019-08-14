#include<iostream>
using namespace std;
int main(){
int n,sqrt,mid,b=0,e;
cin>>n;
e=n-1;
while(b<=e){
mid=(b+e)/2;
if(mid*mid==n){
sqrt=mid;
break;
}
else if(n>mid*mid){
b=mid+1;
sqrt=mid;
}
else
e=mid-1;
}
cout<<sqrt;
return 0;
}
