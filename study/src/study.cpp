//============================================================================
// Name        : study.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	// 완전제곱수의 경우는 약수의 개수가 홀수이다
	// 일반적으로는 약수의 개수는 짝수이
	for(int i=1; i*i<=n; ++i){ // =을 붙이는 이유는 완전제곱수 일
		if(n%i == 0){
			++cnt;
			if(i != n/i){ // 완전제곱수일 때
				++cnt;
			}
		}
	}
	return 0;
}
