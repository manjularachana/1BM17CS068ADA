#include<iostream>
using namespace std;
int main(){
  int n;
cout<<"enter value for n";
cin>>n;
int arr[n];
cout<<"enter integers::";
for(int i=0;i<n;i++){
  cin>>arr[i];
}
int max=arr[0];
for(int j=1;j<n;j++){
  if(arr[j]>max){
    max=arr[j];
  }
}
cout<<"maximum of the numbers is"<<max;
return 0;
}
