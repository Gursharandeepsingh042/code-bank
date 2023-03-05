#include<stdio.h>
int main(){
    char  name;
    float units, consumerid, totalamount;
    consumerid= 1234;
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
    printf(" enter the consumer id:");
    scanf("%f", &consumerid);
    if(consumerid!=1234)
        {printf("PLEASE ENTER A VALID CONSUMER ID\n");
         printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$");
        printf(" \nPLEASE RETRY!!!\n");}
        else
       {printf(" NAME: SHAMLAAL \n CONSUMER ID: 1234 \n ");
        printf("Enter the monthly unit increment:");
        scanf("%f", &units);}
            if(units>=199 & units<400)
            {totalamount= units*1.20;
            printf("TOTAL AMOUNT PAYABLE FOR THIS MONTH IS : %f RS", totalamount);}
            else if (units>=400 & units<600)
            {totalamount= units*1.50;
            printf(" TOTAL AMOUNT PAYABLE FOR THIS MONTH IS: %f RS", totalamount);}
            else if (units>=600)
            {totalamount= units*2.0;
            printf(" TOTAL PAYABLE AMOUNT FOR THIS MONTH; %f RS", totalamount);}

return 0;
}
