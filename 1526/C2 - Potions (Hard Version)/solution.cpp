#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
if(!(cin>>n))return 0;
long long h=0;
priority_queue<long long,vector<long long>,greater<long long>> q;
for(int i=0;i<n;i++){
long long x;
cin>>x;
h+=x;
q.push(x);
if(h<0){
h-=q.top();
q.pop();
}
}
cout<<q.size()<<"
";
return 0;
}
 