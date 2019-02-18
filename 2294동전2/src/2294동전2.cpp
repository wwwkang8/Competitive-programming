//============================================================================
// Name        : 2294동전2.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;



// F(N)

int n, k, coins[110], cache[11010];
const int INF = 987654321;

int func(int money){
	//기저사례는?
	if(money == 0){
		return 0;
	}

	int& ret = cache[money];
	if(ret != -1){
		return ret;
	}


	ret = INF;
	for(int i = 0; i<n; i++){
		const int coin = coins[i];

		// F(n) => n원을 만드는데 사용한 최소 동전 수
		// F(n-coin) => n - coin원을 만드느데 사용한 최소 동전의 수
		// F(n) = F(n - coin) + 1;
		// F(n) = min(F(n-coin) + 1): coin은 가능한 모든 coin 경

		// F(n) => 1~n까지의 합
		// F(n) => 1~n-1 까지의 합
		//F(n) = F(n-1) + n;
		if(money >= coin){
			ret = min(ret, func(money - coin) + 1);
		}
	}
}

int main() {

	cin >> n >> k;
	for(int i=0; i<n; i++){
		cin >> coins[i];
	}
	cout << func(k) << endl;
	return 0;
}
