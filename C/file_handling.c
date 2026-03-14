#include <stdio.h>
// File Handling Program
int main()
{
    FILE *p = NULL;

    p = fopen("my_file.txt", "r+");
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
    fputs("\nHello vivek  bhai\n", p);

    /* ****reading file****
     fscanf(p, "%s", str);
     printf("%s", str);*/

    /* ****writing file****
     fprintf(p, "%s", str);
     fclose(p);*/
}