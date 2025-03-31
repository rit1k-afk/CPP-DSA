#include <iostream>
using namespace std;
int getMax(int num[], int size)
{
    int max1 = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max1)
        {
            max1 = num[i];
        }
        // max1 = max(max1, num[i]);
    }
    return max1;
}
int getMin(int num[], int size)
{
    int min1 = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < min1)
        {
            min1 = num[i];
        }
        // min1 = min(min1, num[i]);
    }
    return min1;
}
int main()
{
    int num[100];
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum in array : " << getMax(num, size) << endl;
    cout << "Minimum in array : " << getMin(num, size) << endl;
    return 0;
}