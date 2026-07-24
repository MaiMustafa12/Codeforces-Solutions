#include<iostream>
int main(){
long long a,b,c;
std::cin>>a>>b;
if(a%2==0)c=a/2;
else c=(a+1)/2;
if(b<=c)std::cout<<2*b-1;
else std::cout<<2*(b-c);
return 0;
}