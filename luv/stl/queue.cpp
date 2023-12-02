#include <bits/stdc++.h>
using namespace std;
int main() {
  queue<string>s;//inbuilt library hai STL ka
  s.push("vicky");
  s.push("kumar");
  s.push("rahul");
  s.push("shyam");
  s.push("ghanshyam");
  while(!s.empty()){
    cout<<s.front()<<endl; // queue me front se value lete hai print ke liye
    s.pop();
  }
  return 0;
}
