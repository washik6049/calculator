#include<stdio.h>
#include<math.h>

int choice;
int br_point;
FILE *file;
void projectName()
{
    system("cls");
    system("color b1");
    printf("\n\t\t\t\t*******************************************");
    printf("\n\t\t\t\t*******************************************");
    printf("\n\t\t\t\t**                                       **");
    printf("\n\t\t\t\t**         scientific calculator         **");
    printf("\n\t\t\t\t**                                       **");
    printf("\n\t\t\t\t*******************************************");
    printf("\n\t\t\t\t*******************************************\n");
}
void submittedBy()
{
    projectName();
    system("color b1");
    printf("\n\t\t\t    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  ||          Name               |       ID            ||");
    printf("\n\t\t\t  ||***************************************************||");
    printf("\n\t\t\t  ||    1. Pronoy Kumar Mondal   | ID: 212-15-14744    ||");
    printf("\n\t\t\t  ||    2. Washik Wali Faieaz    | ID: 212-15-14763    ||");
    printf("\n\t\t\t  ||    3. Mahadi Hasan Shanu    | ID: 212-15-14752    ||");
    printf("\n\t\t\t  ||    4. Prosenjith Dash Pappu | ID: 212-15-14749    ||");
    printf("\n\t\t\t    =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t    Enter any key to continue.....\n");
    getch();
}

void submittedTo()
{
    projectName();
    system("color b1");
    printf("\n\t\t\t\t   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t ||    Dr. Sheak Rashed Haider Noori    ||");
    printf("\n\t\t\t\t ||*************************************||");
    printf("\n\t\t\t\t ||        Associate Professor          ||");
    printf("\n\t\t\t\t ||                 &                   ||");
    printf("\n\t\t\t\t ||          Associate Head             ||");
    printf("\n\t\t\t\t ||           Dept. of CSE              ||");
    printf("\n\t\t\t\t ||  Daffodil International University  ||");
    printf("\n\t\t\t\t   =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\n\t\t\t\t   Enter any key to continue.....\n");
    getch();
}

