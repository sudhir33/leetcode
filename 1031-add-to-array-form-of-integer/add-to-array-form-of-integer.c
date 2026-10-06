/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {

    int *res;
    res = (int *)calloc(numSize + 10, sizeof(int));

    int j, i, c = 0, v;

    j = 0;
    i = numSize - 1;

    while(i >= 0 || k > 0)
    {
        v = k % 10;
        k = k / 10;

        if(i >= 0)
        {
            res[j] = (c + v + num[i]) % 10;
            c = (c + v + num[i]) / 10;
            i--;
        }
        else
        {
            res[j] = (c + v) % 10;
            c = (c + v) / 10;
        }

        j++;
    }

    if(c > 0)
    {
        res[j] = c;
        j++;
    }

    // Reverse
    for(i = 0; i < j / 2; i++)
    {
        int temp = res[i];
        res[i] = res[j - i - 1];
        res[j - i - 1] = temp;
    }

    *returnSize = j;

    return res;
}