int        main(void)
{
    int a[7] = {5,2,6,1,7,4,3};
    int *pa = &a[0];
    int i = 0;
    int j = 0;

    while ( i < 7)
    {
        printf("%d",a[i]);
        i++;
    }
    printf("\n");
    ft_sort_int_tab(pa,7);
    printf("\n");
    while ( j < 7)
    {
        printf("%d",a[j]);
        j++;
    }
    printf("\n");
    return (0);
}