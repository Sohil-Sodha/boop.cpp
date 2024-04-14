#include <iostream>

using namespace std;

int main() {
    int numbers[10];
    int sum = 0;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum / 10.0;

    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
