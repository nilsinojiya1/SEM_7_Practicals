#include <stdio.h>
#include <string.h>

int main()
{
int i=0, j=0, k=0;
char pt[50];
printf("Enter your Cipher Text: ");
gets(pt);

printf("\nBrute Force attack(use k=1 to k=26): ");
for(k=1; k<=26; k++)
{
	printf("\nK= %d\t", k);
	for(i=0; i<strlen(pt); i++)
	{
		if(pt[i] >= 65 &&pt[i] <= 90)
		{
			j = pt[i] - k;
			if(j<65)
			{
				j = j + 26;
			}
			printf("%c", j);
		}
		else if(pt[i] >= 97 &&pt[i] <= 122)
		{
			j = pt[i] - k;
			if(j<97)
			{
				j = j + 26;
			}
			printf("%c", j);
		}
		else
		{
			printf("%c",pt[i]);
		}
	}
	//printf("\n");
}
return 0;
}
