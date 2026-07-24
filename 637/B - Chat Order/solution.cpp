#include<iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
if(!(cin>>n))return 0;
vector<string> v(n);
for(int i=0;i<n;i++)cin>>v[i];
set<string> s;
for(int i=n-1;i>=0;i--){
if(s.find(v[i])==s.end()){
cout<<v[i]<<"
";
s.insert(v[i]);
}
}
return 0;
}