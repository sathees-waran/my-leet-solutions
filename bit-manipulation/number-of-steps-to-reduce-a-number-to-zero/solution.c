int numberOfSteps(int num) {
    int count = 0;
    while (num != 0)
    {
        (num & 1) ? (num--) : (num = num >> 1);
        count++;
    }
    return count;
}