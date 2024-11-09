#include <iostream>
using namespace std;

int main() 
{
    //1
    //const int SIZE = 10;
    //int arr1[SIZE], arr2[SIZE], sum[SIZE];
    //
    //for (int i = 0; i < SIZE; i++)
    // {
    //    arr1[i] = rand() % 100 + 1;
    //    arr2[i] = rand() % 100 + 1;
    //}
    //for (int i = 0; i < SIZE; i++) 
    // {
    //    sum[i] = arr1[i] + arr2[i];
    //}
    //cout << "Sum array: ";
    //for (int i = 0; i < SIZE; i++)
    // {
    //    cout << sum[i] << " ";
    //}
    //cout << endl;


    const int SIZE = 10;
    const int PART_SIZE = 5;
    int arr[SIZE], arr1[PART_SIZE], arr2[PART_SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < PART_SIZE; i++) 
    {
        arr1[i] = arr[i];    
        arr2[i] = arr[i + 5];
    }
    cout << "Array 1: ";

    for (int i = 0; i < PART_SIZE; i++) 
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < PART_SIZE; i++) 
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

}
