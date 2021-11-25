#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int array[100]{0}, n;
    array[0] = 1;
    cout << "Enter n: ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        arr[i] = i+1;
        array[0] *= arr[i];
    }
    cout << "n! = " << array[0] << endl;
    int z = array[0];
    int c = z;
    int counter = 0;
    while(z > 0)
    {
        z /= 10;
        counter ++;
    }
    cout << "Length of n! = " << counter << endl;
    int *arrFactorial = new int[counter];
    cout << "n! in array: ";
    for (int i = 0; i < counter; i++)
    {
        arrFactorial[i] = c % 10;
        c /= 10;
        cout << arrFactorial[i] << "\t";
    }
    cout << "Length of n! in final array:";
    int Counter = 0;
    for (int i = 0; i < 100; i++) {
        array[i] = arrFactorial[i];
        if (array[i] == 3)
            Counter++;
    }
    cout << "\nThe number of 3 in n! = "  << Counter << endl;
}
