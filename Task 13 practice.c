#include <stdio.h>
int main()
{
	int codes[10];
	int l_shift[10],r_shift[10];
	int i,highest,accepted,flagged;
	//taking the codes as input
	printf("Enter the access codes for 10 employees (each code must be between 1 and 255): ");
	for(i=0;i<10;i++){
		scanf("%d",&codes[i]);
	}
	//left and right shifting 
	for(i=0;i<10;i++){
		l_shift[i]=codes[i]<<2;
		r_shift[i]=codes[i]>>1;
	}
	highest=codes[0];
	//displaying
	printf("\n    Employees\t| Orignal Codes\t|L-shift Value  |R-shift Value  |   Status\n");
	for(i=0;i<10;i++){
		printf("\t%d\t|\t%d\t|\t%d\t|\t%d\t",i+1,codes[i],l_shift[i],r_shift[i]);
		
		//classification
		if(l_shift[i]>100&&r_shift[i]%2==0){
			printf("|  Accepted\n");
			accepted++;
		}else{
			printf("|  Flagged\n");
			flagged++;
		}
		//highest code
		if(codes[i]>highest){
			highest=codes[i];
		}
	}
	printf("\n Accepted codes : %d",accepted);
	printf("\n Flagged codes : %d",flagged);
	printf("\n Highest code : %d\n",highest);
	//codes with right shift > 20
	for(i=0;i<10;i++){
		if(r_shift[i]>20){
			printf("Employee %d : %d\n",i+1,codes[i]);
		}
	}
return 0;	
}
