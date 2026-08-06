char* toHex(int num) {
    if (num == 0)
    {
        char *ans = malloc(2);
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }

    char table[] = "0123456789abcdef";
    char *ans = malloc(9);   // Maximum 8 hex digits + '\0'
    int index = 0;

    unsigned int n = (unsigned int)num;

    while (n)
    {
        ans[index++] = table[n & 0xF];
        n >>= 4;
    }

    ans[index] = '\0';

    // Reverse the string
    for (int i = 0, j = index - 1; i < j; i++, j--)
    {
        char temp = ans[i];
        ans[i] = ans[j];
        ans[j] = temp;
    }

    return ans;
}