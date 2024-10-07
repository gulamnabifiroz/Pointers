//Gulamnabi Khan
//23070123503

//ENTC A3
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements of the array:" << endl;
    for(int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    int *ptr = arr;
    cout << "Memory address of the first element in the array: " << ptr << endl;

    cout << "Array elements using pointer:" << endl;
    for(int i = 0; i < n; i++) 
	{
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}
/*
Enter the number of elements in the array: 3
Enter 3 elements of the array:
1
2
3
Memory address of the first element in the array: 0x6ffdb0
Array elements using pointer:
1
2
3
*/


