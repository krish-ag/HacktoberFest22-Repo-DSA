//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/?
#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;    //Reading input from STDIN

	while(T--){

		int n; cin>>n;
		int k; cin>>k;

		multiset<long long> s;

		for (int i = 0; i < n; i++){
			long long a; cin >> a;
			s.insert(a);
		}

		long long sum = 0;
		while (k--){
			auto it = (--s.end());
			sum = sum + (*it);
			s.insert((*it)/2);
			s.erase(it);
		}
		cout<<sum<<endl;
	}

	return 0;
}
