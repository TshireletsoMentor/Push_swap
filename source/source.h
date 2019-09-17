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

/*num_add.c*/
static void ra_or_rra2(int *a, int *b, int *n, int *i);
void        pb_asort(int *a, int *b, int *n);
void        passb(int *a, int *b, int *n);
void        ex(int *min, int *max, int *i);
void        add_erpl2(char *av, int *a, int *x);

/*sort_3_num.c*/
void        do_rr(int *a, int *b, int *n, char *s);
void        asort(int *a, int *b, int *n);
void        asort_b(int *a, int *b, int *n);


/*sort_6_num*/
int             lolo(int *a, int n, int mid, int *x);
static void     lole(int *a, int *b, int *n, int i);
static void     pa(int *a, int *b, int *n);
int             mid(int *a, int n);
void            bsort(int *a, int *b, int *n);

/*sort_x.c*/
static void     minmax(int *i, int *a, int *min, int *max);
static void     ra_or_rra1(int *a, int *b, int *n, int *i);
static void     findx(int *min, int *max, int *x, int *i);
static void     to_ra_or_rra(int *i, int *a, int *b, int *n);
void            csort(int *a, int *b, int *n);

#endif