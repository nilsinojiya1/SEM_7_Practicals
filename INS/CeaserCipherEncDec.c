#include<stdio.h>
#include<conio.h>
#include<string.h>
int i,t=0,l=0;
char p[100],c[100],d[100];
void Encryption();
void Decryption();

void main()
{
	int ch;
	printf("\nCAESER CIPHER");
    TOP:
	printf("\n[1] Encryption");
	printf("\n[2] Decryption");
	printf("\n[3] Exit");
	printf("\n\nEnter the no: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter the plain text : ");
			gets(p);
			gets(p);
			Encryption();
			goto TOP;
		case 2:
			if(l==1)
				Decryption();
			else
			{
				printf("\nPlease enter the plain text.Press 1");
			}
			goto TOP;
		case 3:
			exit(0);
		default:
			printf("\nPlease enter the valid choice.\n");
			goto TOP;
	}
return 0;
}
void Encryption()
{
	for(i=0;p[i]!=NULL;i++)
	{
		if(islower(p[i]))
		{
			if(p[i]==32)
			{
				c[i]=p[i];
				d[i]=p[i];

}
			else if(p[i]<120)
			{
				c[i]=p[i]-32+3;
				d[i]=p[i]+3;
			}
			else
			{
				c[i]=p[i]-32-26+3;
				d[i]=p[i]-26+3;
			}
		}
		else
		{
			if(p[i]==32)
			{
				c[i]=p[i];
				d[i]=p[i];
			}
			else if(p[i]<88)
			{
				c[i]=p[i]+3;
				d[i]=p[i]+3;
			}
			else
			{
				c[i]=p[i]-26+3;
				d[i]=p[i]-26+3;
}
		}
	}
	printf("\nCypher text is       : %s\n",c);
	t=1;
	l=1;
}

void Decryption()
{
	for(i=0;d[i]!=NULL;i++)
	{
		if(islower(d[i]))
		{
			if(d[i]==32)
				c[i]=d[i];
			else if(d[i]<100)
			{
				c[i]=d[i]+26-3;
			}
			else
			{
				c[i]=d[i]-3;
			}
		}
		else
		{
			if(d[i]==32)
                c[i]=d[i];
			else if(d[i]<68)
			{
				c[i]=d[i]+26-3;
			}
			else
			{
				c[i]=d[i]-3;
			}
		}
	}
	printf("\nPlain text is : %s\n",c);
	for(i=0;c[i]!=NULL;i++)
		c[i]='\0';
	for(i=0;d[i]!=NULL;i++)
		d[i]='\0';
	l=0;
}
