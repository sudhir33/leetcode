/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* circularGameLosers(int n, int k, int* returnSize) {
    int *res,*countarray;
    res=(int*)malloc(n*sizeof(int));
    countarray=(int*)calloc(n,sizeof(int));// 0 0 0 0 0
    int b=0,i=1;
    while(1)
    {
        
        if(countarray[b]==1)
        {
            break;
        }
        countarray[b]=1;
        b=(b+(i*k))%n;
        //printf("%d ",b);
        i++;
    }
    int j=0;
    for(i=0;i<n;i++)
    {
        if(countarray[i]==0)
        {
            res[j]=i+1;
            j++;
        }
    }
    *returnSize=j;
    return res;

}
/*

n=5  k=2  k=4   6%5-->1



1 1 1 0 0
0 1 2 3 4

[4,5]











n=10   k=2  
2
4
6
8





*/