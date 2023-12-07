/*
We declare array of size greater than total no. of registered EVs
n = total no. of active drivers
Index of array corresponds to Sl. No. assigned to the drivers and their data
The Array only stores the Slot number assigned to the person at the Index
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int i, n;
    int static arr[120];
    printf("Enter the Number of Active drivers");
    scanf("%d", &n);

    for(i=0; i < n/4; i++) //For 1st group of n/4 people
    {
        arr[i] = 13;
    }
    
    for(i=n/4; i < n/2; i++) //For 2nd group of n/4 people
    {
        arr[i] = 24;
    }
    
    for(i=n/2; i < (3*n)/4; i++) //For 3rd group of n/4 people
    {
        arr[i] = 13;
    }

    for(i=(3*n)/4; i < n; i++) //For 4th group of n/4 people
    {
        arr[i] = 24;
    }
        
}