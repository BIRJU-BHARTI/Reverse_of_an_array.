//find the reverse element of an array.
#include <iostream>
using namespace std;
void reverse_of_an_array(int arr[], int i ,int n)
{
    while (i < n)
    {

        int temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        i++;
        n--;
    }
}
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The element of an array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse_of_an_array(arr, 0, n-1);
    cout << "The element after the reverse of an array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}