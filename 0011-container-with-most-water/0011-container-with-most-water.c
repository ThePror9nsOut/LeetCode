#include <stdio.h>

int maxArea(int* height, int heightSize)
{
    int left = 0;
    int right = heightSize-1;    

    int max;
    
    int min;
    int area;

    while (left < right)
    {
        min = height[left] > height[right] ? height[right] : height[left];

        area = min * (right-left);

        if (max < area)
        {
            max = area;
        }

        if (height[left] == min)
        {
            left++;
        }
        else
        {
            right--;
        }
    }    

    return max;
}