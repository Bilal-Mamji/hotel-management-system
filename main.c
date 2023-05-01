#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>


void add();  //FUNCTIONS
void list();
void edit();  //GLOBALLY DECLARED FUNCTIONS N VARIABLE
void delete1();
void search();



struct CustomerDetails   //STRUCTURE DECLARATION
{
	char roomnumber[10];
	char name[20];
	char address[25];
	char phonenumber[15];
	char type[20];	
	char email[20];
	int period;
	char arrivaldate[10];
	int bill;
}s;

int main()
{
	char choice;
	int i=0;
	printf(" --------------------------------------------------------------------------------\n");
	printf("|                                                                                |\n");      
	printf("|                                                                                |\n");
	printf("|  ******   *****   ******  ******  *******  *******  *      *  ******    *****  |\n");
	printf("|  *        *    *  *       *          *        *     * *    *  *        *       |\n");
	printf("|  *  ***   *****   ****    ****       *        *     *  *   *  *  ***    ****   |\n");
	printf("|  *    *   *  *    *       *          *        *     *   *  *  *    *        *  |\n");
	printf("|  ******   *   *   ******  ******     *     *******  *    * *  ******   *****   |\n");
	printf("|                                                                                |\n");                       
	printf(" --------------------------------------------------------------------------------\n");
 	printf("\t\t*************************************************\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*            ------------------------           *\n");
	printf("\t\t*              WELCOME TO ABC HOTEL             *\n");
	printf("\t\t*            ------------------------           *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                   SAMPLE                      *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*                www.booking.com                *\n");
	printf("\t\t*                                               *\n");
	printf("\t\t*************************************************\n\n\n");
	printf("\n\n                     Press any key to continue");
	getch();
	
	
	system("cls");
	int check;
	printf(" Press\n\n 1. Admin \n 2. User\n\n");
	printf("Enter your choice: ");
	scanf("\n%d",&check);
	
if (check==1)
{	
	int a=0,i=0;
    char uname[10],c=' '; 
    char pword[10],code[10];
    char user[10]="admin";
    char pass[10]="pass";
    do
	{
	system("cls");
    printf("\n  **************************  LOGIN FORM  **************************  ");
    printf("\n\n\n                      ENTER USERNAME:-");
	scanf("%s", &uname); 
	printf("\n\n                      ENTER PASSWORD:-");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13)//we have taken c=13 because it is ascii code of returning the value 
		break;
		
	    else 
		printf("*");
		
	    i++;
	}
	
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword); 
	
	if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
	{
	printf("\n\n\n                  WELCOME !!!! LOGIN IS SUCCESSFUL");
	printf("\n\n                     Press any key to continue");
	getch();
	break;
	}
	else
	{
		printf("\n\n\n               SORRY !!!!  LOGIN IS UNSUCESSFUL");
		a++;
		
		getch();
		
	}
	}
	while(a<=3);
	if (a>3)
	{
		printf("\n\nSorry you have entered the wrong username and password for four times!!!");
		exit(0);
		getch();
		
		}
	
	system("cls");	
	
	while (1)      // INFINITE LOOP
	{
		system("cls");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");

		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n Enter 1 -> View Customer Record");
		printf("\n----------------------------------");
		printf(" \n Enter 2 -> Delete Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 3 -> Search Customer Record");
		printf("\n-----------------------------------");
		printf(" \n Enter 4 -> Exit");
		printf("\n-----------------");
		
		
	//	choice=getche();
	//	choice=toupper(choice);
		
		printf(" \n\n Enter your choice: ");

		scanf("%s",&choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				list();
				break;
			case '2':
				delete1();
				break;
			case '3':
				search();
				break;
			case '4':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				//printf("\n\t FOR TRUSTING OUR SERVICE");
				printf("\n");
				printf("\n");
				printf("\n");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}
	}
}


