#include<bits/stdc++.h>
using namespace std;
void print(set<string> &st) //important
{
    // for(auto it=st.begin();it!=st.end();it++){
    // cout<<(*it).first<<" "<<(*it).second<<endl;  
    // or
    for(auto value:st){
      cout<<value<<endl;
    }
  
}
int main() {
  set<string>st;
  int n; cin>>n;
  for(int i=0;i<n;i++){
    string s;cin>>s;
    st.insert(s); //O(log(n))
  }
  auto it=st.find("faed");//O(log(n))
  cout<<(*it)<<endl;
  st.erase(it);
  st.erase("faed");
  print(st);
  return 0;
}
