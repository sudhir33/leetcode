bool isPerfectSquare(int num) {
    long int i=1;// i=1 num=44
    while(1)
    {
        if(i*i>num)// 49>44
        {
            return 0;
        }
        if(i*i==num)//36==44
        {
            return 1;
        }
        i++;//7
    }
}


/*
1 or 0

num=14


i=1 =1*1==14
i=2 = 4==14
i=3  = 9==14
i=4  = 16==14      16>14  return 0

i=5


loop--> counter /condition    while



16=4*4
*/