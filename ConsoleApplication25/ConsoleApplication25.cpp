#include <iostream>
using namespace std;

int main() {
    // Task 1. Integers from 1 to 100 using while
    cout << "Task 1. Integers from 1 to 100" << endl;
    int i = 1;
    while (i <= 100) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Task 2. Positive even numbers up to 200 and their count using while
    cout << "\nTask 2. Positive even numbers up to 200" << endl;
    int j = 2;
    int count = 0;
    while (j <= 200) {
        cout << j << " ";
        count++;
        j += 2;
    }
    cout << "\nCount: " << count << endl;

    // Task 3. Input N numbers, find sum of even numbers using while
    cout << "\nTask 3. Sum of even numbers among N numbers" << endl;
    int N;
    cout << "Enter N (N > 0): ";
    cin >> N;
    int k = 0;
    int sumEven = 0;
    int num;
    while (k < N) {
        cout << "Enter number " << k + 1 << ": ";
        cin >> num;
        if (num % 2 == 0) {
            sumEven += num;
        }
        k++;
    }
    cout << "Sum of even numbers: " << sumEven << endl;

    // Task 4. Clock strikes calculation for 12 hours using for
    cout << "\nTask 4. Clock strikes in 12 hours" << endl;
    int totalStrikes = 0;
    for (int hour = 1; hour <= 12; hour++) {
        totalStrikes += hour;
    }
    cout << "Total strikes in 12 hours: " << totalStrikes << endl;

    // Task 5. Sum of entered numbers until 0 is entered using for
    cout << "\nTask 5. Sum of numbers until 0" << endl;
    int sumAll = 0;
    int inputNum;
    cout << "Enter integers (enter 0 to stop):" << endl;
    for (;;) {
        cin >> inputNum;
        if (inputNum == 0) {
            break;
        }
        sumAll += inputNum;
    }
    cout << "Sum of all entered numbers: " << sumAll << endl;

    return 0;
}