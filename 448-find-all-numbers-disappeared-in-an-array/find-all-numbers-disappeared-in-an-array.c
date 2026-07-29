/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *res,*countarray;
    res=(int*)malloc(numsSize*sizeof(int));//int res[numsSize];
    countarray=(int*)calloc(numsSize+1,sizeof(int));//int countarray[numsSize+1];
    int i,ind;
    for(i=0;i<numsSize;i++)
    {
        ind=nums[i];
        countarray[ind]+=1;
    }
    int j;
    for(i=1,j=0;i<numsSize+1;i++)
    {
        if(countarray[i]==0)
        {
            res[j]=i;
            j++;
        }
    }
    *returnSize=j;
    return res;
}

/*
                      i
nums=[4,3,2,7,8,2,3,1]
numsSize=8

counarray[9]

0 1 2 2 1 0 0 1 1
0 1 2 3 4 5 6 7 8


*resize=j
res=[5,6]






            i
[6,5,6,3,2,2]
numsSize=6    1.6

int countarray[numsSize+1]// countarray[7]

0 0 2 1 0 1 2 
0 1 2 3 4 5 6

[1,4]




[4,3,2,7,8,2,3,1]
n=8 
1 2 3 4 5 6 7 8
[5,6]


[1,1]
n=2
1 2

[2]
*/