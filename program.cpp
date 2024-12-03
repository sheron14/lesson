#include <iostream>
using namespace std;

int main() {
    
    int numbers[] = { 10, 23, 5, 78, 34, 56, 12 };
    int size = sizeof(numbers) / sizeof(numbers[0]); 

   
    int maxNumber = numbers[0];

   
    for (int i = 1; i < size; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i]; 
        }
    }

  
    cout << "Максимальное число в списке: " << maxNumber << endl;

    return 0;
}