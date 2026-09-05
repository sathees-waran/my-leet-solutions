int sumIndicesWithKSetBits(int* nums, int numsSize, int k) {
    if(k == 0) return nums[0];
       long long int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        int temp = i;
        int count = 0;
        while(temp)
        {
            temp = temp & temp - 1;
            count++;
        }
        if(count == k)
        {
           sum += nums[i];
        }
    }
    return sum;
}