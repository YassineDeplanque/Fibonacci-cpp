#include <iostream>

using namespace std;

int main()
{
	long long n(0);
	long long next(0);
	cout << "Enter an integer: " << endl;
	cin >> n;

	if (cin.fail()) {
        cout << "Invalid input. Please enter an integer." << endl;
        return 1;
    }

	if (n <= 0) {
    	cout << "Please enter a positive integer." << endl;
    	return 1;
	}

	long long n1(0), n2(1);

	cout << "The Fibonacci sequence is:" << endl;

	if (n >= 1) cout << n1;
	if (n >= 2) cout << ", " << n2;

	for (long long i = 2; i < n; i++) {
    	next = n1 + n2;
    	if (next < 0) {
            cout << "\nOverflow detected. The number is too large to display." << endl;
            break;
        }
    	cout << ", " << next;
    	n1 = n2;
    	n2 = next;
	}

	cout << endl;
	return 0;
}
