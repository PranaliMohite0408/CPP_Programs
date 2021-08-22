///Program To Find Power ((No1 ^ No2)^No3)

#include<stdio.h>
#include<conio.h>

long long int Power(  int iNum1 ,  int iNum2)
{
           long long int iPow = 1 ;

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
   int iNo1 = 0 , iNo2 = 0 ,iNo3 = 0 ;
   long long int iRes = 0;

    printf("\n Enter Three Positive Integer Number \n To Find The Power Num1 Raise To Num2 Raise To Num3 = ");
    scanf("%d%d%d",&iNo1 , &iNo2,&iNo3);

    iRes = Power(Power(iNo1,iNo2),iNo3);

    printf("\n %d ^ %d ^ %d = %lld .",iNo1,iNo2,iNo3,iRes);

    getch();
}
