#include <iostream>
using namespace std;

int main()
{
    int i, n, n1, s1 = 0, j;
    long fact; 
    cout << "Enter a number: ";
    cin >> n; 

    n1 = n; 

    for (j = n; j > 0; j = j / 10) {
        fact = 1;

        for (i = 1; i <= j % 10; i++) {
            fact = fact * i; 
        }

        s1 = s1 + fact; 
    }

    if (s1 == n1) {
        cout << n1 << " is a Strong number." << endl; 
    }
    else {
        cout << n1 << " is not a Strong number." << endl; 
    }
}
