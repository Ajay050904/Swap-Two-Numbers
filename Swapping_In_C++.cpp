#include<iostream>
using namespace std;

class Swapping 
{
    public:
        void swap(int *x, int *y)
        {
            int temp; 
            temp = *x;      // Assign the value pointed to by x to temp
            *x = *y;        // Assign the value pointed to by y to x
            *y = temp;      // Assign temp to the value pointed to by y
        }
};

int main()
{
    int a, b;
    cout << "\t\t <- To Swap Two Numbers -> \n\t\t ************************* \n";
    cout << "Enter 1 number : ";
    cin >> a;
    cout << "Enter 2 number : ";
    cin >> b;
    cout << "Before Swapping : \n\t" << "a = " << a << "\t\tb = " << b << endl;
    cout << "\tAddress of a = " << &a << "\n\tAddress of b = " << &b << endl;
    
    Swapping obj;
    obj.swap(&a, &b); // Call the swap method of the Swapping class

    // After calling swap method, the values of a and b will be swapped
    cout << "After Swapping : \n\t" << "a = " << a << "\t\tb = " << b << endl;
    cout << "\tAddress of a = " << &a << "\n\tAddress of b = " << &b << endl;

    return 0;
}
