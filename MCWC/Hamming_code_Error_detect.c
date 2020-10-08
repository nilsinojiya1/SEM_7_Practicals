#include<stdio.h>
#include<math.h>
void main()
{
    int dataword[5][4],i,j,k,o,count[4],min;
    for(i=0;i<5;i++)
    {
        printf("Enter the dataword:\n");
        for(j=0;j<4;j++)
        {
            scanf("%d",&dataword[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        min=4;
        for(j=i+1;j<5;j++)
        {
            count[i]=0;
            for(k=0;k<4;k++)
            {
                o=pow(dataword[i][k],dataword[j][k]);
                if(o==1)
                {
                    count[i]++;
                }
           }
            if(min>=count[i])
            {
                min=count[i];
            }
        }
        printf("The minimal hamming distance is %d\n",min);


    }

}
