#include<stdio.h>
int main(){
	int elements,temp;
	printf("Enter the number of elements to the array : ");
	scanf("%d",&elements);
	int x[elements];
	printf("Enter the %d elements to the array.",elements);
	for(int i=0;i<elements;i++){
		printf("\n(%d) : ",(i+1));
		scanf("%d",&x[i]);
	}
	printf("\nNone sorted array elements are \t:");
	for(int i=0;i<elements;i++){
		printf("%d\t",x[i]);
	}
	printf("\nEnter the value to search :");
	int value;
	scanf("%d",&value);
	 

	int found=0;
	int elementNo=0;
	for(int i=0;i<elements;i++){
		if(value==x[i]){
			found=1;
			elementNo=i;
			break;
		}
	}
	if(found==1)
		printf("The value %d is in the arrya at index %d",value,elementNo);
	else
		printf("The value %d is not in the array",value);

	printf("\n");
}
