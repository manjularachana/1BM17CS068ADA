#include<iostream>
using namespace std;
int find(int a[],int s,int key);
int main(){
int t,k,arr[30],n,o,j=0;
cin>>t;
while(t>0){
 cin>>n>>k;
for(int i=0;i<n;i++){
cin>>arr[i];
}
o=find(arr,n,k);
cout<<o<<endl;
t--;
}
return 0;
}
int find(int a[],int s,int key){
int mid,beg=0,end=s-1,flag=-1;
while(beg<=end){
mid=(beg+end)/2;
if(a[mid]==key){
	flag=1;
break;
}
else if(key<a[mid])
	end=mid-1;
else
	beg=mid+1;
}
if(flag==-1)
	return -1;
else
	return 1;
}
