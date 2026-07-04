
#include <deque>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define pb push_back
#define all(x) (x).begin(), (x).end()

void solve(){
	int N; cin >> N;
	string S; cin >> S;

	deque<int> dq;
	bool reverse = false; //keeps track if the sequence is reversed or not

	for(int i = 1; i <=N ; i++){
		if(reverse){
			//if reverse is true, push front
			dq.push_front(i);
			if(S[i-1] == 'o') reverse = !reverse; //toggle the reverse flag
		}
		else{
			//sequence not reversed. so push back
			dq.push_back(i);
			if(S[i-1] == 'o') reverse = !reverse;
		}
	}
	if(reverse){
		while(!dq.empty()){
			cout << dq.back() <<' ';
			dq.pop_back();
		}
	}
	else{
		while(!dq.empty()){
			cout << dq.front() <<' ';
			dq.pop_front();
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	return 0;
}