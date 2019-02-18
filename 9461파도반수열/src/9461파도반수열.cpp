//============================================================================
// Name        : 9461파도반수열.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

long long cache[110] = { 0, 1, 1, 1, 2, 2 };

long long func(int n){
	long long& ret = cache[n];
	if(ret){
		return ret;
	}

	ret = func(n-1) + func(n-5);
	return ret;
}

int main() {


	return 0;
}
