#include<bits/stdc++.h>
using namespace std;

int main() {
  unordered_set<string>st;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    st.insert(s);//O(1)
  }
  int q;cin>>q;
  while(q--){
    string s;
    cin>>s;
    if(st.find(s)==st.end())//O(1)
    {
      cout<<"no"<<endl;
    } else cout<<"yes"<<endl;
  }
  //  for(auto value:st){
  //     cout<<value<<endl;
  // }
  return 0;
}
