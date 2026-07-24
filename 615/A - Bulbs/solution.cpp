#include<iostream>
#include<set>
using namespace std;
int main(){
int n,m;
if(!(cin>>n>>m))return 0;
set<int> s;
while(n--){
int x;
cin>>x;
while(x--){
int y;
cin>>y;
s.insert(y);
}
}
if(s.size()==m)cout<<"YES
";
else cout<<"NO
";
return 0;
}