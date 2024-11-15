#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << endl << "Max: " << max << endl << "Min: " << min;
    system("pause");
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
    int r1, r2;
    const int size = 12;
    int arr[size];
    int max = arr[0], min = arr[0];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the income:" << endl;
        cin >> arr[i];
    }
    cout << "Please, enter the range:" << endl;
    cin >> r1 >> r2;
    for (int j = 0; j >= r1, j < r2; j++)
    {
        if (min > arr[j])
            min = arr[j];
        if (max < arr[j])
            max = arr[j];
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    system("pause");
    return 0;
}
