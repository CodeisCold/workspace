#include <stdio.h>
#include <stdlib.h>

// void void_pointer_test(void *arr)
// {
//     free(arr);
// }

int main(int argc, char const *argv[])
{
    char *a;
    char b[] = "1234";

    a = (char *)malloc(4 * sizeof(char));
    a[0] = 'a';
    a[1] = '\0';
    a[2] = 'c';
    // free(a+2);
    printf("%c\n", *(a+2));
    // printf("%c\n", a[100]);
    printf("%s\n", a);
    printf("%s\n", b);
    return 0;
}