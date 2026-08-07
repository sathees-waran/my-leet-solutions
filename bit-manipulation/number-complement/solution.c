int findComplement(int num) {
    int ans = 0; int started = 0;
    for(int i = 31; i >= 0; i--)
    {
        
        if((num >> i) & 1)
        {
            started = 1;
        }
        if(started)
        {
           ans = (ans << 1) | !((num >> i) & 1);
        }
    }
    return ans;
}