#include <iostream>

using namespace std;

void sortArray(int arr[], int size) {

    for (int i = 0; i < size - 1; ++i) {
    
        for (int j = 0; j < size - i - 1; ++j) {
        
            if (arr[j] > arr[j + 1]) {
            
                int temp = arr[j];
                
                arr[j] = arr[j + 1];
                
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[10];
    int sum = 0;

    cout << " enter 10 numbers: " << endl;

    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / 10;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    sortArray(numbers, 10);

    cout << "Sorted array in ascending order:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
