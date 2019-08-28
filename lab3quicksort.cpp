#include<iostream>
using namespace std;


int partition(int a[],int low,int high){

//partition the array into parts such that elements towards the left of the pivot element are

//less than pivot element and elements towards right of the pivot element are greater than pivot element

//Input: An array a[0….n-1] is unsorted from index position low to high

//Output: A partition of a[0…n-1] with split position returned as this function’s value
int pivot,i,j;

pivot=a[low];

i=low+1;

j=high;

while(1) {

while (a[i]<=pivot and i<=high) { i=i+1; }

while (a[j]> pivot and j>=low ) { j=j-1; }

if (i<j)

{
int c=a[i];
a[i]=a[j];
a[j]=c;
}

else {

a[low]=a[j]; 
a[j]=pivot;

return j;

} }
}

int QuickSort(int a[],int low, int high)
{
int pivot_pos;
if (low<high){

// sort only if there are more than two elements in the array

pivot_pos=partition(a,low,high); //pivot_pos is a Split position

QuickSort(a,low, pivot_pos-1);

QuickSort(a, pivot_pos+1,high);
}
return 0;
}
int a[15],n;
int main(){
int i;
cout<<"enter n:";
cin>>n;
cout<<"enter the array elements";
for(i=0;i<n;i++){
cin>>a[i];
}
QuickSort(a,0,n-1);
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}

