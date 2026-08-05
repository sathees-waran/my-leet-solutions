int missingNumber(int* nums, int numsSize) {
    int ans = numsSize;//3
    for(int i = 0; i < numsSize; i++)
    {
        ans ^= i;
        ans = ans ^ nums[i];
    }
    return ans;
    
}