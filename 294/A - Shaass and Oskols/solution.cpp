#include<iostream>
using namespace std;
int main(){
int a,b,x,y,k[105];
cin>>a;
for(int i=1;i<=a;i++)cin>>k[i];
cin>>b;
while(b--){
cin>>x>>y;
if(x>1)k[x-1]+=y-1;
if(x<a)k[x+1]+=k[x]-y;
k[x]=0;
}
for(int i=1;i<=a;i++)cout<<k[i]<<"
";
return 0;
}