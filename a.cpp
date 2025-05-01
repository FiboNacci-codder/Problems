#include <iostream>
using namespace std;

bool is_prime(int x){
	if(x == 1)
		return 0;
	for(int i = 2; i * i <= x; i++)
		if(x % i == 0)
			return 0;
	return 1;
}	

int main(){
	int t; cin >> t;
	while(t--){
		int x, k; cin >> x >> k;
		if(k == 1)
			cout << (is_prime(x) ? "YES" : "NO") << "\n";
		else{
			if(x == 1){
				int s = 1;
				for(int i = 1; i < k; i++)
					s = 10 * s + 1;
				cout << (is_prime(s) ? "YES" : "NO") << "\n";
			}else
				cout << "NO\n";
		}
	}
	return 0;
}
