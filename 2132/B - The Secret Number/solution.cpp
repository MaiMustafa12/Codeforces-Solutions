#include<iostream>
#include<vector>
#include<set>
using namespace std;
void solve(){
long long n;
cin>>n;
set<long long>res;
long long p=10;
for(int k=1;k<=18;k++){
long long d=1+p;
if(n%d==0){
res.insert(n/d);
}
if(p>2e18)break;
p=p*10;
}
if(res.empty()){
cout<<0<<endl;
}else{
cout<<res.size();
for(long long x:res){
cout<<" "<<x;
}
cout<<endl;
}
}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;
}