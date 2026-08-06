char findTheDifference(char* s, char* t) {
    char ans = 0;

    while(*s) ans ^= *s++;
    while(*t) ans ^= *t++;
    return ans;
    
}