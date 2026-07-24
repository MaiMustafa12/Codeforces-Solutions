#include<iostream>
using namespace std;
int main(){
int a;
cin>>a;
int b=0;
int c=0;
int h=0;
while(true){
h=h+1;
c=c+h;
if(a>=c){
a=a-c;
b=b+1;
}else{
break;
}
}
cout<<b<<endl;
return 0;
}