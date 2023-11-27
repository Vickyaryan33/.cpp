#include <bits/stdc++.h>
using namespace std;

int main() {
 map<int,string>mp;
 mp[1]="vicky";
 mp[2]="kumar";
 mp.insert({5,"Rahul"});//another way to insert in map or assign the value of map


//  1st method for use output
 map<int,string>::iterator it;
 for(it=mp.begin();it!=mp.end();it++){
  cout<<(*it).first<<" "<<(*it).second<<endl;;
 }

//   2d method
for(auto i:mp){
  cout<<i.first<<" "<<i.second<<endl;
}


  return 0;
}
