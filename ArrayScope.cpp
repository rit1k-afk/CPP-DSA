#include <iostream>
using namespace std;

void update(int ar[], int size)
{
    cout << "Going inside the function" << endl;

    // updating the firstt index of the array
    ar[0]=767;
    //; hamne address hi de diyaa haai fuction ko ialiye yeh sare jagah change hoga

    for (int i = 0; i < size; i++)
    {
        cout << ar[i] << " ";
    }

    cout << "Going outside of the function" << endl;
}
int main()
{
    int arr[3] = {2, 45, 67};

    // calling the function
    update(arr, 3);

    cout << "Inside the main function : " << endl;
    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}