else if(check==2)
{
	system("cls");
	location();
	
	system("cls");
	while (1)      // INFINITE LOOP
	{
		system("cls");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");
		printf("   ******************************  |MAIN MENU|  ***************************** \n");
		for(i=0;i<80;i++)
		printf("-");
		printf("\n");

		printf("\t\t *Please enter your choice for menu*:");
		printf("\n\n");
		printf(" \n\tBefore Entering a Room Number Verify whether the room is empty through Customer Detail\n\n");
		printf(" \n Enter 1 -> Book a room");
		printf("\n------------------------");
		printf(" \n Enter 2 -> Price List");
		printf("\n------------------------");
		printf(" \n Enter 3 -> Customer Detail");
		printf("\n-----------------------------");
		printf(" \n Enter 4 -> Exit");
		printf("\n-----------------");
		
		//choice=getche();
		//choice=toupper(choice);
		
		printf(" \n\n Enter your choice: ");
		scanf("%s",&choice);
		switch(choice)           // SWITCH STATEMENT
		{	
			case '1':
				add();
				break;	
			case '2':
				system("cls");
				printf("Room Type : \t\t\tDay(1-5)\t\tDay(6-10)\t\tDay(11-20)\t\tDay(21-30)\n");
				for(i=0;i<118;i++)
				printf("-");
				printf("\n\n\nDeluxe\t\t\t\t  8000\t\t\t  15000\t\t\t  20000\t\t\t  25000");
				
				printf("\n\n\nStandard\t\t\t  7000\t\t\t  13500\t\t\t  18000\t\t\t  22000");
				
				printf("\n\n\nDuplex\t\t\t\t  7500\t\t\t  14000\t\t\t  21000\t\t\t  26000");
				
				printf("\n\n\nParlor\t\t\t\t  6000\t\t\t  10000\t\t\t  15000\t\t\t  18000");
				
				getch();
				break;
			case '3':
				search();	
				break;
			case '4':
				system("cls");
				printf("\n\n\t *****THANK YOU*****");
				printf("\n\t FOR TRUSTING OUR SERVICE");
				printf("\n");
				printf("\n");
				printf("\n");
			//	Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\n Press any key to continue");
				getch();
		}

}

}
}



void add()
{
	FILE *f;
	char test;
	f=fopen("add.txt","a+");
	if(f==0)
	{   f=fopen("add.txt","w+");
		system("cls");
		printf("Please hold on while we set our database in your computer!!");
		printf("\n Process completed press any key to continue!! ");
		getch();
	}
	while(1)
	{
		//char ch='deluxe';
		system("cls");
		printf("\n Enter Customer Details:");
		printf("\n**************************");
		printf("\n Enter Room number:\n");
		scanf("\n%s",s.roomnumber);
		fflush(stdin);
		printf("Enter Name:\n");
		scanf("%s",s.name);
		printf("Enter Address:\n");
		scanf("%s",s.address);
		printf("Enter Phone Number:\n");
		scanf("%s",s.phonenumber);
		printf("Enter Room Type:    (deluxe , standard , duplex , parlor)\n");
		scanf("%s",s.type);
		printf("Enter Email:\n");
		scanf(" %s",s.email);
		printf("Enter Period(\'x\'days) :\n");
		scanf("%d",&s.period);
		printf("Enter Arrival date(dd\\mm\\yyyy):\n");
		scanf("%s",&s.arrivaldate);
		fflush(stdin);
		printf("\n\n1 Room is successfully booked!!");
		printf("\n\n\n\t\tBill: ");
		
		if (strcmp(s.type,"deluxe")==0)
	{
	if(s.period<=5)
	{
		s.bill=8000;
		printf("%d",s.bill);
	}
	else if(s.period>5 && s.period<=10)
	{
		s.bill=15000;
		printf("%d",s.bill);
	}
	else if(s.period>10 && s.period<=20)
	{
		s.bill=20000;
		printf("%d",s.bill);
	}
	else if(s.period>20 && s.period<=30)
	{
		s.bill=25000;
		printf("%d",s.bill);
	}
	}	

		else if(strcmp(s.type,"standard")==0)
	{
	if(s.period<=5)
	{
		s.bill=7000;
		printf("%d",s.bill);
	}
	else if(s.period>5 && s.period<=10)
	{
		s.bill=13500;
		printf("%d",s.bill);
	}
	else if(s.period>10 && s.period<=20)
	{
		s.bill=18000;
		printf("%d",s.bill);
	}
	else if(s.period>20 && s.period<=30)
	{
		s.bill=22000;
		printf("%d",s.bill);
	}
	}

		else if(strcmp(s.type,"duplex")==0)
	{
	if(s.period<=5)
	{
		s.bill=7500;
		printf("%d",s.bill);
	}
	else if(s.period>5 && s.period<=10)
	{
		s.bill=14000;
		printf("%d",s.bill);
	}
	else if(s.period>10 && s.period<=20)
	{
		s.bill=21000;
		printf("%d",s.bill);
	}
	else if(s.period>20 && s.period<=30)
	{
		s.bill=26000;
		printf("%d",s.bill);
	}
	}

		else if(strcmp(s.type,"parlor")==0)
	{
	if(s.period<=5)
	{
		s.bill=6000;
		printf("%d",s.bill);
	}
	else if(s.period>5 && s.period<=10)
	{
		s.bill=10000;
		printf("%d",s.bill);
	}
	else if(s.period>10 && s.period<=20)
	{
		s.bill=15000;
		printf("%d",s.bill);
	}
	else if(s.period>20 && s.period<=30)
	{
		s.bill=18000;
		printf("%d",s.bill);
	}
	}
		
		
		fwrite(&s,sizeof(s),1,f);
		printf("\n\n\n Press esc key to exit,  any other key to add another customer detail");//we use esc for back ascii code 27
		test=getche();
		if(test==27)
		
			break;
			
	}
	fclose(f);
}


