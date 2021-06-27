#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maxi = 50, mini = 1;
int main() {
	srand(time(0));
	//ll t = rand() % 1 + 1;
	//cout << t << endl;
	ll t = 1;
	while (t--) {
		ll n =  (rand() % 50 + 1);
		ll m =  (rand() % 30 + 1);


		cout << n << " " << m << endl;
		map<int, int>mp;

		for (ll i = 0; i < n; i++) {

			//ll temp = rand() % n + 1;
			ll temp = mini + rand() % (maxi - mini + 1);
			mp[temp]++;

			cout << temp << " ";
		}

		for (ll i = 0; i < m; i++) {

			//ll temp = rand() % n + 1;
			ll temp;
			while (1) {
				temp = mini + rand() % (maxi - mini + 1);
				if (mp.find(temp) != mp.end())break;

			}

			cout << temp << " ";
		}
		// cout << endl;
		// for (ll i = 0; i < m; i++) {

		// 	//ll temp = rand() % n + 1;
		// 	ll temp = mini + rand() % (maxi - mini + 1);


		// 	cout << temp << " ";
		// }
		// cout << endl;


	}
}