#include<bits/stdc++.h>
using namespace std;
int mini=999,c[100]={0},s[100]={0},d[4]={0,1,2,5};
int main(){
	cout<<"enter the amount";
	int A;
	cin>>A;
	for(int j=1;j<=A;j++){
		mini=999;
		for(int i=1;i<4;i++){
		if(d[i]<=j){
			if(1+c[j-d[i]]<mini){
				mini=1+c[j-d[i]];
				s[j]=i;
				}
			}
			
		}
		c[j]=mini;
		}
		
	for(int i=0;i<=A;i++){
		cout<<c[i]<<s[i]<<"\n";
		}
int a=A;
cout<<"minimum change is:";
while(true){
	if(a>0){
		
		cout<<d[s[a]]<<"\t";
		
		}
	else
		break;
	a=a-d[s[a]];
	}

	return 0;
	}