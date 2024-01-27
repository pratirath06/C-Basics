#include<stdio.h>
int main()
{
    //Character ranges from 0 to 255 or -128 to 127
    char a = 'a';
    //If we assign a integer decimal numeric value under 255 to a char it will assign to the ASCII value character
    char b = 99;
    char c = 236;
    printf("%c",a);
    //Output:a
    printf("%c",b);
    //Output:c
    printf("%c",c);
    //Output:∞
    a++;
    printf("%c",a);
    //Output:b
}
