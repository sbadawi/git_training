#include <stdio.c>

size_t my_strlen(char *s){

    char *p = s;

    while(*p)
        ++p;

    return (p-s);
}

char *my_strcpy(char *t, char *s){
    char *p = t;

    while(*t++ = *s++);

    return p;
}

int main(void){
    int i;
    char *s[] =
    {
        "Git tutorials",
        "Tutorials Point"
    };

    for(i = 0; i<2; i++)
        printf("String length of %s = %d\n", s[i], my_strlen(s[i]));

    return 0;
}   
