bool uniqueOccurrences(int* arr, int arrSize) {
    int pfreq[1001]={0};
    int nfreq[1001]={0};
    int i;
    for(i=0;i<arrSize;i++)
    {
        if(arr[i]>0)
        {
            pfreq[arr[i]]++;
        }
        else
        {
            nfreq[abs(arr[i])]++;
        }
    }
    int freq[1001]={0};
    for (int i = 0; i < 1001; i++)
    {
        if (pfreq[i] != 0) 
        {
            if (freq[pfreq[i]] == 1)
                return false;
            freq[pfreq[i]] = 1;
        }

        if (nfreq[i] != 0) 
        {
            if (freq[nfreq[i]] == 1)
                return false;
            freq[nfreq[i]] = 1;
        }
    }
    return true;
}