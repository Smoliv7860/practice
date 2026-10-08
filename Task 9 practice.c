#include <stdio.h>
int main()
{
    int stock_count[10];
    int i,cnt,found=-1;
     for(i=0;i<10;i++){
        printf("Enter the stock count for shelf  %d:",i+1);
        scanf("%d",&stock_count[i]);
     }

     //printing in reverse order
     printf("\nSHELF  |   STOCK");
     for(i=9;i>=0;i--){
        printf(" %d\t:",i+1);
        printf("\t%d\n",stock_count[i]);
     }

     //finding the shelf
     printf("\nEnter the stock count : ");
     scanf("%d",&cnt); 
     for(i=0;i<10;i++){
        if(cnt==stock_count[i]){
            found=i;
        break;
		}
     }
     if(found!=-1){
     	printf("\nThe stock count %d is at shelf %d",cnt,found+1);
	 }else{
	 	printf("\nThe stock count doesnt exist");
	 }
return 0;
}
