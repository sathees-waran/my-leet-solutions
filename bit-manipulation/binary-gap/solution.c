int binaryGap(int n) {
    int prev = -1;
    int ans = 0;
    int dist = 0;
    int pos = 0;
    while(n > 0) //1
    {
        if(n & 1)
        {
            if(prev != -1)
            {
               dist = pos - prev;// 4 - 2
               if(dist > ans)
               {
                 ans = dist;//2
               }
            }         
            prev = pos;// 4
        }
        pos++;//5
        n >>= 1;
    }
    return ans;
}