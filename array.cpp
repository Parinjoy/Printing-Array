#include <iostream>
using namespace std;

int main()
{
    //Declaring variables used here
    int n ;
    int numbers[n] ;
    cout << "Enter size of array";
    //User inputs Size Of The Array
    cin >> n ;
    cout << "Enter numbers: ";
    //Making the Array
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    //Printing The Array
    for (int i = 0; i < n; i++)

    {cout << numbers[i];}

    return 0 ;
}
