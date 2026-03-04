/*
 * EXPLORATION ANSWERS:
 * 1. Changing 'double' to 'int': Inputting 35.5 will be truncated to 35, losing decimal precision.
 * 2. Changing 9.0/5.0 to 9/5: It performs integer division resulting in 1, making the calculation wildly inaccurate.
 * 3. Adding 'using namespace std;': Removes the need for 'std::' prefixes, making the code cleaner.
 */
#include <iostream>
using namespace std; // # Eksplorasi 3: Menggunakan namespace std

int main() {  
    double celsius, fahrenheit;

    cout << "Masukkan suhu dalam Celsius: ";  
    cin >> celsius;

    // # Memaksa pembagian desimal agar presisi
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    cout << "Suhu dalam Fahrenheit: " << fahrenheit << endl;  
    return 0;  
}
