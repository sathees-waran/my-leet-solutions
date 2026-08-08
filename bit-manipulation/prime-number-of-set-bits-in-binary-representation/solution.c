int countPrimeSetBits(int left, int right) {
    int bit_count; 
    int prime_set_bits = 0;
    int mask = (1 << 2) | (1 << 3) | (1 << 5) | (1 << 7)
               |(1 << 11) | (1 << 13) | (1 << 17) | (1 << 19);
    for(int n = left; n <= right; n++)
    {
       bit_count = __builtin_popcount(n);
       if((mask >> bit_count) & 1) prime_set_bits++;
    }
    return prime_set_bits;
}
