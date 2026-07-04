
#include <iostream>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int x,y,l,r,a,b;
	cin >> x >> y >> l >> r >> a >> b;
	//overlap between [l,r] and [a,b]
	int overlap = max(0, min(r,b) - max(l,a));
	int totalTime = b-a;
	int costX = x*(overlap);
	int costY = y*(totalTime - overlap);

	cout << costX+costY << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	{
	solve();
	}
	return 0;
}