#include <stdio.h>
#include <string.h> // for entering the data of employ in string through array
#include <time.h>  // for genrating random number for id no.
#include <stdlib.h> // random number function inside these header file
#include <conio.h>
struct id_Card
{
    int Name[69];  // saved the extra space which was used by array
    int company[100];
    int location[100];

};struct id_Card e1;


int main()
{   int i=0,id[10];
    printf("\t****id Card genrator by using c programming****\n");
    
    // employe 1 data
    printf("\tEnter the information of employe 1 \n");
    printf("\t Enter the name \n");
    scanf("%s",&e1.Name);
    printf("\tEnter the company Name of employe\n");
    scanf("%s",&e1.company);
    printf("\tEnter the location or present adress of employe\n");
    scanf("%s",&e1.location);

     
    printf("********  Genrating id card*** please wait ********* \n\n");
    printf("\tEmploye data 1")
    printf("\t Name   = %s\n",e1.Name);
    printf("\t Company Name = %s\n",e1.company);
    printf("\t Loaction = %s\n",e1.location);
  for (int i = 0; i <10; i++)
  {
     
     srand(time(NULL));
     id[i]= rand()%10;
    i++;  
  
     
  }
  
  printf("\t EMploy id = ");
  for (int i = 0; i <10; i++)
  {
     printf("%d",id[i]);
    i++;  
  }
    
   

    return 0;
}

