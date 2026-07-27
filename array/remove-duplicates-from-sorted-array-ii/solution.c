int removeDuplicates(int* nums, int numsSize) {
    int i,j = 2;
     if (numsSize <= 2)
        return numsSize;
    for(i = 2; i < numsSize; i++)
    {
        if(nums[i] != nums[j - 2])
        {
            nums[j] = nums[i];
             j++;
        }
    }
    return j;
}