
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

	vi divisors;

	for(int i =2 ; i*i <= n; i++){
		//store all the occurences of divisors
		while(n%i == 0){
			divisors.pb(i);
			n /= i;
		}
	}

	//if n is not equal to 1, we can push it as well
	if(n != 1) divisors.pb(n);

	//three distinct integers
	int a,b,c, size ;
	a=b=c=1;
	size = divisors.size();

	for(int i = 0; i < size; i++){
		//for first number a
		if( a == 1){
			a = a * divisors[i];
		}

		else if(b == 1 || b ==a){
			b = b*divisors[i];
		}
		else {
			c = c* divisors[i];
		}
	}
	//checking for unwanted conditions
	if(a ==1 || b==1 || c==1 || a==b || b ==c || c==a){
		cout << "NO" << '\n';
	}

	else{
		cout <<  "YES" << "\n";
		cout << a << ' ' << b <<  ' ' << c << '\n';
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