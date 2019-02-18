//============================================================================
// Name        : 2309.cpp
// Author      : Jake
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> hobbits;
vector<int> answer;
int index1 = 0;
int index2 = 0;
bool isComplete = false;

int main() {
	int sum = 0;

	for(int i=0; i<9; i++){
		int height = 0;
		cin >> height;
		hobbits.push_back(height);
		sum += height;
	}

	for(int i=0; i<hobbits.size(); i++){
		for(int j=i+1; j<hobbits.size(); j++){
			if((sum-hobbits[i]-hobbits[j])== 100){
				index1 = i;
				index2 = j;
			}
		}
	}

	for(int k=0; k<9; k++){
		if(k == index1 || k == index2){
			continue;
		}
		answer.push_back(hobbits[k]);
	}

	sort(answer.begin(), answer.end());

	for(int i =0; i<answer.size(); i++){
		cout << answer[i] << endl;
	}

	return 0;
}
