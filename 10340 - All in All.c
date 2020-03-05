#include <stdio.h>
#include <string.h>
#define SIZE 100001

int main()
{
    char str1[SIZE], str2[SIZE];
    int i;
    while(scanf("%s%s", str1, str2) != EOF)
    {
        int idx = 0;
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        for(i = 0; i < len2; i++)
            if(str1[idx] == str2[i]) idx++;
        if(idx == len1) printf("Yes\n");
        else printf("No\n");
    }

    return 0;
}
