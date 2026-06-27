
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	//code here
	int n;
	cin >> n;

	//calculating the size of array b
	int m = n*(n-1)/2;
	vi b(m);

	for(int i = 0; i < m ; i++){
		cin >> b[i];
	}

	//1. sort array b. so that we can pick smallest available elements
	sort(all(b));

	vi a; //reconstructed array
	int currIndex = 0; //pointer to traverse b

	//2. iterate to find first n-1 elements of array a
	// a_i appears n-i times in the sorted array b
	for(int i = 1; i < n ; i++){
		a.pb(b[currIndex]);
		//skip the next n-i elements
		currIndex += n-i;
	}
	//can't determine the value of last element a_n
	//it can be in the range a_n-1 to 1e9
	a.pb(1e9);

	for(int x : a){
		cout << x << " ";
	}
	cout << "\n";
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