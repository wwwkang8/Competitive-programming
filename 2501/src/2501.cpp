//============================================================================
// Name        : 2501.cpp
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
	int n, k = 0;
	vector<int> yaksu;
	scanf("%d %d", &n, &k);

	for(int i=1; i<=n; i++){
		if(n % i == 0){
			yaksu.push_back(i);
		}
	}

	sort(yaksu.begin(), yaksu.end());

	if(yaksu.size()<k){
		cout << 0;
	}else{
		cout << yaksu[k-1];
	}


	return 0;
}
