void reverse(char *s, int len)
{
   int left = 0, right = len - 1;
    while(left <= right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

char* reverseWords(char* s) {
    
    int len = strlen(s);
    //while(*s == ' ') s++;
    char *word = s;
    char *ptr = s;
    for(int i = 0; i <= len; i++)
    {
        if(*ptr == ' ' || *ptr== '\0')
        {
            reverse(word, ptr - word);
            word = ptr + 1;
        }
       ptr++;
    }
    reverse(s, len);

    // Step 3: clean spaces (NEW)
    int i = 0, j = 0;
    while (s[i] != '\0') {
        // skip leading/extra spaces
        if (s[i] == ' ' && (j == 0 || s[j - 1] == ' ')) {
            i++;
            continue;
        }
        s[j++] = s[i++];
    }
    // trim trailing space if any
    if (j > 0 && s[j - 1] == ' ') j--;
    s[j] = '\0';

    return s;
}