/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumber(int* nums, int numsSize, int* returnSize) {
     unsigned int xor_all = 0;
    for (int i = 0; i < numsSize; i++)
        xor_all ^= (unsigned int)nums[i];

    unsigned int diff_bit = xor_all & (~xor_all + 1);  // unsigned equivalent of x & -x

    int a = 0, b = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if ((unsigned int)nums[i] & diff_bit)
            a ^= nums[i];
        else
            b ^= nums[i];
    }
    *returnSize = 2;
    int *result = (int *)malloc(*returnSize  * sizeof(int));
    result[0] = a;
    result[1] = b;

    return result;

}