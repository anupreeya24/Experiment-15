#include<iostream>
using namespace std;

void revnum(int n) {
    if (n == 0)
        return;

    cout << n % 10;
    revnum(n / 10);
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    cout << "Reversed: ";
    revnum(num);
    cout << endl;

return 0;
}

/*Output
Enter an integer: 56
Reversed: 65
*/
