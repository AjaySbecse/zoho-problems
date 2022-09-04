
#include <iostream>
#include <math.h>

using namespace std;


bool amIPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main()
{
    int arr[] = {16,17,4,3,5,2};
    int i,j;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    for(i = 0;i<size;i++){
        for(j = i + 1;j<size;j++){
            if(arr[i] < arr[j]){
                break;
            }
        }
        if(j == size){
            if(amIPrime(arr[i])){
                cout<<arr[i]<<" ";
            }
        }
    }

    return 0;
}
