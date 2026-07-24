#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int q;
cin>>q;
set<pair<int,int>> a;
set<pair<int,int>> b;
int c=1;
while(q--){
int t;
cin>>t;
if(t==1){
int m;
cin>>m;
a.insert({c,m});
b.insert({-m,c});
c++;
}else if(t==2){
auto it=a.begin();
int i=it->first;
int m=it->second;
cout<<i<<" ";
a.erase(it);
b.erase({-m,i});
}else{
auto it=b.begin();
int m=-it->first;
int i=it->second;
cout<<i<<" ";
b.erase(it);
a.erase({i,m});
}
}
return 0;
}