#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int w,c=0;
cin>>w;
vector<int>a(w);
for(int i=0;i<w;i++)cin>>a[i];
int m=2e9;
for(int i=w-1;i>=0;i--){
if(a[i]>m)c++;
m=min(m,a[i]);
}
cout<<c<<endl;
}
return 0;
}