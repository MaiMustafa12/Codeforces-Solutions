#include<iostream>
#include<queue>
#include<cmath>
using namespace std;
int main(){
int n,m;
if(!(cin>>n>>m))return 0;
int l=0,mx=-1;
for(int i=1;i<=n;i++){
int a;
cin>>a;
int c=ceil((double)a/m);
if(c>=mx){
mx=c;
l=i;
}
}
cout<<l<<"
";
return 0;
}