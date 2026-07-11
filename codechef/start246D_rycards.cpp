
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int R,Y;
	cin >> R >> Y;
	int yellowSentOff = 0;
	if(Y >= R){
		yellowSentOff = (Y-R)/2 ;
	}
	int sentOff = R + yellowSentOff;
	cout << sentOff << '\n';
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