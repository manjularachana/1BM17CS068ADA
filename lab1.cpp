#include<iostream>
using namespace std;
void main(){
int t,k,arr[30],n,o;
cin>>t;
while(t>0){
 cin>>n>>k;
for(int i=0;i<n;i++)
cin>>arr[i];
o=find(arr,n,k);
cout<<o<<endl;
}
}
int find(int a[],int s,int key){
int mid,beg=0,end=s-1;
while(beg<=end)
mid=(beg+end)/2

}
