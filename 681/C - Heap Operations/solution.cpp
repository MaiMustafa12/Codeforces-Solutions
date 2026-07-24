#include<iostream>
#include<vector>
#include<string>
#include<queue>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
cin>>n;
priority_queue<int,vector<int>,greater<int>> q;
vector<string> r;
while(n--){
string s;
cin>>s;
if(s=="insert"){
int x;
cin>>x;
q.push(x);
r.push_back("insert "+to_string(x));
}else if(s=="removeMin"){
if(q.empty()){
r.push_back("insert 0");
}else{
q.pop();
}
r.push_back("removeMin");
}else if(s=="getMin"){
int x;
cin>>x;
while(!q.empty()&&q.top()<x){
q.pop();
r.push_back("removeMin");
}
if(q.empty()||q.top()>x){
q.push(x);
r.push_back("insert "+to_string(x));
}
r.push_back("getMin "+to_string(x));
}
}
cout<<r.size()<<"
";
for(auto& i:r)cout<<i<<"
";
return 0;
}