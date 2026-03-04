#include <iostream> 
using namespace std; 

int main() { 
    int number; 
    int total_positive = 0; 

    // # 1. Ask the user to input exactly 5 numbers
    for (int i = 1; i <= 5; i++) { 
        cout << "Enter number " << i << ": "; 
        cin >> number; 

        // # 2. Check if the number is positive, negative, or zero
        if (number > 0) { 
            cout << "-> Status: Positive\n"; 
            // # 3. Count the total of positive numbers
            total_positive++; 
        } 
        else if (number < 0) { 
            cout << "-> Status: Negative\n"; 
        } 
        else { 
            cout << "-> Status: Zero\n"; 
        } 
    } 

    // # 4. Print the final result
    cout << "\nTotal positive numbers entered: " << total_positive << endl; 

    return 0; 
}
