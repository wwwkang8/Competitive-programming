//============================================================================
// Name        : 1890.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

using namespace std;

int matrix[10][10] = { 0 };
int n = 0;
long long cache[110][110];

bool isPossible(int pos){
	return 0 <= pos && pos < n;
}

long long func(int y, int x){
	if(y == n-1 && x == n-1){
		return 1;
	}

	long long& ret = cache[y][x];
	if( ret != 1 ){
		return ret;
	}

	ret = 0;
	if(isPossible(y + matrix[]))
}

int main() {

	return 0;
}
