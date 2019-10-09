#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
return (a>b)?a:b;
}
int knapsack(int w,int wt[],int val[],int n){
if(n==0||w==0)
return 0;

if(wt[n-1]>w){
return knapsack(w,wt,val,n-1);
}
else{
return max(knapsack(w,wt,val,n-1),val[n-1]+knapsack(w-wt[n-1],wt,val,n-1));
}
}
int main(){
int w=9;
int wt[]={1,2,3,4,5};
int val[]={1,4,4,5,7};
int n=sizeof(wt)/sizeof(wt[0]);
cout<<knapsack(w,wt,val,n);
}
