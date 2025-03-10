#include <iostream>
#include <cstdlib> 
#include <ctime>                    
using namespace std;

int main() {
    const int size = 10;
    int array[size];

    
    srand(static_cast<unsigned>(time(0)));

  
    cout << "Generated vector: ";
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 50 + 1;
        cout << array[i] << " ";
    }
    cout << endl;

    
    int min_element = array[0], max_element = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min_element) min_element = array[i];
        if (array[i] > max_element) max_element = array[i];
    }


    int sum = 0, count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] != min_element && array[i] != max_element) {
            sum += array[i];
            count++;
        }
    }

   
    cout << "Minimum array element: " << min_element << endl;
    cout << "Maximum element: " << max_element << endl;

    if (count > 0) {
        double mean = (sum) / count;
        cout << "Arithmetic mean of non-extreme elements: " << mean << endl;
    }
    else {
        cout << "No non-extreme elements to calculate the mean." << endl;
    }

    return 0;
}
