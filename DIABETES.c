#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

struct  person
{
int personid;
int age;
char nm[20];
char gender[20];
long phone;
//char a[3];
}s1;

void addperson()
{
FILE *fp;
fp=fopen("person.dat","ab");
printf("\nEnter unique ID in range 1000-9999\n");
scanf("%d",&s1.personid);
printf("\nenter your age\n");
scanf("%d",&s1.age);
d:fflush(stdin);
printf("\nenter your name\n");
gets(s1.nm);
fflush(stdin);
printf("\nenter your gender\n");
gets(s1.gender);
fflush(stdin);
printf("\nenter your phone number\n");
scanf("%ld",&s1.phone);
fwrite(&s1,sizeof(s1),1,fp);
fclose(fp);
}

void showperson()
{
FILE *fp;
fp=fopen("person.dat","rb");
printf("\nThese are the details\n");
while(fread(&s1,sizeof(s1),1,fp))
{
printf("\ndetails of person are\n");
printf("\nPerson id:%d\nAge :%d\nGender:%s\nName:%s\nPhone:%ld\n",s1.personid,s1.age,s1.gender,s1.nm,s1.phone);
}

fclose(fp);
}

void addsymptomps()
{
FILE *fp;
fp=fopen("symptoms.dat","ab");


printf("\n instabatial hunger\n");
printf("\n fatigue\n");
printf("\n black patches on skin\n");
printf("\n fatigue\n");
printf("\nabrupt weight loss\n");
printf("\nunhealed wounds\n");
printf("\nexcessive sweating\n");
printf("\nfrequent urination\n");
printf("\nblurry vision\n");
fwrite(&s1,sizeof(s1),1,fp);
  fclose(fp); 
}


  void detectDiabetes()
  {
	char a[4];
int sym=0;
  FILE *fp;
  fp=fopen("symptoms.dat","rb");
fflush(stdin);
  printf("\nDo you feel excessive thirst\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)
  {
	sym++;
	} 

  printf("\nlets check next symptom\n\t");
	
  printf("\nDo you feel instabatial hunger\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)

  {     sym++;
         }
	printf("\nlets check next symptom\n");
  
  printf("\nDo you have black patches on skin\n");
  printf("yes or no\t");
  gets(a);
  if (strcmpi(a,"yes")==0)
  {       sym++;
        }
	printf("\nlets check next symptom\n");
	
  printf("\nDo you feel fatigue\n");
  printf("yes or no\t");
  gets(a);
  if (strcmpi(a,"yes")==0)
  { sym++;
      }
	printf("\nlets check next symptom\n");
	
  printf("\nDo you feel abrupt weight loss\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)
  {	sym++;
        }
	printf("\nlets check next symptom\n");
	
  printf("\nDo you have unhealed wounds\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)
  {	sym++;
        }
	printf("\nlets check next symptom\n"); 
	
  printf("\nDo you feel excessive sweating\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)
  {   sym++;
          }
	printf("\nlets check next symptom\n");
	
  printf("\nDo you feel frequent urination\n");
  printf("yes or no\t");
  gets(a);
  if(strcmpi(a,"yes")==0)
 { sym++;
       }
	printf("\nlets check next symptom\n");
	
   printf("\nDo you have blurry vision\n");
   printf("yes or no\t");
   gets(a);
   if(strcmpi(a,"yes")==0)
   { sym++;
          }
	printf("\nall done lets see result\n");
	
    //fclose(fp);

	if(sym>=5)
	{

		printf("You have high chances of diabetes..");
		printf("\n\nGo for testing\nFasting\tPP\nAll the best...");
	}
	else
	{
		printf("Chances of diabetes is very less...");
		printf("\nTake care and enjoy...");
	}

	}


    void showresult()
	{
    if("symptoms>5")
    {
	printf("you have diabetes");
	}
	}

      int main()
     {

	int ch;

	do
	{
		printf("\nWhat you want to do\n1.add Person\n2.Show person\n3.Add Symptomps\n4.Detect Diabetes\n5.exit\nEnter your choice");
	scanf("%d",&ch);

	if(ch==1)
	{
		addperson();
	}
	else if(ch==2)
	{
		showperson();
	}
	else if(ch==3)
	{
		addsymptomps();
	}
	else if(ch==4)
		{
			detectDiabetes();
		}
	else if(ch==5)
	{

		printf("Thanks for visiting...");
		break;
	}
	}while(ch!=5);
     
	return 0;
	}

     /*symptoms();
     showsymptom();
     showresult():}*/



