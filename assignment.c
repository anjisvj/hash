/******************************************************************************


*******************************************************************************/

#include <stdio.h>

void averageSales(float QuarterSales[3]) {
    float floatAverage = (QuarterSales[0] + QuarterSales[1] + QuarterSales[2]) / 3;
    printf("%f", floatAverage);
}


float maximumSalesQuarter(float yearSales[4]) {
    int maxSalesQuarter = 1;
    
    return 1;
}

int main()
{
    float floatYearSales[4][3] = {{3.8,3.8,4.3},{3.7,4.1,3.9},{3.3,4.0,4.1},{3.9,3.9,4.2}};
    
    int intQaurter = 0;
    int intYear = 0;
    printf("Enter a quarter for get the average\n");
    scanf("%d", &intQaurter);
    
    averageSales(floatYearSales[intQaurter - 1]);

    printf("Enter the year for get the maximum sales\n");
    scanf("%d", &intYear);
    
    
    switch(intYear) {
        case 2015:
            
    }
    
    for (size_t i = 0; i < length; i++)
    {
      
    }
    
    
    return 0;
}
