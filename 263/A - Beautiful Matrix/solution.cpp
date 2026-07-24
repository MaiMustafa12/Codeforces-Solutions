#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,t=0;
for(int i=1;i<=5;i++){
for(int j=1;j<=5;j++){
cin>>x;
if(x==1){
t=abs(i-3)+abs(j-3);
}
}
}
cout<<t<<endl;
return 0;
}