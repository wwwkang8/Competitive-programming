//============================================================================
// Name        : dynamic.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

long long cache[110];

long long func(int n){
	if(n == 1 || n == 2){
		return 1;
	}

	long long& ret = cache[n]; //&는 레퍼런스. 포인터와 같다.
	// 중복되는 계산의 경우의 수를 줄여준다.
	if(ret != -1){
		return ret;
	}
	ret = func(n-1) + func(n-2);

	return ret;
}

int main() {
	fill(cache, cache + 110, -1);
	cout << func(50) <<endl;
	return 0;
}
