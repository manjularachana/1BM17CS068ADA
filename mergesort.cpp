#include<iostream>
using namespace std;
int n,a[15],count=0;
void combine(int a[],int low,int mid,int high)
{

//merge two sorted arrays where first array starts from low to mid and second starts from mid+1 to high

//Input : a is a sorted array from index position low to mid

// a is a sorted array from index position mid+1 to high

//Output: Array a[0….n-1] sorted in nondecreasing order

int i=low , j=mid+1, k=low,c[15];

while (i<=mid && j<=high) {
count+=1;
if (a[i]<a[j]){

c[k]=a[i];
 k=k+1;
 i=i+1;
}
else
{
c[k]=a[j] ;
 k=k+1;
j=j+1;

 }

if (i>mid){

while (j<=high) { 
c[k]=a[j];
 k=k+1;
j=j+1;
 }

}

if (j>high){

while (i<=mid) { 
c[k]=a[i];
k=k+1;
i=i+1;
 }

}


}

for(i=low;i<=high;i++) { a[i]=c[i]; }

}
void split(int a[],int low,int high){

//Sorts array a[0….n-1] by recursive mergesort

//Input :An array a[0….n-1] of orderable elements

//Output : Array a[0….n-1] sorted in nondecreasing order

if (low<high){

int mid=(low+high)/2;

split(a,low,mid);

split(a,mid+1,high);

combine(a,low,mid,high);
}
}

int main(){
cout<<"enter n:";
cin>>n;
cout<<"enter the elements";
for(int i=0;i<n;i++){
cin>>a[i];
}

split(a,0,n-1);
cout<<"sorted elements are:";
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<"number of comparisions"<<count;
return 0;
}

