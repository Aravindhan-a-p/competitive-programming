
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	//if string is sorted(either way)
	//min length is 2, else 1
	int n;
	cin >> n;
	string s;
	cin >> s;

	//count transitions. 0 to 1 or 1 to 0
	int transitions = 0;
	for(int i = 0 ; i < n-1; i++){
		if(s[i] != s[i+1]){
			transitions++;
		}
	}

	if(transitions == 0)// 0000 or 1111
	{
		cout << 1 << '\n'; 
	}
	else if(transitions == 1)//111000 or 0000111
	{
		cout << 2 << '\n';
	}
	else//more than 1 transition. 10101 or 010001
	{
		cout << 1 << '\n';
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