#include<iostream>
using namespace std;
int main(){
int b=0,e,start=-1,mid,endindex=-1,a[10],key,n;
cout<<"enter the size of the array";
cin>>n;
e=n-1;
cout<<"enter the array elements";
for(int i=0;i<n;i++){
cin>>a[i];
}
cout<<"enter the key";
cin>>key;
while(b<=e){
mid=(e-b)/2+b;
if(key<a[mid]){
e=mid-1;
}
else if(key==a[mid]){
start=mid;
e=mid-1;
}
else{
b=mid+1;
}
}
b=0,e=n-1;
while(b<=e){
mid=(e-b)/2+b;
if(key<a[mid]){
e=mid-1;
}
else if(a[mid]==key){
endindex=mid;
b=mid+1;
}
else{
b=mid+1;
}
}
cout<<"start index:"<<start;
cout<<"endindex:"<<endindex;
cout<<"count:"<<(endindex-start)+1;
return 0;
}
