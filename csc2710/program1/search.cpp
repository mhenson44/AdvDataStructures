/*
Name: Michael Henson      
Date: 9/01/21 
Class:
Path: ~/csc2710/program1/search.h

Desc:
*/

#include <iomanip>
#include <iostream>
using namespace std;
void fillArray(int myArray[], int arraySize);
int findMax(int myArray[], int arraySize);
int findMin(int myArray[], int arraySize);
int main()
{
    int array1[100];
    fillArray(array1, 100);

    cout << " your max number was " << findMax(array1, 100) << " and your minimum number was " << findMin(array1, 100) << endl;



}
void fillArray(int myArray[], int arraySize)
{
    srand(time(0));
    for (int i = 0; i < arraySize; i++)
    {
        int numRand = rand() % 100;
        myArray[i] = numRand;
    }
}
int findMax(int myArray[], int arraySize)
{
    int max = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if (myArray[i] > max)
            max = myArray[i];
    }
    return max;
}
int findMin(int myArray[], int arraySize)
{
    int min = 101;
    for (int i = 0; i < arraySize; i++)
    {
        if (myArray[i] < min)
            min = myArray[i];
    }
    return min;
}

