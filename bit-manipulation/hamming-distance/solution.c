int hammingDistance(int x, int y) {
     int XOR = 0, count = 0;
     XOR = x ^ y;
     while(XOR)
     {
        XOR = XOR & (XOR - 1);
        count++;
     }
     return count;
}