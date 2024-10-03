/*
Karthikeya 
3-1-2024
*/
#include<stdio.h>
int main(){
    int qty, opt,bill=0; 
    int item1=0,item2=0 ,item3=0,item4=0,item5=0,item6=0;
    char cho;
    
    printf("Wellcome to La Pargola italiano\n=====================================");   // hotel name
    printf("\n1. Pizza - 300rs\n2. Pasta - 400rs\n3. Rossoto - 300rs\n4. Spaghetti - 600rs\n5. Fettuccine Alfredo - 900rs\n6. Mac n Cheese - 300rs");
    do{printf("\nSelect your option : ");
    scanf("%d",&opt);
        switch(opt){
            case 1:
            printf("Ordered item : Pizza\n");
            printf("Tell us the quantity for Pizza : ");
            scanf("%d", &qty);
            item1+= qty;
            bill += qty * 300;
            break;
            case 2:
            printf("Ordered item : Pasta\n");
            printf("Tell us the quantity for Pasta :  ");
            scanf("%d", &qty);
            item2+= qty;
            bill += qty * 400;
            break;
            case 3:
            printf("Ordered item : Rossoto\n");
            printf("Tell us the quantity for Rossoto :  ");
            scanf("%d", &qty);
            item3+= qty;
            bill += qty * 300;
            break;
            case 4:
            printf("Ordered item : Spaghetti\n");
            printf("Tell us the quantity for Spaghetti:  ");
            scanf("%d", &qty);
            item4+= qty;
            bill += qty * 600;
            break;
            case 5:
            printf("Ordered item : Fettuccine Alfredo\n");
            printf("Tell us the quantity for   Fettuccine Alfredo ");
            scanf("%d", &qty);
            item5+= qty;
            bill += qty * 900;
            break;
            case 6:
            printf("Ordered item : Mac n Cheese\n");
             printf("Tell us the quantity for Mac n Cheese ");
            scanf("%d", &qty);
            item6+= qty;
            bill += qty * 300;
            break;
            default: printf("Enter the item in menu");
            break;
        }
         fflush(stdin);
        printf("\nAdd more to your order?...(Y/N)");
        scanf("%c",&cho);
    }
    while(cho=='y'|| cho=='Y');
    float gst = bill*0.18;
    float t_bill = bill+gst;
    printf("\n-------------------------------------");
    if (item1>0) printf("\nPizza    300x%d : %d/-\n", item1, item1 * 300);
    if (item2>0) printf("\nPasta    400x%d : %d/-\n", item2, item2 * 400);
    if (item3>0) printf("\nRossoto    300x%d : %d/-\n", item3, item3 * 300);
    if (item4>0) printf("\nSpaghetti     600x%d : %d/-\n", item4, item4 * 600);
    if (item5>0) printf("\nFettuccine Alfredo    900x%d : %d/-\n", item5, item5 * 900);
    if (item6>0) printf("\nMac n Cheese    300x%d : %d/-\n", item6, item6 * 300);
    printf("\n-------------------------------------");
    printf("\nSum total            : %d/-\n", bill);
    printf("\nTotal Bill(18 percent gst)                : %.2f/-\n", t_bill);
    printf("\n=========================================");
    printf("\nThank for  your order");
    printf("\nVisit  us again");
}
