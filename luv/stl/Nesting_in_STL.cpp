#include <bits/stdc++.h>
using namespace std;
int main() {
  map<pair<string,string>,vector<int> >m; // important
int n;cin>>n;
for(int i=0;i<n;i++){
  string fn,ln;
  int ct;
  cin>>fn>>ln>>ct;
  for(int i=0;i<ct;i++){
    int x;cin>>x;
    m[{fn,ln}].push_back(x); //important how to push in vector in nesting of stl
  }

}
for(auto &pr :m){
  auto &full_name=pr.first;
  auto &list=pr.second;
  cout<<full_name.first<<" "<<full_name.second<<" ";
  cout<<list.size()<<endl;
  for(int &element:list){
    cout<<element<<" ";
  
  }
  cout<<endl;
}

  return 0;
}
