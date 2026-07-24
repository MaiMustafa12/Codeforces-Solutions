#include <iostream>
int main(){
int n;
std::cin>>n;
int counttt=0;
counttt+=n/100;
n%=100;
counttt+=n/20;
n%=20;
counttt+=n/10;
n%=10;
counttt+=n/5;
n%=5;
counttt+=n;
std::cout<<counttt<<std::endl;
return 0;
}