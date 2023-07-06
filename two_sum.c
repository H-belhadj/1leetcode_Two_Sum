int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int *results = (int *)malloc(2 * sizeof(int));
    *returnSize = 0;

    int i = -1;
    while(++i < numsSize)
    {
        int j = i;
        while(++j < numsSize)
        {
            if(nums[j] == target - nums[i])
            {
                results[0] = i;
                results[1] = j;
                *returnSize = 2;
                return results;
            }
        }
    }
    return results;
}
