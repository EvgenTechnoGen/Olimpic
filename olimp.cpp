#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int A, B, C;
    
    cin >> A >> B >> C;
	if (A >= B && A >= C && B >= C) {
        cout << B << endl;
    }
	