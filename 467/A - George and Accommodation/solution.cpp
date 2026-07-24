#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int res=0;
for(int i=0;i<n;i++){
int a,b;
cin>>a>>b;
if(b-a>=2){
res=res+1;
}
}
cout<<res<<endl;
return 0;
}