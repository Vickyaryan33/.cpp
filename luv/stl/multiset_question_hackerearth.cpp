// Hackerearth-Monk and the Magical Candy Bags
// use multi set beacuse of use duplicate also
// erase(it) then erase a particalr element which is pointed by iterator O(1)
// but erase(value) earse all value in multiset O(log(n))
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long>s;// multiset beacuse i want to store duplicate also
		for(int i=0;i<n;i++){
			long long c;cin>>c;
			s.insert(c);
		}
		long long t_c=0;
		for(int i=0;i<k;i++){
		auto last_it=(--s.end());
    long long c=(*last_it);
		t_c+=c;
		s.erase(last_it);
		s.insert(c/2);
		}
		cout<<t_c<<endl;
	}
}
