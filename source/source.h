#ifndef SOURCE_H
# define SOURCE_H

# include "libft/libft.h"

/*ops.c*/
void        s(int *a, int *b, char *str, int *n);
int         p2(int *a, int *b, int *n);
int         p1(int *a, int *b, char *str, int *n);
void        rr(int *a, int *b, char *str, int *n);
void        r(int *a, int *b, char *str, int *n);

/*check.c*/
int     checka(int *a, int n);
int     checkb(int *b, int n);

/*error_add.c*/
void        dub_check(int ac, int *num);
void        place1(int *x, int *a, char **av);
void        place2(int *n, int *a, char **av);
void        erpl2(int *a, int *x, char **tmp);
void        erpl1(int *a, int *x, char **tmp);

/*sort_3_num.c*/
void        do_rr(int *a, int *b, int *n, char *s);
void        asort(int *a, int *b, int *n);


/*sort_6_num*/
int             lolo(int *a, int n, int mid, int *x);
static void     lole(int *a, int *b, int *n, int i);
static void     pa(int *a, int *b, int *n);
int             mid(int *a, int n);
void            bsort(int *a, int *b, int *n);

#endif