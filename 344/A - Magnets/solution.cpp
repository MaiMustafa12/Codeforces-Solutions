#include<iostream>
#include<string>
using namespace std;
int main(){
int w,c=1;
cin>>w;
string s,p;
cin>>p;
for(int i=1;i<w;i++){
cin>>s;
if(s!=p){
c++;
p=s;
}
}
cout<<c<<endl;
return 0;
}