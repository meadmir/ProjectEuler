#include "helper.h"

unsigned arg_min(unsigned nums[])
{
    unsigned min = nums[0];
    unsigned a_min = 0;
    for (unsigned i = 1; i < sizeof(nums); ++i)
    {
        if (nums[i] < min)
        {
            min = nums[i];
            a_min = i;
        }
    }
    return a_min;
}

unsigned abs_diff(unsigned a, unsigned b)
{
    if (a > b)
        return a - b;
    else
        return b - a;
}

