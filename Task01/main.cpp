#include <iostream>
using namespace std;

int main() {
   
    int n;
    label1:
    cout << "Enter the number of array elements: ";
    cin >> n;
    if (n < 2) {
        cout << "Plesase input correct number";
        goto label1;
    }
    int* array = new int[n];
    
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max_index = 0, min_index = 0;
    int max_value = array[0], min_value = array[0];

    for (int i = 0; i < n; ++i) {
        if (array[i] > max_value) {
            max_value = array[i];
            max_index = i;
        }
        if (array[i] < min_value) {
            min_value = array[i];
            min_index = i;
        }
    }

    int k = min(max_index, min_index) + 1;
    int j = max(max_index, min_index);
    int sum = 0;

    for (int i = k; i < j; i++) {
        sum += array[i];
    }


    for (int i = k; i < j; i++) {
        sum += array[i];
    }

    cout << "Sum of array elements: " << sum << endl;

    return 0;
}
