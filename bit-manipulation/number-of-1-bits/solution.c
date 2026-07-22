int hammingWeight(int n) {

    int get, count = 0;
    for(int i = 0; i < 31; i++)
    {
        get = ((n >> i) & 1);
        if(get == 1) count++;
    }
    return count;
}