//============================================================================
// Name        : 2576.cpp
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
	vector<int> odd_num;
	int sum = 0;

	for(int i=0; i<7; i++){
		int num;
		cin >> num;
		natural_num.push_back(num);
	}

	// 홀수만 발라내는 작
	for(int j=0; j<natural_num.size(); j++){
		if(natural_num[j]%2 != 0){
			odd_num.push_back(natural_num[j]);
			sum += natural_num[j];
		}
	}

	sort(odd_num.begin(), odd_num.end());
	if(odd_num.size() != 0){
		cout << sum << "\n";
		cout << odd_num[0];
	}else{
		cout << -1;
	}




	return 0;
}
