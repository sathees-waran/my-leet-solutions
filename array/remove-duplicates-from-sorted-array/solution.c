int removeDuplicates(int* nums, int numsSize) {
    int i, k = 0;
    for(i = 1; i < numsSize; i++)// 1 2
    {
       if(nums[i] != nums[k])// nums[2] != nums[0]
       {
            k++;
            nums[k] = nums[i];
       }
    }
    return k + 1;
}