void list()
{
	FILE *f;
	int i;
	if((f=fopen("add.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("ROOM    ");
	printf("NAME\t ");
	printf("\tADDRESS ");
	printf("\tPHONENUMBER ");
	printf("\tROOM_TYPE ");
	printf("\tEMAIL ");
	printf("\t\t  PERIOD ");
	printf("\t ARRIVALDATE \n");
	
	for(i=0;i<118;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		/*printf("ROOMNUMBER :\t%s\n",s.roomnumber);
		printf("NAME:\t%s\n",,s.name);
		printf("ADDRESS:\t%s\n",s.address);
		printf("PHONENUMBER:\t%s\n",s.phonenumber);
		printf("NATIONALITY \n");*/
		printf("\n%s \t%s \t\t%s \t\t%s \t%s  \t%s  \t  %d  \t\t  %s",s.roomnumber, s.name , s.address , s.phonenumber ,s.type ,s.email,s.period,  s.arrivaldate);
	}
	printf("\n");
	for(i=0;i<118;i++)
		printf("-");

	fclose(f);
	getch();
}


void delete1()
{
	FILE *f,*t;
	int i=1;
	char roomnumber[20];
	if((t=fopen("temp.txt","w"))==NULL)
	exit(0);
	if((f=fopen("add.txt","r"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the Room Number of the hotel to be deleted from the database: \n");
	fflush(stdin);
	scanf("%s",roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0)
		{       i=0;
			continue;
		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       
		printf("\n\n Records of Customer in this  Room number is not found!!");
		//remove("E:/file.txt");
	   //rename("E:/temp.txt","E:/file.txt");
		getch();
		fclose(f);
		fclose(t);
		//system("cls");
		//main();
	}
	else
	{
	fclose(f);
	fclose(t);
	remove("add.txt");
	rename("temp.txt","add.txt");
	printf("\n\nThe Customer is successfully removed....");
	fclose(f);
	fclose(t);
	getch();
	}
}

void search()
{
system("cls");
	FILE *f;
	char roomnumber[20];
	int flag=1;
	f=fopen("add.txt","r+");
	if(f==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number of the customer to search its details: \n");
	scanf("%s", roomnumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.roomnumber,roomnumber)==0){
			flag=0;
			printf("\n\tRecord Found\n ");
			printf("\nRoom Number:\t%s",s.roomnumber);
			printf("\nName:\t%s",s.name);
			printf("\nAddress:\t%s",s.address);
			printf("\nPhone number:\t%s",s.phonenumber);
			printf("\nRoom Type:\t%s",s.type);
			printf("\nEmail:\t%s",s.email);
			printf("\nPeriod:\t%d",s.period);
			printf("\nArrival date:\t%s",s.arrivaldate);
			printf("\nBill:\t%d",s.bill);
			flag=0;
			break;
		}
	}
	if(flag==1){	
		printf("\n\tRequested Customer could not be found!");
	}
	getch();
	fclose(f);
}


location()
{
	system("cls");
	int i;
	char loc[20];
	printf("\t\tATTENTION!!\n\n\tEnter city (in small alphabets)\n\n");
	printf("Enter the location(city) where you want a hotel (room): ");
	scanf("%s",&loc);
		
	
	if (strcmp(loc,"karachi")==0)
	{
		printf("\n\t Hotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"islamabad")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"lahore")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"multan")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"peshawar")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"sukkur")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"hyderabad")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"faisalabad")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"quetta")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"sialkot")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"skardu")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"gwadar")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"larkana")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	else if (strcmp(loc,"swat")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}
	
	else if (strcmp(loc,"sarghoda")==0)
	{
		printf("\n\tHotel Founded");
		printf("\n\n\n\n\t Press any key to continue");
		getch();
	}

	else
	{
		printf("\n\tNo Hotel Founded in the city");
		printf("\n\n\n\tEnter another city");
		getch();
		location();
		//exit(0);
	}
	//getch();
	
}



