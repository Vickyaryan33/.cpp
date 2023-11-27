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
