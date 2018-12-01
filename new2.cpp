#include <iostream>
using namespace std;

int main()
{
    int n ;
    int numbers[n] ;
    cin >> n ;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)

    {cout << numbers[i];}

    return 0 ;
}
