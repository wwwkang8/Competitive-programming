//============================================================================
// Name        : 2562.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	vector<int> natural_num;
	vector<int> ordered_num;
	int max = 0;
	int index = 0;

	for(int i=0; i<9; i++){
		int num = 0;
		cin >> num;
		natural_num.push_back(num);
	}

	for(int i=0; i<9; i++){
		ordered_num.push_back(natural_num[i]);
	}

	sort(ordered_num.begin(), ordered_num.end());
	max = ordered_num[8];

	for(int i=0; i<9; i++){
		if(max == natural_num[i]){
			index = i;
		}
	}

	cout << max << "\n";
	cout << index+1;

	return 0;
}
