#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    printf("VOWEL!");
    else
    printf("CONSONANT!");
    return 0;
}
