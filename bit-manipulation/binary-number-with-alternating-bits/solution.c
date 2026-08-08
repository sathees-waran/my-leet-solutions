bool hasAlternatingBits(int n) {
    
   unsigned int x = (unsigned int)n ^ ((unsigned int)n >> 1);
    return (x & (x + 1)) == 0;
}