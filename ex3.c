#include<stdio.h>
int main(void)
{
    FILE *in, *out;
    int c;


    if ( (in = fopen ("ex3t1.txt", "r")) == NULL )
    {
        printf ("Couldn't read %s\n", "ex3t1.txt");
        return 1;
    }

    if ( (out = fopen ("ex3t2.txt", "w")) == NULL )
    {
        printf ("Couldn't copy %s\n", "ex3t2.txt");
        return 1;
    }

    while ( (c = getc (in)) != EOF )
        putc (c-32, out);

    fclose (in);
    fclose (out);
    printf ("Success \n");

    return 0;
}
