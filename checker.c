/*This program takes in a sequence of numbers and checks whether the sequence
is in ascending order*/

/*-checks if commands resulted in ascening order sequence*/
static void     checker(int *a, int b_count, int count)
{
    int     i;

    i = 0;
    if (b_count = 0)
    {
        while (i < count)
        {
            if (a[i] < a[i + 1])
                i++;
            else
            {
                ft_putendl("KO");
                exit(0);
            }
        }
        if (i == count)
            ft_putendl("OK");
    }
    else
        ft_putendl("KO");
}
/*-checks if commands are valid
  -executes commands on sequence by operations.c*/
static void     com_to_op(char *line, int *list, int *b, int *n)
{
    if (ft_strequ(line, "sa") || ft_strequ(line, "sb")
    || ft_strequ(line, "ss") || ft_strequ(line, "pa")
        || ft_strequ(line, "pb") || ft_strequ(line, "ra")
        || ft_strequ(line, "rb") || ft_strequ(line, "rr")
        || ft_strequ(line, "rra") || ft_strequ(line, "rrb")
        || ft_strequ(line, "rrr"))
    {
        if (line[0] == 's')
            s(list, b, line, n);
        else if (line[0] == 'p')
            n[0] = p1(list, b, line, n);
        else if (line[0] == 'r' && line[1] == 'r' && line[2] != '\0')
            rr(list, b, line, n);
        else
            r(list, b, line, n);
        free(line);
    }
    else
    {
        ft_putendl("Error");
        exit(0);
    }
}

/*-Reads commands from stdin*/
static void     com_read(int *a, int *b, int *cntr)
{
    char    *line;

    while (get_next_line(0, &line) == 1)
        com_to_op(line, a, b, cntr);
    checker(a, cntr[0], cntr[1] - 1);
}

/*-intcheck converts arguments of numbers delimited by spaces into
  a integer array*/
static void     intcheck(int ac, char **av, int *n)
{
    int     x[3];
    int     i[3];
    int     a[n[1]];
    int     b[n[1]];

    i[0] = 1;
    i[1] = 0;
    x[1] = 0;
    while (i[0] < ac)
    {
        x[0] = ft_wordcount(av[i[0]], ' ');
        x[1] += x[0];
        if (x[0] > 1)
        {
            x[2] = x[1] - x[0];
            add_erpl2(av[i[0]], a, x);
        }
        else if (x[0] != 0)
        {
            x[2] = i[0];
            erpl1(a, x, av);
        }
        i[0]++;
    }
    com_read(a, b, n);
}

/*The main takes in str arguments
Precautions were made to make sure:
    -words(numbers) deliminted by spaces count despite the sequence being in a 
     single argument or within multiple arguments
Subsequent number were passed to intcheck*/

int             main(int ac, char **av)
{
    int     i;
    int     num[2];

    if (ac > 1)
    {
        if (ac < 3 && ft_strequ(av[1], ""))
            exit(0);
        num[1] = 0;
        i = 1;
        while (i < ac)
        {
            num[0] = ft_wordcount(av[i], ' ');
            if (num[0] == 0 && !ft_strequ(av[i], ""))
            {
                ft_putendl("Error");
                exit(0);
            }
            num[1] += num[0];
            i++;
        }
        num[0] = 0;
        if (num[1] == 0)
            exit(0);
        intcheck(ac, av, num);
    }
    return (0);
}