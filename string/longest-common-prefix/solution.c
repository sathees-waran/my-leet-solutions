char* longestCommonPrefix(char** strs, int strsSize) {
    int i;
    for (i = 0; strs[0][i] != '\0'; i++) {
        char c = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] != c) {
                char* result = (char*)malloc(i + 1);
                memcpy(result, strs[0], i);
                result[i] = '\0';
                return result;
            }
        }
    }
    char* result = (char*)malloc(i + 1);
    memcpy(result, strs[0], i);
    result[i] = '\0';
    return result;
}