//Gulamnabi Khan
//23070123503

#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    char ch;
    float f;
    int* aptr = &a;
    char* chptr = &ch;
    float* fptr = &f;
    cout << "Memory address of integer a: " << aptr << endl;
    cout << "Memory address of char ch: " << (void*)chptr << endl;
    cout << "Memory address of float f: " << fptr << endl;
    cout << "Value of a: " << *aptr << endl;
    aptr++;
    cout << "Memory address after incrementing aptr: " << aptr << endl;
    cout << "Value at the new memory address (after incrementing aptr): " << *aptr << " (might be garbage value)" << endl;

    return 0;
}
/*
Output
Memory address of integer a: 0x6ffdf4
Memory address of char ch: 0x6ffdf3
Memory address of float f: 0x6ffdec
Value of a: 10
Memory address after incrementing aptr: 0x6ffdf8
Value at the new memory address (after incrementing aptr): 7339500 (might be garbage value)
*/
