#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
int n;
if(!(cin>>n))return 0;
map<string,int> m;
while(n--){
string s;
cin>>s;
if(m[s]==0){
cout<<"OK
";
m[s]++;
}else{
cout<<s<<m[s]<<"
";
m[s]++;
}
}
return 0;
}