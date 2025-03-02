#include <iostream>

using namespace std;

int main () {
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        sum += i;
    }
    
    cout << "The sum of first " << num << " is " << sum;

    return 0;
}