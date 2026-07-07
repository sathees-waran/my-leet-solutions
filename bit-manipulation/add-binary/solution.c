char* addBinary(char* a, char* b)
{
    int lenA = strlen(a);
    int lenB = strlen(b);

    int maxLen = (lenA > lenB) ? lenA : lenB;

    char *res = malloc(maxLen + 2);

    int i = lenA - 1;
    int j = lenB - 1;
    int k = maxLen + 1;

    res[k] = '\0';

    int carry = 0;

    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;

        if (i >= 0)
            sum += a[i--] - '0';

        if (j >= 0)
            sum += b[j--] - '0';

        res[--k] = (sum & 1) + '0';
        carry = sum >> 1;
    }

    if (k > 0)
        memmove(res, res + k, maxLen + 2 - k);

    return res;
}