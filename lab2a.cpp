#include<iostream>
using namespace std;
int main(){
int n,min,a[10],k;
cout<<"Enter the size of the array";
cin>>n;
cout<<"enter k:";
cin>>k;
cout<<"enter the array elements:";
for(int l=0;l<n;l++){
cin>>a[l];
}
for(int i=0;i<k;i++){
min=i;
for(int j=i+1;j<n;j++){
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
return 0;
}
