#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a=0,b=0,c=0,d=0;
for(int i=0;i<n;i++){
int x;
cin>>x;
if(x==1)a++;
if(x==2)b++;
if(x==3)c++;
if(x==4)d++;
}
int r=d;
r=r+c;
a=a-c;
if(a<0)a=0;
r=r+b/2;
if(b%2!=0){
r=r+1;
a=a-2;
}
if(a>0){
r=r+(a+3)/4;
}
cout<<r<<endl;
return 0;
}