#include <stdio.h>
#include <string.h>
int main() 
{
    char s1[100], s2[100];
    int i, count1[26] = {0}, count2[26] = {0};
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);
    if (strlen(s1) != strlen(s2)) 
    {
        printf("Not Anagram");
        return 0;
    }
    for (i = 0; s1[i] != '\0'; i++) 
    {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    for (i = 0; i < 26; i++) 
    {
        if (count1[i] != count2[i]) 
        {
            printf("Not Anagram");
            return 0;
        }
     }
    printf("Anagram");
    return 0;
}
