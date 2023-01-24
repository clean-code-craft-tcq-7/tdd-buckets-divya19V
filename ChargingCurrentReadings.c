#include "ChargingCurrentReadings.h"

void chargingCurrent (int inputRange[])
{
    identifyInputRange(inputRange);
    
}

void identifyInputRange(int * inputRange)
{
    int index = 0;
    int min = inputRange[index];
    int max = inputRange[index];
    for(index = 1; index < (sizeof(inputRange) / sizeof(inputRange[0])); index++) 
    {
        if (inputRange[index] > max)
            max = inputRange[index];
        if (inputRange[index] < min)
            min = inputRange[index];
    }
    arr[0] = min;
    arr[1] = max;
}
