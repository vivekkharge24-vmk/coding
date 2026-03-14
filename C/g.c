#include <stdio.h>
int main()
{
    FILE *p = NULL;

    p = fopen("my_file.txt", "a+");
    /* ****character reading****
    char c = fgetc(p);
    printf("%c", c);*/

    /* ****string reading****
    char str[30];
    fgets(str, 12, p);
    printf("%s", str);*/

    // ****character writing****
    fputc('v', p);

    // ****string writing****
    fputs("\n Hello vivek  bhai", p);
}