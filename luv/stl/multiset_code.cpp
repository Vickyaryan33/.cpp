#include<bits/stdc++.h>
using namespace std;

int main() {
  multiset<string>st;
  int n;cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    st.insert(s);//O(log(n))
  }
   
  auto it=st.find("faed");//O(log(n))
  if(it!=st.end()){
    st.erase(it); // particular earse which pointend by iterator
  }
  // st.erase("faed");//O(log(n))   // all erase of same value

  for(auto value:st){
      cout<<value<<endl;
  }
  return 0;
}