void menu()
{
    system("cls");
    projectName();
    system("color b1");
    while(1)
    {

        printf("\n\n\t\t\t\t  Welcome to the scientific calculator!!\n\n");
        printf("\n\n\t\t\t\t ****** Press 0 to quit the program ******\n\n");
        printf("\t\t\t\tEnter 1 for Addition \n");
        printf("\t\t\t\tEnter 2 for Subtraction \n");
        printf("\t\t\t\tEnter 3 for Multiplication \n");
        printf("\t\t\t\tEnter 4 for Division \n");
        printf("\t\t\t\tEnter 5 for Modulus\n");
        printf("\t\t\t\tEnter 6 for Power \n");
        printf("\t\t\t\tEnter 7 for Factorial \n");
        printf("\t\t\t\tEnter 8 for square \n");
        printf("\t\t\t\tEnter 9 for cube \n");
        printf("\t\t\t\tEnter 10 for squareroot\n");
        printf("\t\t\t\tEnter 11 for trigonometry\n");
        printf("\t\t\t\tEnter 12 for 10 base logarithm\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            addition();
        }
        else if(choice==2)
        {
            subtraction();
        }
        else if(choice==3)
        {
            multiplication();
        }

        else if(choice==4)
        {
            division();
        }
        else if(choice==5)
        {
            modulus();
        }
        else if(choice==6)
        {
            power();
        }
        else if(choice==7)
        {
            factorial();
        }

        else if(choice==8)
        {
            square();
        }
        else if(choice==9)
        {
            cube();
        }
        else if(choice==10)
        {
            squareroot();
        }
        else if(choice==11)
        {
            trigonometry();
        }
        else if(choice==12)
        {
            logarithm();
        }
        printf("\n\t\t\t\t.............................\n");
        printf("\t\t\t\t.............................\n");
        printf("\t\t\t\t..\t1. continue        ..\n");
        printf("\t\t\t\t..\t0. exit            ..\n");
        printf("\t\t\t\t.............................\n");
        printf("\t\t\t\t.............................\n");
        scanf("%d",&br_point);
        if(br_point==0)
        {
            break;
        }
        system("cls");
    }
}
void addition()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    printf("Enter the numbers you want to add: ");
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("The sum of the numbers is %lf\n",a+b);
    fprintf(file,"%lf\n",(a+b));
    fclose(file);
}
void subtraction()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    printf("Enter the numbers you want to subtract: ");
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("The subtraction of the numbers is %lf\n",a-b);
    fprintf(file,"%lf\n",(a-b));
    fclose(file);
}
void multiplication()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    printf("Enter the numbers you want to multiply: ");
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("The multiplication of the numbers is %lf\n",a*b);
    fprintf(file,"%lf\n",(a*b));
    fclose(file);
}
void division()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    printf("Enter the numbers you want to divide: ");
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("The division of the numbers is %lf\n",a/b);
    fprintf(file,"%lf\n",(a/b));
    fclose(file);
}
void modulus()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    printf("Enter the numbers you want to find modulus of: ");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("The modulus of the numbers is %d\n",a%b);
    fprintf(file,"%d\n",(a%b));
    fclose(file);
}
void factorial()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    int n,factorial,i;
    printf("Enter the number you want the factorial of: ");
    scanf("%d",&n);
    factorial=1;
    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;
    }
    printf("\nFactorial of %d is %d",n,factorial);
    fprintf(file,"%d\n",factorial);
    fclose(file);
}
void power()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    double b,p,e;
    printf("Enter the base and the power: ");
    scanf("%lf%lf",&b,&p);
    e=pow(b,p);
    printf("The power is %lf",e);
    fprintf(file,"%lf\n",e);
    fclose(file);
}
void square()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    double b,p;
    printf("Enter the number you want the square of: ");
    scanf("%lf",&b);
    p=pow(b,2);
    printf("The square of %lf is %lf",b,p);
    fprintf(file,"%lf\n",p);
    fclose(file);
}
void cube()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    double b,p;
    printf("Enter the number you want the cube of: ");
    scanf("%lf",&b);
    p=pow(b,3);
    printf("The cube of %lf is %lf",b,p);
    fprintf(file,"%lf\n",p);
    fclose(file);
}
void squareroot()
{
    file = fopen("saved value.txt","a");
    system("cls");
    system("color b1");
    double b,s;
    printf("Enter the number you want the square root of : ");
    scanf("%lf",&b);
    s = sqrt(b);
    printf("The square root of %lf is %lf",b,s);
    fprintf(file,"%lf\n",s);
    fclose(file);
}
void trigonometry()
{
    system("cls");
    system("color b1");
    double d,r;
    double PI=3.14159;
    printf("Enter 1 for sin \n");
    printf("Enter 2 for cos \n");
    printf("Enter 3 for tan \n");
    printf("Enter 4 for cosec \n");
    printf("Enter 5 for sec \n");
    printf("Enter 6 for cot \n");
    scanf("%d",&choice);
    system("cls");
    if(choice==1)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("sin(%lf) = %lf \n",d,sin(r));
        fprintf(file,"%lf\n",sin(r));
        fclose(file);
    }
    else if(choice==2)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("cos(%lf) = %lf \n",d,cos(r));
        fprintf(file,"%lf\n",cos(r));
        fclose(file);
    }
    else if(choice==3)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("tan(%lf) = %lf \n",d,tan(r));
        fprintf(file,"%lf\n",tan(r));
        fclose(file);
    }
    else if(choice==4)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("cosec(%lf) = %lf \n",d,1/sin(r));
        fprintf(file,"%lf\n",1/sin(r));
        fclose(file);
    }
    else if(choice==5)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("sec(%lf) = %lf \n",d,1/cos(r));
        fprintf(file,"%lf\n",1/cos(r));
        fclose(file);
    }
    else if(choice==6)
    {
        file = fopen("saved value.txt","a");
        printf("Enter an angle in degree \n");
        scanf("%lf",&d);
        r= (d*(PI/180.0));
        printf("cot(%lf) = %lf \n",d,1/tan(r));
        fprintf(file,"%lf\n",1/tan(r));
        fclose(file);
    }
}
void logarithm()
{
    file = fopen("saved value.txt","a");
    system("cls");
    double a;
    printf("Enter a number \n");
    scanf("%lf",&a);
    printf("log10(%lf) = %lf",a,log10(a));
    fprintf(file,"%lf\n",log10(a));
    fclose(file);

}
int main()
{
    system("cls");
    projectName();
    system("color b1");
    while(1)

    {
        printf("\n\t\t\t\t*******************************************\n");
        printf("\t\t\t\t*******************************************\n");
        printf("\t\t\t\t**\t.....Select your option.....     **\n");
        printf("\t\t\t\t**                               \t **\n");
        printf("\t\t\t\t**\t      1. Submitted By            **\n");
        printf("\t\t\t\t**\t      2. Submitted To            **\n");
        printf("\t\t\t\t**\t      3. Calculator              **\n");
        printf("\t\t\t\t**                          \t         **\n");
        printf("\t\t\t\t**                               \t **\n");
        printf("\t\t\t\t*******************************************\n");
        printf("\t\t\t\t*******************************************\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            submittedBy();
        }
        else if(choice==2)
        {
            submittedTo();
        }
        else if(choice==3)
        {
            menu();
        }
        printf("\n\t\t\t\t.............................\n");
        printf("\t\t\t\t.............................\n");
        printf("\t\t\t\t..\t1. continue        ..\n");
        printf("\t\t\t\t..\t0. exit            ..\n");
        printf("\t\t\t\t.............................\n");
        printf("\t\t\t\t.............................\n");
        scanf("%d",&br_point);
        if(br_point==0)
        {
            break;
        }
        system("cls");
    }
}

