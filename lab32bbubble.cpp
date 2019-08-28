#include<iostream>
using namespace std;
int main(){
int n,k,a[10],c,count=0;
cout<<"Enter the size of the array";
cin>>n;
cout<<"how many largest elements you want??";
cin>>k;
cout<<"enter the array elements";
for(int i=0;i<n;i++){
cin>>a[i];}
for(int i=0;i<n;i++){
for(int j=0;j<n-i-1;j++){
count++;
if(a[j]>a[j+1]){
c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
cout<<"number of comparisions here will be depending on k or else bubble sort has got n(n-1)/2 comparisions:"<<count;
cout<<"\n";
for(int i=n-1;i>=(n-k);i--){
cout<<a[i]<<" ";
}
return 0;
}
