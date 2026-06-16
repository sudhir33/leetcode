int findLucky(int* arr, int arrSize) {
    int freq[501]={0};
    int i;
    for(i=0;i<arrSize;i++)
    {
        freq[arr[i]]++;
    }
    int res=-1;
    for(i=1;i<501;i++)
    {
        if(i==freq[i])
        {
            res=i;
        }
    }
    return res;
}