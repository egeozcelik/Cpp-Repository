#include <iostream>
#include <vector>
using namespace std;

vector<int> minimalHeaviestSetA(vector<int> arr)
{
    //Step 1. Calculating the total amount of elements of arr given in main func.
    int totalAmount=0;
    int ArraySize= arr.size();
    for(int i=0; i<ArraySize; i++)
    {
        totalAmount += arr[i];
    }
    // step 2.
    int valueToReach=0;
    if(totalAmount%2 == 0)
    {
        valueToReach = (totalAmount / 2) + 1;
    }
    else
        valueToReach = (totalAmount+1)/ 2;

    //step 3. 

    int temp=0;
    for(int k=0; k<ArraySize-1; k++)
        for(int j=0; j<ArraySize-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    //step 4. Filling the A array
    vector<int> A = arr;
    int totalAmountOfA=0;
    int m=0;

    while(totalAmountOfA < valueToReach)
    {
        A[m] = arr[m];
        totalAmountOfA += A[m];
        m++;

    }

    cout<<"Total amount:"<<totalAmount<<endl;
    cout<<"valueToReach:"<<valueToReach<<endl;
    cout<<"Total amount of A:"<<totalAmountOfA<<endl;
    return A;
}





int main()
{
    vector <int> arr= {5,8,1,4,3,7};


    vector <int> result = minimalHeaviestSetA(arr);
    for(int i = 0 ; i< result.size(); i++)
    {
        cout<<"Anin "<< i << ". elemani"<< result[i] <<endl;
    }
    cout<< result.size();
    return 0;
}
