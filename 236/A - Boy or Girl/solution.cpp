#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
string s;
if(!(cin>>s))return 0;
set<char> d;
for(char c:s)d.insert(c);
if(d.size()%2==0)cout<<"CHAT WITH HER!
";
else cout<<"IGNORE HIM!
";
return 0;
}