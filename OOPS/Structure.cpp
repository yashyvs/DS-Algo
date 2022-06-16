#include<bits/stdc++.h>
using namespace std;

struct node {
	string str;
	int num;
	double doub;
	char x;


	//creating constructor
	node(string str1, int num1, double doub1, char x1) {
		str = str1;
		num = num1;
		doub = doub1;
		x = x1;
	}
};

int main() {

	// wrong way of defining
	// node yash;
	// yash.str = "helix";
	// yash.num = 21;
	// yash.doub = 10.05;
	// yash.x = 'a';

	node yash = node("helix", 21, 10.05, 'h');

	cout << yash.str << " " << yash.num << " " << yash.doub << " " << yash.x;

}
