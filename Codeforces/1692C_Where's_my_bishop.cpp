
#include <cstddef>
#include <functional>
#include <iostream>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

struct hash_pair{
	template<class T1, class T2>
	size_t operator() (const pair<T1,T2>& p) const{
		auto hash1 = hash<T1>{}(p.first);
		auto hash2 = hash<T2>{}(p.second);

		//boost hash combine
		return hash1 ^ (hash2 + 0x9e3779b9 + (hash1 << 6) + (hash1 >> 2));
	}
};

void solve(){
	unordered_set<pair<int, int>, hash_pair> st;
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8 ; j++){
			char x;
			cin >> x;
			if(x == '#'){
				if(st.find(make_pair(i-1, j+1)) != st.end() &&
					st.find(make_pair(i-1, j-1)) != st.end()){
					cout << i << ' ' << j << '\n';
				}
				st.insert(make_pair(i, j));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while(t--){
	solve();
	}
	return 0;
}