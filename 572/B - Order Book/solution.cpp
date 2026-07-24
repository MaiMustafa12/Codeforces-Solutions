#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n,s;
if(!(cin>>n>>s))return 0;
map<int,int> b,l;
while(n--){
char d;
int p,q;
cin>>d>>p>>q;
if(d=='B')b[p]+=q;
else l[p]+=q;
}
vector<pair<int,int>> v;
for(auto i:l){
v.push_back(i);
if(v.size()==s)break;
}
reverse(v.begin(),v.end());
for(auto i:v)cout<<"S "<<i.first<<" "<<i.second<<"
";
int c=0;
for(auto i=b.rbegin();i!=b.rend();i++){
cout<<"B "<<i->first<<" "<<i->second<<"
";
c++;
if(c==s)break;
}
return 0;
}