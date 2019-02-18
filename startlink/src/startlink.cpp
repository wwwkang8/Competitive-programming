//============================================================================
// Name        : startlink.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int n, T[21];


int n;
void func(int pos, vector<int> a, vector<int> b) {
	if(pos == n){
		return;
	}

	//전역변수를 이용해서 상태값을 변화시키면서 사용한다.

	//1.a 팀 선택
	T[pos] = 0;
	func(pos, a, b);
	T[pos] = -1;

	//2. b팀 선택
	T[pos] = 1;
	func(pos,a ,b);
	T[pos] = -1;


}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
