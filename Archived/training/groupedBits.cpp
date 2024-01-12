int groupedBits(int n)
{
    int dem=0;
    while(n>0)
    {
        if(n%2==0)
        dem++;
        n/=2;
    }
    return dem;
}