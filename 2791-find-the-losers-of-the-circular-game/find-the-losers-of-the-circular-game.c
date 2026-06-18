/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* circularGameLosers(int n, int k, int* returnSize) {
    // 1 2 3 4 5
    // 1 1 2 0 0
    int freq[n+1];
    for(int i=0;i<n;i++)
    {
        freq[i]=0;
    }
    int arr[n];
    int i=0,pos,p=1;
    freq[0]=1;
    while(1)
    {
        i=i+k*p;
        pos=i%n;
        //printf("H%d\n",pos);
        if(freq[pos]==1)
        {
            //printf("%d\n",pos);
            break;
        }
        freq[pos]++;
        
        p++;
    }
    int *res=(int*)malloc(n*sizeof(int));
    int j=0;
    for(i=0;i<n;i++)
    {
        if(freq[i]==0)
        {
            res[j++]=i+1;
        }
    }
    *returnSize=j;
   
    return res;
}