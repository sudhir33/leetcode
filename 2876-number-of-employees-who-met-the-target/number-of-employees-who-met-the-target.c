int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int count=0,i;
    for(i=0;i<hoursSize;i++)
    {
        if(hours[i]>=target)
        {
            count++;
        }
    }
    return count;
}