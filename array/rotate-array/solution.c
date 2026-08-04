void rotate(int* nums, int numsSize, int k) {
int i;
int arr[numsSize];
//logic
    for(i = 0 ; i < numsSize; i++)
       arr[(i + k) % numsSize] = nums[i]; 
//copy to orginal array
    for(i = 0; i < numsSize; i++)
        nums[i] = arr[i];
}