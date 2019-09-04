#include<iostream>
#include<list>
using namespace std;
class graph{
int v;
list<int>*gra;
void dfs(int v,bool visited[]);
public:
graph(int v);
void addedge(int v,int w);
void graphcompo();
};
graph::graph(int a){
this->v=a;
gra=new list<int>[v];
}
void graph::addedge(int v,int w){
gra[v].push_back(w);
gra[w].push_back(v);
}
void graph::graphcompo(){
bool *visited=new bool[v];
for(int i=0;i<v;i++){
visited[i]=false;
}
for(int j=0;j<v;j++){
if(!visited[j]){
dfs(j,visited);
cout<<"\n";
}
}
}
void graph::dfs(int v,bool visited[]){
visited[v]=true;
cout<<v<<" ";
list<int>::iterator it;
for(it=gra[v].begin();it!=gra[v].end();it++){
if(!visited[*it]){
dfs(*it,visited);
}
}
}
int main(){
graph g=graph(5);
g.addedge(1,0);
g.addedge(1,2);
g.addedge(2,3);
g.addedge(3,4);
g.graphcompo();
return 0;}
