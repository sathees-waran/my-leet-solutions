
char* intToRoman(int num) {
 int values[]   = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    char *str = malloc(20);
    str[0] = '\0';

    for (int i = 0; i < 13 && num > 0; i++) {
        while (num >= values[i]) {
            strcat(str, symbols[i]);
            num -= values[i];
        }
    }
    return str;
}