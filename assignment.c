#include <stdio.h>
#include <stdlib.h>

/*-----------------------------------------------
Author: Anjula Samarasinghe
Index No: AS2020901
Title: Assignment 3
------------------------------------------------*/


//Initialize constant variables
const int intNumOfQuarters = 4;
const int intNumberOfYears = 3;
const int intInitialYear = 2015;

//Initializing Main Array
float fltQuarter[4][3] =
{
  {3.8, 3.8, 4.3},
  {3.7, 4.1, 3.9},
  {3.3, 4.0, 4.1},
  {3.9, 3.9, 4.2}
};

/*-----------------------------------------------
[Start] Function Declaration block
------------------------------------------------*/
//Declare function for Average sales of the given quarter in the period 2015 to 2017
void AverageSalesOfTheQuarter(float fltQuaterSales[intNumberOfYears]);

//Declare function for Find the quarter of the maximum sales in the given year
void FindMaxSalesQuarter(int intYear1);

//Declare function for Count number of low sales month in the given year
void CountLawSalesMonth(int intYear2);
/*-----------------------------------------------
[End] Function Declaration block
------------------------------------------------*/

int main()
{
    int intQuarter = 0;
    int intMaxSalesYear = 0;
    int intLowSalesYear = 0;

    printf("Enter the Quarter for print average sales : ");
    scanf("%d", &intQuarter);
    AverageSalesOfTheQuarter(fltQuarter[intQuarter]);

    printf("Enter the Year you want to print Maximum sales quarter : ");
    scanf("%d", &intMaxSalesYear);
    FindMaxSalesQuarter(intMaxSalesYear);

    printf("Enter the Year for print count of low sales months : ");
    scanf("%d", &intLowSalesYear);
    CountLawSalesMonth(intLowSalesYear);

    return 0;
}

/*-----------------------------------------------
[Begin] Function: "AverageSalesOfTheQuarter"
-------------------------------------------------
Precondition: pass the quarter
Post condition: print average sales
Description: print average sales
------------------------------------------------*/
void AverageSalesOfTheQuarter(float fltQuaterSales[intNumberOfYears])
{
    float fltSum = 0.0;
    float fltAVG = 0.0;

    for(int i = 0; i < intNumberOfYears; i++)
    {
        fltSum += fltQuaterSales[i];
    }

    fltAVG = fltSum/3.0;

    printf("Average sales of the quarter %.2f \n", fltAVG);
}
/*-----------------------------------------------
[End] Function: "AverageSalesOfTheQuarter"
------------------------------------------------*/

/*-----------------------------------------------
[Begin] Function: "FindMaxSalesQuarter"
-------------------------------------------------
Precondition: pass year
Post condition: print Maximum sales quarter in given year
Description: print Maximum sales quarter in given year
------------------------------------------------*/
void FindMaxSalesQuarter(int intYear1)
{
    int intColumnIndex = 0;
    int intMaxQuarter = 0;
    float fltMaxNumber = 0.0;

    if(intYear1 == intInitialYear+1)
        intColumnIndex = intColumnIndex+1;
    else if(intYear1 == intInitialYear+2)
        intColumnIndex = intColumnIndex+2;

    for(int i = 0; i < intNumOfQuarters; i++)
    {
        if(fltQuarter[i][intColumnIndex] > fltMaxNumber)
        {
            fltMaxNumber = fltQuarter[i][intColumnIndex];
            intMaxQuarter = i+1;
        }
    }

    printf("maximum sales quarter in %d : Quarter %d \n", intYear1, intMaxQuarter);
}
/*-----------------------------------------------
[End] Function: "FindMaxSalesQuarter"
------------------------------------------------*/

/*-----------------------------------------------
[Begin] Function: "CountLawSalesMonth"
-------------------------------------------------
Precondition: pass year
Post condition: print count of low sales months in given year
Description: print count of low sales months in given year
------------------------------------------------*/
void CountLawSalesMonth(int intYear2)
{
    int intColumnIndex = 0;
    int intCount = 0;
        
    switch(intYear2) {
        case 2016:
            intColumnIndex = intColumnIndex+1;
            break;
        case 2017:
            intColumnIndex = intColumnIndex+2;
            break; 
        default:
            break;
        
    }

    for(int i = 0; i < intNumOfQuarters; i++)
    {
        if(fltQuarter[i][intColumnIndex] < 4.0)
        {
            intCount += 1;
        }
    }

    printf("Number of low sales months in %d : %d", intYear2, intCount);
}
/*-----------------------------------------------
[End] Function: "CountLawSalesMonth"
------------------------------------------------*/
