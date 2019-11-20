#include<bits/stdc++.h>
using namespace std;
#define n 5
int cost[n][n];

int main(){
	int i,j;
	cout<<"enter the cost matrix";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>cost[i][j];
			}
		}
		for(int k=0;k<n;k++){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
			}
		}}
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<cost[i][j]<<"\t";
		}
		cout<<"\n";
	}
	}
	return 0;
	}