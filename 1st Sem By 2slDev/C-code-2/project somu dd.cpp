#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct user
{
    char full_name[30];
    char username[30];
    char password[30];
}a,temp;
struct employee
{
    char name[30];
    char position[30];
    int id;
    int age;
    long int salary;
}b,temp1;
int main()
{
    int ch=0, i=0,x=0;
    char c, password[30],employee_name[30];
    FILE *fp, *fq, *fr;
    start:
    while(1)
    {

        system("cls");
        printf("                _____________WELCOME TO EMPLOYEE MANAGEMENT SYSTEM______________\n");
        printf("                ----------------------------------------------------------------\n");
        printf("                 _______________________________________________________________\n");
        printf("                |---------------------------------------------------------------|\n");
        printf("                |!                          1.LOGIN                            !|\n");
        printf("                |!                                                             !|\n");
        printf("                |!                          2.SIGNIN                           !|\n");
        printf("                |!                                                             !|\n");
        printf("                |!                          3.EXIT                             !|\n");
        printf("                |===============================================================|\n");
        printf("                |_______________________________________________________________|\n");
        printf("\nEnter your choice:");
        rew:
        scanf("%d",&ch);
        switch(ch)
        {
            case 1://LOGIN
               sdf:
               fp=fopen("file1.txt","r+");
               	rewind(fp);
               fflush(stdin);
               printf("\nUsername:");
               gets(a.username);
               printf("\nPassword:");
               while((password[i]=getch())!=13)
                {

                 //   password[i]=c;
                    i++;
                    printf("*");
                }
                password[i]='\0';
                strcpy(a.password,password);
               while(fread(&temp,sizeof(a),1,fp))
               {
                   if((strcmp(a.username,temp.username)==0)&&(strcmp(a.password,temp.password)==0))
                   {
                      goto abc;
                   }
                   /*else
                   {
                       printf("\nWrong Username or Pass. Pls try again.\n");
                       goto sdf;
                   }*/
                }
                printf("\nWrong Username or Pass. Pls try again.\n");
                goto sdf;
                fclose(fp);
            break;

            case 2://SIGNUP
                fp=fopen("file1.txt","w+");
                c='y';
                while(c=='Y'||c=='y')
                {
                    fseek(fp,0,SEEK_END);
                    fflush(stdin);
                    printf("\nEnter your fullname:");
                    gets(a.full_name);
                    printf("\nEnter your username:");
                    gets(a.username);
                    pass:
                    printf("\nEnter your password:");
                    gets(a.password);
                    printf("\nEnter your password again:");
                    gets(password);
                    if(strcmp(password,a.password)==0)
                    {
                        printf("\nSuccesfully created account  ?? ");
                    }
                    else
                    {
                        printf("\nInvalid password type again:");
                        goto pass;
                    }
                    fwrite(&a,sizeof(a),1,fp);
                    fflush(stdin);
                    printf("\nDo you want to make another account?(Y/N):");
                    scanf("%c",&c);
                }
                fclose(fp);
            break;
            case 3:
                exit(0);
            default:
                printf("Wrong Choice enter again:");
                goto rew;
        }
    }
    while(1)
    {
        abc:
        system("cls");
        printf("                WElCOME BACK : ");
        puts(a.username);
        printf("             ______________________________________________________________________\n");
        printf("            |----------------------------------------------------------------------|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     1.Add new employee record:                     !|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     2.Edit current employee record:                !|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     3.List all employee record:                    !|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     4.Delete a employee record:                    !|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     5.Search a employee record:                    !|\n");
        printf("            |!                                                                    !|\n");
	     printf("            |!                     6.Go Back to Main page:                        !|\n");
        printf("            |!                                                                    !|\n");
        printf("            |!                     7.Exit the whole program:                      !|\n");
        printf("            |----------------------------------------------------------------------|\n");
        printf("             ----------------------------------------------------------------------\n");
		printf("Enter your choice:");
        wer:
        scanf("%d",&ch);
        switch(ch)
        {
            case 1://add new employee record
                fq=fopen("file2.txt","a+");
                fseek(fq,0,SEEK_END);
				c='Y';
				while(c=='Y'||c=='y')
				{
				    fflush(stdin);
					printf("\n Enter name:");
					gets(b.name);
					printf("\n Enter position:");
					gets(b.position);
					printf("\n Enter age:");
					scanf("%d",&b.age);
					printf("\n Enter salary:");
					scanf("%ld",&b.salary);
					fwrite(&b,sizeof(b),1,fq);
					printf("\n Add another record (Y/N)");
					fflush(stdin);
					scanf("%c",&c);
				}
				fclose(fq);
                break;

            case 2://edit current employee record
                fq=fopen("file2.txt","r+");
                c='Y';
	        	while(c=='Y'||c=='y')
	        	{
	        	    fflush(stdin);
	        		printf("\n Enter name of employee to modify");
	        		gets(employee_name);
	        		rewind(fq);
	        		while(fread(&temp1,sizeof(b),1,fq)!=NULL)
	        		{
	        			if(strcmp(employee_name,temp1.name)==0)
	        			{
	        			    fflush(stdin);
	        			    printf("\n Enter new name:");
					        gets(b.name);
					        printf("\n Enter new position:");
					        gets(b.position);
					        printf("\n Enter new age:");
					        scanf("%d",&b.age);
					        printf("\n Enter new wage:");
					        scanf("%ld",&b.salary);
	        				fseek(fq,-sizeof(b),SEEK_CUR);
	        				fwrite(&b,sizeof(b),1,fq);
	        				break;
						}
					}
					printf("\n Modify another record (Y/N)");
					fflush(stdin);
					scanf("%c",&c);
		      	}
		      	fclose(fq);
                break;

            case 3://list out all the records
                system("cls");
                fq=fopen("file2.txt","r+");
				rewind(fq);
				printf("\t\t\t\tListing all the employee details:\n\t\t\t\t____________________________\n\n\n");
	        	while(fread(&temp1,sizeof(b),1,fq)!=NULL)
	        	{
	        		printf("Employee Name    : ");
	        		puts(temp1.name);
	        		printf("Employee Position: ");
	        		puts(temp1.position);
	        		printf("Age              : ");
	        		printf("%d\n",temp1.age);
	        		printf("Salary           : ");
	        		printf("%ld\n",temp1.salary);
	        		printf("-----------------------------------\n");
	           }
	           fflush(stdin);
	           printf("\nDo you want to go back?:(Y/N):");
	           scanf("%c",&c);
	           if(c=='y'||c=='Y')
	           {
	               goto abc;
               }
               fclose(fq);
                break;

            case 4://delete a record
				fq=fopen("file2.txt","r+");
				c='Y';
				while(c=='Y'||c=='y')
				{
					fflush(stdin);
					printf("\nEnter the name of the employee you want to delete: ");
					gets(employee_name);
					fr=fopen("temp.txt","w+");
					rewind(fq);
					while(fread(&temp1,sizeof(b),1,fq)!=NULL)
	        		{
	        			//printf("%ld",strcmp(temp1.name,employee_name));
	        			if(strcmp(temp1.name,employee_name)!=0)
	        			{
	        				fwrite(&temp1,sizeof(temp1),1,fr);
						}
					}
					fclose(fq);
					fclose(fr);
					x=remove("file2.txt");
					printf("%d",x);
					i=0;
					i=rename("temp.txt","file2.txt");
					printf("%d",i);
					//fr=fopen("temp.txt","w+");
					fq=fopen("file2.txt","r+");
					//fq=fopen("file2.txt","r+");
					printf("\n Search another employee record?(Y/N): ");
					fflush(stdin);
					scanf("%c",&c);
				}
				fclose(fq);
				break;

            case 5://search a employee record.
                fq=fopen("file2.txt","r+");
                c='Y';
	        	while(c=='Y'||c=='y')
	        	{
	        		fflush(stdin);
	        		printf("\n Enter name of employee to search");
	        		gets(employee_name);
	        		rewind(fq);
	        		while(fread(&temp1,sizeof(b),1,fq)!=NULL)
	        		{
	        			if(strcmp(employee_name,temp1.name)==0)
	        			{
	        			    puts(temp1.name);
	        	          	puts(temp1.position);
	        	          	printf("%d\n%ld\n",temp1.age,temp1.salary);
	        				break;
						}
					}
					printf("\n Search another employee record?(Y/N): ");
					fflush(stdin);
					scanf("%c",&c);
			    }
			    fclose(fq);
                break;

            case 6://go back to main page.
                goto start;
                break;

            case 7://exit(0)
                exit(0);
                break;

            default://let them enter again
                printf("Wrong Choice enter again:");
                goto wer;
                break;
        }
    }
    return 0;
}

