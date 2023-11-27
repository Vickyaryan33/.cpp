// L-24
//  iterator and without itreatror 
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin>>n;
  vector<int>v;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    v.push_back(x);
  }
  //  method-1
  for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  // method-2
  vector<int>::iterator it;
  for(it=v.begin();it!=v.end();it++){
    cout<<(*it)<<" ";
  }
cout<<endl;
  //method-3
   for(auto it=v.begin();it!=v.end();it++){
    cout<<(*it)<<" ";
   }
  cout<<endl;
  // method-4
  for(auto x:v) cout<<x<<" ";
  return 0;

}

// vector references
#include <bits/stdc++.h>
using namespace std;

int main() {
 vector<int>v;
   int n=0;cin>>n;
 for(int i=0;i<n;i++){
 int x;cin>>x;
 v.push_back(x);
 }
  for(auto i:v){
  cout<<i<<" ";
 }
  cout<<endl;
 for(auto &i:v){
  i+=2;
  cout<<i<<" ";
 }
 cout<<endl;
 for(auto i:v){
  cout<<i<<" ";
 }
  return 0;
}
