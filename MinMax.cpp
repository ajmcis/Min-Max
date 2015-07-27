//============================================================================
// Name        : MinMax.cpp
// Author      : 
// Version     :
// Copyright   : (c) 2015 Mack
// Description : Finds the minimum and maximum values from a set of five integers
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num;
	int max, min;

	cout << "Enter value #" << 1 << ": ";
	cin >> num;

	max = num;
	min = num;

	for (int i = 2; i <= 5; i++) {
		 cout << "Enter value #" << i << ": ";
		 cin >> num;

		 if (num > max)
			 max = num;

		 if (num < min)
			 min = num;
	}

	cout << "\nMinimum: " << min << endl;
	cout << "Maximum: " << max << endl;
	cout << "\n" << static_cast<char>(169) << " 2015 Mack" << endl;

	return 0;
}
