/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
int binarySearch(int value,int values[],int min,int max); 
bool search(int value, int values[], int n)
{
    int min = values[0];
    int max = values[n - 1];
    binarySearch(value, values[], min, max);
    return 0;
}

int binarySearch(int value,int values[],int min,int max) {
    int midpoint;
    if(max < min){
        return -1;
    }
    else
    {
        midpoint = (min + max)/2;
        if(values[midpoint] < value)
        {
            binarySearch(value, values[], midpoint + 1, max);
        }
        else if(values[midpoint] > value){
            binarySearch(value, values[], min, midpoint - 1);
        }
        else
        {
            return 1;
        }
    }
    }
/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int element;
    for(int i = 0; i < n; i++)
    {
        element = values[i];
        int j = i;
        while((j > 0) && (values[j - 1] > element))
        {
           values[j] = values[j - 1];
           j = j - 1; 
        }
        values[j] = element;
    }
    return;
}