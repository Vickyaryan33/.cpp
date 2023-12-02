#include <bits/stdc++.h>
using namespace std;
int main() {
  stack<int>s;// inbulit library hai STL ka
  s.push(2);
  s.push(4);
  s.push(1);
  s.push(9);
  s.push(7);
  while(!s.empty()){
    cout<<s.top()<<endl; // top() stack me value deta hai print krne ke liye
    s.pop();
  }
  return 0;
}
