#include <iostream>
#include <vector>
using namespace std;
int main(){
int n;
if(!(cin>>n))return 0;
vector<int> a(n);
int mx=-1,mn=101,mx_i=0,mn_i=0;
for(int i=0;i<n;i++){
cin>>a[i];
if(a[i]>mx){mx=a[i];mx_i=i;}
if(a[i]<=mn){mn=a[i];mn_i=i;}
}
int res=mx_i+(n-1-mn_i);
if(mx_i>mn_i)res--;
cout<<res<<endl;
return 0;
}