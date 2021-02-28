#include<stdio.h>
#include<windows.h>
void SetColorAndBackground(int ForgC,int BackC);



int main()
{


int i,month,d,dayInMonth,startingDay,weekDay=0,diff,day,year;
 int a[20];
int t[]={0,3,0,3,2,3,2,3,3,2,3,2};

char *months[]={"January","February","march","April","May","June","July","August","October","September","October","November","December"};
int Monthdays[]={31,28,31,30,31,30,31,31,30,31,30,31};


printf("enter month,year in the format mm-yyyy");
scanf("%d%d",&month,&year);

    day = (((year - 1) * 365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year) / 400) + 1) % 7;


if((year%4==0&&year%100!=0)||(year%400==0))
{
    Monthdays[1]=29;
}
if(year==2000)
    {
   startingDay=day+6;
    }
else
    {
startingDay=day;
    }
dayInMonth=Monthdays[month-1];
SetColorAndBackground(15,13);
printf("\t\t%s %d\t\t\n",months[month-1],year);
SetColorAndBackground(15,0);
printf("-----------------------------------------------------\n");
SetColorAndBackground(12,0);
printf("\n  SUN");
SetColorAndBackground(15,0);
 printf("   MON  TUE  WED  THURS  FRI  SAT\n");
printf("-----------------------------------------------------\n");

for(i=0;i<12;i++)
{
 if((Monthdays[i-1]==29)&&(startingDay<=6))
{
    startingDay=startingDay+1;
}
else if(startingDay<=6)
{
    startingDay=startingDay+t[i];

}

     if(startingDay>6)
    {
    diff=startingDay-6;
    startingDay=0;
    startingDay=startingDay+diff-1;
    }

a[i]=startingDay;
}

switch(month)
{
case 1:

       for(weekDay=0;weekDay<a[0];weekDay++)
       {

           printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

        if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }

            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }
        }

break;


case 2:

  for(weekDay=0;weekDay<a[1];weekDay++)
        {
           printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {
            if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }

            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }

 break;


case 3:
   for(weekDay=0;weekDay<a[2];weekDay++)
        {
         printf("    -");
        }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
 break;
case 4:

  for(weekDay=0;weekDay<a[3];weekDay++)
        {
         printf("    -");
        }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
 break;
case 5:
     for(weekDay=0;weekDay<a[4];weekDay++)
        {
          printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 6:
     for(weekDay=0;weekDay<a[5];weekDay++)
        {
    printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

            if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 7:
     for(weekDay=0;weekDay<a[6];weekDay++)
        {
           printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

            if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;

case 8:
    for(weekDay=0;weekDay<a[7];weekDay++)
        {
          printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 9:
    for(weekDay=0;weekDay<a[8];weekDay++)
        {
           printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 10:
    for(weekDay=0;weekDay<a[9];weekDay++)
        {
          printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 11:
    for(weekDay=0;weekDay<a[10];weekDay++)
        {
           printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

             if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
case 12:
    for(weekDay=0;weekDay<a[11];weekDay++)
        {
         printf("    -");
       }

         for(d=1;d<=Monthdays[month-1];d++)
        {

 if(weekDay==0)
        {
         SetColorAndBackground(12,0);
          printf("%5d",d);

        }
     else
    {
        SetColorAndBackground(15,0);
        printf("%5d",d);
    }
            if(++weekDay>6)
            {
                printf("\n");
                weekDay=0;
            }

        }
    break;
}

return 0;
}
void SetColorAndBackground(int ForgC,int BackC)
   {
       WORD wColor=((BackC & 0x0F)<<4)+(ForgC & 0x0F);
       SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),wColor);
       return;
   }




