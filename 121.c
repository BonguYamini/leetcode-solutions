#include<stdio.h>
int main()
{
    int prices[] = {7,1,5,3,6,4};
    int n = 6;
    int max = 0;
    int min = prices[0];
    for(int i = 1; i<n ; i++)
    {
        if (prices[i]< min)
        {
            min = prices[i];
        }
        else
        {
            if (prices[i] - min > max)
            {
                max = prices[i] - min;
            }
        }
    }
    printf("Maximum profit: %d\n", max);
    return 0;
}