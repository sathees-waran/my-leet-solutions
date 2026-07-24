int strStr(char* haystack, char* needle) {

    int i = 0, j = 0, found = 0, index;
    int len1 = strlen(haystack);
    int len2 = strlen(needle);
    if(len2 > len1) return -1;
    while(haystack[i] != '\0')
    {
        if(haystack[i] == needle[j])// h h
        {
                index = i;
                while(needle[j] != '\0')//
                {
                    if(haystack[i] == needle[j]) found = 1;// h h e e l l o o \0 \0
                    else 
                    {
                        found = 0;
                        break;
                    }
                    i++;
                    j++;
                }
            j = 0;
            if (found) break;
            i = index + 1;
        }
        else
        {
            i++;
        }
        
    }
    if(found)
        return index;
    else 
        return -1;
    
}