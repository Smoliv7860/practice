#include<stdio.h>
int main(){
    int temp[8];
    printf("Enter the temperature in Celsius: ");
    for (int i = 0; i <8; i++)
    {
        scanf("%d", &temp[i]);
    }
    int hottest=temp[0];
    for(int i=0; i<8; i++)
    {
        if (temp[i]>hottest)
        {
            hottest=temp[i];
        }
    }
    int coldest = temp[0];
    for (int i = 0; i < 8; i++)
    {
        if (temp[i]<coldest)
        {
            coldest = temp[i];
        }
        
    }
    int second_hottest=-99999999;
    for (int i = 0; i < 8; i++)
    {
         if (temp[i] < hottest && temp[i] > second_hottest)
        {
            second_hottest = temp[i];
        }
    }
    printf("\n Hottest temperature is : %d" , hottest);
    printf("\n coldest temperature is : %d" , coldest);
    printf("\n Second Hottest temperature is : %d" , second_hottest);
return 0;
}
