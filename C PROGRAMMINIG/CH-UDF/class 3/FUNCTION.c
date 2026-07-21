int input()
{
    int n;
    scanf("%d",&n);
    return n;
}

void arrayoutput(int size ,int a[])
{
    for(int i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
        
    }
}

void arrayinput(int size ,int a[])
{
    for(int i = 0; i < size; i++)
    {
        printf("a[%d] = ",i);
        a[i] = input();    
        
    }
    printf("\n");
    arrayoutput(size ,a);
}

int SumOfArrayElements(int size ,int a[])
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}