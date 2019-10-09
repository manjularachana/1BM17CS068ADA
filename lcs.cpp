#include<bits/stdc++.h>
#include<cstring>
#include<iostream>
using namespace std;
#define m 10
#define n 9
int l[m+1][n+1];
int max(int a, int b)
{
    return (a > b)? a : b;
}
void lcs(char x[],char y[]){
int i,j;
cout<<x;
cout<<y;
for(i=0;i<=m;i++){
for(j=0;j<=n;j++){
if(i==0||j==0){
l[i][j]=0;
}
else if(x[i-1]==y[j-1]){
l[i][j]=l[i-1][j-1]+1;
}
else
{
l[i][j]=max(l[i-1][j],l[i][j-1]);
}
}
}
}
int main(){
  char x[m+1],y[n+1];
  cout<<"enter the string1";
  cin>>x;
cin.sync();
  cout<<"enter the string2";
  cin.sync();
  cin>>y;
  cin.sync();
  lcs(x,y);
  int index = l[m][n];
  for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
      cout<<l[i][j];
    }
    cout<<"\n";
  }
  char lcs[index+1];
  lcs[index] = '\0';
//Start from the right-most-bottom-most corner and one by one store characters in lcs[]
  int i = m, j = n;
  while (i > 0 && j > 0)
   {
      if (x[i-1] == y[j-1])
      {
          lcs[index-1] = x[i-1];      // Put current character in result
          i--;
          j--;
          index--;
      }
        else if (l[i-1][j] > l[i][j-1]){
         i--;}
        else
        {j--;}
   }
   //for(int k=0;k<=index;k++){
     puts(lcs);
   //}
   cout<<" is the longest subsequence";
   return 0;
   }
