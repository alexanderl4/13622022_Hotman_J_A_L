/*
 * EXPLORATION ANSWER:
 * Removing 'nilai = 0.0;' from the constructor and skipping the recording loop causes the final output 
 * to print random Garbage Values. This proves it is fatal if simulation entities are not initialized properly.
 */
#include <iostream>
using namespace std;

class Sensor {  
private:  
    int id;   
    double nilai;

public:  
    // # Constructor  
    Sensor(int id_sensor) {   
        id = id_sensor;   
        nilai = 0.0;   
    }  
      
    void rekam(double data) {   
        nilai = data;   
    }  
      
    void status() {   
        cout << "ID: " << id << " | Nilai: " << nilai << endl;   
    }  
};

int main() {  
    // # Alokasi 3 objek Sensor ke dalam bentuk Array  
    Sensor jaringan[3] = { Sensor(101), Sensor(102), Sensor(103) };

    // # Batch processing
    for (int i = 0; i < 3; i++) {  
        // # Simulasi input data yang berbeda untuk tiap sensor  
        jaringan[i].rekam((i + 1) * 12.5);  
    }  
      
    // # Output hasil  
    for (int i = 0; i < 3; i++) {  
        jaringan[i].status();  
    }  
      
    return 0;  
}
