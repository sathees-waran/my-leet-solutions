int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {

   
        *returnSize = imageSize;
        *returnColumnSizes = imageColSize;
        int left,right, temp;
        for(int i = 0; i < imageSize; i++)
        {
             left = 0; right = imageColSize[i] - 1;
             while(left <= right)
             {
                temp = image[i][left];
                image[i][left] = image[i][right] ^ 1;
                image[i][right] = temp ^ 1;
                left++; right--;
             }
        }
    return image;
}