//============================================================================
// Name        : 1149.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int n;
int rgb[1000][1000];

int main() {
	cin >> n;

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> rgb[i][j];
		}
	}



	return 0;
}
