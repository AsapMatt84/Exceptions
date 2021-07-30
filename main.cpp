//Matthew Cahill
//CIS 1202 5T1
//July 30, 2021

#include <iostream>
using namespace std;
// Classes for Try/Catch
class invalidCharacterExcpeption{};
class invalidRangeExpection {};

//Function Prototype
char character(char, int);

int main() {
    char letter;
    int number;
    // Loop to enter and test data
    for (int counter = 0; counter < 5; counter++) {
        //Input
        cout << "Enter char: ";
        cin >> letter;
        cout << "Enter offset number: ";
        cin >> number;
        
        //Try & Catch for invalidCharacterExcpeption
        try {cout << character(letter, number) << endl;
        } catch (invalidCharacterExcpeption) {
            cout << "Invalid Character Exception" << endl;
        } catch (invalidRangeExpection){
            cout << "Invalid Range Exceptrion" << endl;
        }
    }
    return 0;
}
//Character Function
char character(char start, int offset){
    int sum = start + offset;
    //Check Character
    if (start < 65 || (start > 90 && start < 97) || start > 122)
        {throw invalidCharacterExcpeption();}
    //Check Range
    else if (sum < 65 || (sum > 90 && sum < 97) || sum > 122)
        {throw invalidRangeExpection();}
    //Check letter case change
    else if((sum >= 65 && sum <= 90 && start >= 95 && start <= 122) || (sum >= 95 && sum <= 122 && start >= 65 && start <= 90) )
        {throw invalidCharacterExcpeption();}
    else return sum;
}
