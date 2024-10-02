#include<iostream>
using namespace std;
int add(int a, int b) {
    if (b == 0) 
    {
        return a;
    } 
    else if (b > 0) 
    {
        return add(a + 1, b - 1);
    } 
    else 
    {
        return add(a - 1, b + 1);
    }
}

int main() 
{
    int num1, num2;
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    int sum = add(num1, num2);
    cout << "Sum: " << sum << endl;
    return 0;
}
