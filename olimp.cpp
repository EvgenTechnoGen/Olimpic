#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int A, B, C;
    
    cin >> A >> B >> C;
	if (A >= B && A >= C && B >= C) {
        cout << B << endl;
    }
else if (C >= A && C >= B && A >= B) {
        cout << A << endl;
    }
else if (C >= A && B >= A && B >= C) {
        cout << C << endl;
    }
else if (C >= A && C >= B && B >= A) {
        cout << B << endl;
    }

    return 0;
}

	