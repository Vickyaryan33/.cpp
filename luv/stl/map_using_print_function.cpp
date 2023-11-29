#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>& mp) //important
{
    for(auto it=mp.begin();it!=mp.end();it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;  
  }
}
int main()
{
  map<int,string>mp;
  mp.insert({2,"kumar"});
  mp.insert({4,"mar"});
  mp.insert({5,"r"});
  mp.insert({8,"ar"});
  mp[6]="vicky";
  print(mp);//important
  

    return 0;
}
