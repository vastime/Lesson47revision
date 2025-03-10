#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    const int size = 10;
    int array[size];
    
    
    srand(time(0));

    cout << "Generated vector: ";
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 101 - 50;
        cout << array[i] << " ";
    }
    cout << endl;

    
    int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) {
            sum += array[i];
            count++;
        }
    }

    if (count > 0) {
        double mean = (sum) / count;
        cout << "Sum of non-zero elements: " << sum << endl;
        cout << "Number of non-zero elements: " << count << endl;
        cout << "Arithmetic mean of non-zero elements: " << mean << endl;
    }
    else {
        cout << "The array contains no non-zero elements." << endl;
    }

    return 0;
}
