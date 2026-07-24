#include<iostream>
#include<set>
using namespace std;
int main(){
int t;
if(!(cin>>t))return 0;
while(t--){
int n,m;
cin>>n>>m;
set<int> s;
for(int i=0;i<n;i++){
int x;
cin>>x;
s.insert(x);
}
int c=0;
for(int i=0;i<m;i++){
int y;
cin>>y;
if(s.count(y))c++;
}
cout<<c<<"
";
}
return 0;
}