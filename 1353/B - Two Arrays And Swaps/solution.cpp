#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int w,k,s=0;
cin>>w>>k;
vector<int>a(w),c(w);
for(int i=0;i<w;i++)cin>>a[i];
for(int i=0;i<w;i++)cin>>c[i];
sort(a.begin(),a.end());
sort(c.rbegin(),c.rend());
for(int i=0;i<k;i++){
if(c[i]>a[i])swap(a[i],c[i]);
}
for(int i=0;i<w;i++)s+=a[i];
cout<<s<<endl;
}
return 0;
}
 