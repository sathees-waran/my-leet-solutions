int minFlips(int** mat, int matSize, int* matColSize) {
        int rows = matSize;
    int cols = matColSize[0];

    int start = 0;

    // Convert matrix to a bitmask
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j])
                start |= 1 << (i * cols + j);
        }
    }

    int total = 1 << (rows * cols);

    int queue[512];
    int visited[512] = {0};

    int front = 0, rear = 0;

    queue[rear++] = start;
    visited[start] = 1;

    int steps = 0;

    while (front < rear)
    {
        int size = rear - front;

        while (size--)
        {
            int state = queue[front++];

            if (state == 0)
                return steps;

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    int next = state;

                    // Flip current cell
                    next ^= 1 << (i * cols + j);

                    // Flip up
                    if (i > 0)
                        next ^= 1 << ((i - 1) * cols + j);

                    // Flip down
                    if (i < rows - 1)
                        next ^= 1 << ((i + 1) * cols + j);

                    // Flip left
                    if (j > 0)
                        next ^= 1 << (i * cols + j - 1);

                    // Flip right
                    if (j < cols - 1)
                        next ^= 1 << (i * cols + j + 1);

                    if (!visited[next])
                    {
                        visited[next] = 1;
                        queue[rear++] = next;
                    }
                }
            }
        }

        steps++;
    }

    return -1;
    
}