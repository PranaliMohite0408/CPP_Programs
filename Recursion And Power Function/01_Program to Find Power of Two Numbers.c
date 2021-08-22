/// Program To Find Power No1 To No2

#include<stdio.h>
#include<conio.h>

int Power(int iNum1 , int iNum2)
{
            int iPow = 1 ;

            if(iNum1 == 0)
            {
                iPow = 0 ;
            }
            else if((iNum1 == 1) || (iNum2 == 0))
            {
                iPow = 1;
            }
            else if(iNum2 == 1)
            {
                iPow = iNum1;
            }
            else
            {
                    while(iNum2 > 0)
                    {
                        iPow *= iNum1;
                        iNum2--;
                    }
            }
            return iPow;
}

int main()
{
    int iNo1 = 0 , iNo2 = 0 , iRes = 0;

    printf("\n Enter Two Positive Integer Number \n To Find The Power Num1 Raise To Num2 = ");
    scanf("%d%d",&iNo1 , &iNo2);

    iRes = Power(iNo1,iNo2);

    printf("\n %d ^ %d = %d .",iNo1,iNo2,iRes);

    getch();
}
