#include<iostream>
using namespace std;
int main(){
int n,key,a[10];

cout<<"enter the size of the array";
cin>>n;

cout<<"enter the key";
cin>>key;
cout<<"enter the array elements";
int min=0;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]<a[min]){
min=i;
}
}
int a1beg=0,a1end=min-1,a2beg=min,a2end=n-1,flag=-1,a1mid=-1,a2mid=-1;
while(a1beg<=a1end){
a1mid=a1beg+((a1end-a1beg)/2);
if(a[a1mid]==key){
flag=1;
break;
}
else if(key<a[a1mid]){
a1end=a1mid-1;
}
else{
a1beg=a1mid+1;
}
}
if(flag!=1){
while(a2beg<=a2end){
a2mid=a2beg+((a2end-a2beg)/2);
if(a[a2mid]==key){
flag=1;
break;
}
else if(key<a[a2mid]){
a2end=a2mid-1;
}
else{
a2beg=a2mid+1;
}
}
}
if(flag!=-1){
if(a[a1mid]==key)cout<<"element at"<<a1mid;
if(a[a2mid]==key)cout<<"element at"<<a2mid;
}
if(flag==-1){
cout<<"element not present";
}
return 0;
}
