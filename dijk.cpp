#include<bits/stdc++.h>
using namespace std;
#define n 5
int main(){
	int cost[n][n],source,dist[n],visited[n]={0},u=1,min,count;
     cout<<"enter the cost matrix";
	 for(int i=0;i<n;i++){
		 for(int j=0;j<n;j++){
			 cin>>cost[i][j];}
		 }
		 cout<<"enter the source vertex";
		 cin>>source;
		 for(int j=0;j<n;j++){
			 dist[j]=cost[source][j];
			 }
	dist[source]=0;
	visited[source]=0;
	count=1;
	while(count!=n){
		min=9999;
		for(int j=0;j<n;j++){
			if(dist[j]<min&&visited[j]!=1){
				min=dist[j];
				u=j;
				}
		}
		visited[u]=1;
		count+=1;
		for(int j=0;j<n;j++){
			if(min+cost[u][j]<dist[j]&& visited[j]!=1)
			dist[j]=min+cost[u][j];
				}
		}
		cout<<"shortest distance is:";
		for(int j=0;j<n;j++)
			cout<<source<<"\t"<<j<<"\t"<<dist[j]<<"\t";
	return 0;
	}