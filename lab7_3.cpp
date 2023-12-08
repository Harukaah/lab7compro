#include<iostream>
using namespace std;

char before(char c) {
    if (c >= 'B' && c <= 'Z') {
        return c - 1;
    } else if (c == 'A') {
        return 'Z';
    } else {
        return '0';
    }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
