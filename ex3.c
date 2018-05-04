#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char strfirst[100];
    char strsecond[100];
    FILE *text1, *text2, *com ;
text1 = fopen("text1.txt", "r");
text2 = fopen("text2.txt", "r");

if(text1 != NULL) {
        fgets(strfirst, 100, text1);
}
else{
    fprintf(stderr, "error\n");
}

if(text2 != NULL) {
        fgets(strsecond, 100, text2);
}
else{
    fprintf(stderr, "error\n");
}

fprintf(stdout, "%s%s",strfirst , strsecond);
return 0;
}
