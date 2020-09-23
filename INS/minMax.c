#include <stdio.h>
int Maximum_Value( double MinMaxArray[], int num_elements)
// This function will calculate and show the maximum value from the array
{
   int i, max=-32000;
   for (i=0; i<num_elements; i++)
   {
     if (MinMaxArray[i]>max)
     {
        max=MinMaxArray[i];
     }
   }
   return(max);
}
int MinValue( double MinMaxArray[], int num_elements)
// This function will calculate and show the minimum value from the array
{
    int i, min=0;
    for (i=0; i<num_elements; i++)
    {
       if (i==0)
            min=MinMaxArray[i];
    else
        if (MinMaxArray[i]<min)
            min=MinMaxArray[i];
    }
    return(min);
}
    double averageX(double MinMaxArray[], int num_elements)
 //This function will calculate and show the average value from the array, and the number of values that are
    // larger then the average
    {
        float average;
        int i, sum=0, valuesAboveAverage=0;
            for (i=0; i<num_elements; i++)
            {
                sum+=MinMaxArray[i];
                average=sum/num_elements;
                if (MinMaxArray[i]>average)
                    valuesAboveAverage++;
            }
            printf(" Values above the average are: %d\n", valuesAboveAverage);
            printf("Average: %f\n", average);
            return(average);
    }
    void norm_1D(int min, int max, int average, double MinMaxArray[], int num_elements)
 // This function will calculate and show the normalized values of the original
 // array values
    {
        int i;
        double normalizedVal[4];
        for (i=1; i<num_elements; i++)
        {
                normalizedVal[i]=(MinMaxArray[i]-min) / (max-min);
        }
        for (i=0; i<10; i++)
        printf("Normalized Values are ? %5.2f\n", normalizedVal[i]);
    }
int main(void)
{
   double  MinMaxArray[4] = {45, 36, 17, 87};
   int max, min;
   double average;
   max = Maximum_Value(MinMaxArray, 4);
   min = MinValue(MinMaxArray, 4);
   average = averageX(MinMaxArray, 4);
   norm_1D(min, max, average, MinMaxArray, 4);
   printf("The min value is %d\n", min);
   printf("The max value is %d\n", max);
    return(0);
}
