#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{   

    char c1, c2;
    int x, y;

    char s1[20] = "x 20 y 10";

    FILE *input_fp = fopen("position2.txt", "w");
    fputs(s1, input_fp);
    fclose(input_fp);

    FILE *output_fp = fopen("position2.txt", "r");
    fscanf(output_fp, "%c %d %c %d\n", &c1, &x, &c2, &y);
    printf("%d %d\n", x, y);
    fclose(output_fp);

    return 0;
}