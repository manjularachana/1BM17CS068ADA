#include<iostream>
using namespace std;
int main(){
int n,min,a[10],k,count=0;
cout<<"Enter the size of the array";
cin>>n;
cout<<"enter k:";
cin>>k;
cout<<"enter the array elements:";
for(int l=0;l<n;l++){
cin>>a[l];
}
for(int i=0;i<n;i++){
min=i;
for(int j=i+1;j<n;j++){
count++;
if(a[j]<a[min]){
min=j;
}
}
int c;
c=a[min];
a[min]=a[i];
a[i]=c;
}
for(int i=0;i<k;i++)
{
cout<<a[i]<<" ";
}
cout<<"the number of comparisions: here comparisions have been reduced to optimize oterwise n(n-1)/2"<<count<<"\n";
return 0;
}
