
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int x;
	cin >> x; //x is guaranteed to be good
	/*idea: y has to be duplicator
	11, 101, 1001, 10001 etc.
	so it appends x to itself
	*/
	int noOfDigits = log10(abs(x)) + 1; //log10 to find digits
	int y = pow(10,noOfDigits) + 1;
	cout << y << '\n';
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