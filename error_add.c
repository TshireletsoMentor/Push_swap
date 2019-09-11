
/*dub_check checks for doubles in the sequence*/
void        dub_check(int ac, int *num)
{
    int     cntr;
    int     i;

    cntr = 0;
    if (ac > 1)
    {
        while(++cntr < ac)
        {
            i = 0;
            while (i < cntr)
            {
                if (num[i] == num[cntr])
                {
                    ft_putendl("Error");
                    exit(0);
                }
                i++;
            }
        }
    }
}

/*-converts str number to interget
  -prints out error if input cannot be a valid integer*/
void        place1(int *x, int *a, char **av)
{
    if ((a[x[1] - 1] = ft_atoi(av[x[2]])) || ft_strequ(av[x[2]], "0")){
    }
    else
    {
        ft_putendl("Error");
        exit(0);
    }
    
}

/*-converts str number to interget
  -prints out error if input cannot be a valid integer*/
void        place2(int *n, int *a, char **av)
{
    int     i;

    i = 0;
    while ()
}