#ifndef _OTHER_
#define _OTHER_

#include"Header.h"

COORD coord = {0,0}; //set coordinates
COORD max_res, cursor_size;
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while(goal > clock());
}


void PASSWORD(int choice) //password function
{
    system("color a");
    system("cls");

    char c[19]="Password Protected";
    char ch, pass[20];
    int i=0;
    int j;

    gotoxy(10,4);

    for(j=0; j<20; j++)
    {
        delay(50);
        printf("\xB2");
    }
    for(j=0; j<18; j++)
    {
        delay(50);
        printf("%c", c[j]);
    }
    for(j=0; j<20; j++)
    {
        delay(50);
        printf("\xB2");
    }

    gotoxy(15,7);
    printf("Enter Password:");

    while(ch!=13)
    {
        ch=getch();

        if(ch!=13 && ch!=8) //ASCII code 13=return carriage, 8=backspace
        {
            putch('*');
            pass[i] = ch;
            i++;
        }
    }
    pass[i] = '\0';

    if(choice == 1)
    {
        if(strcmp(pass, passwordadmin)==0)
        {
        gotoxy(15,9);
        printf("Password Match");
        gotoxy(15,10);
        printf("Press Any Key to Continue.........");
        getch();
        adminmenu();
        }

        else
        {
            gotoxy(15,16);
            printf("Warning! Incorrect Password!!");
            printf("\a"); //bell sound
            getch();
            Username();
        }
    }
        else
        {
            gotoxy(15,16);
            printf("Warning! Incorrect Password!!");
            printf("\a"); //bell sound
            getch();
            Username();
        }
    }

 //set coordinates
//COORD max_res, cursor_size;
//COORD coord = {0,0}; //set coordinates
//COORD max_res, cursor_size;




void Username()
{
    system("cls");
    gotoxy(40,5);
    printf("welcome to Bangladesh Parliament.");
    system("COLOR 0B");
    gotoxy(20,12);
    printf("Enter user choice: ");
    gotoxy(42,12);
    printf("1.Admin");
    gotoxy(42,13);

    printf("2.Public");

    gotoxy(20,16);
    printf("Your choice: ");

    int choice;
    gotoxy(32,16);
    scanf("%d", &choice);

    if(choice > 3 || choice < 1){
        gotoxy(32, 22);
        printf("Choice Invalid");
        getch();
        system("cls");
        Username();
    }
    if(choice == 2)
    {
        publicmenu();
        //PASSWORD(choice);
    }


   gotoxy(12,12);
   if(choice==1)
   {
       printf("Enter password for admin:");
       PASSWORD(choice);
   }

}

void adminmenu()
{
    system("cls");

    gotoxy(40,5);
    printf("1. History");

    gotoxy(40,6);
    printf("2. Member");

    gotoxy(40,7);
    printf("3. Total Info");

    gotoxy(40,8);
    printf("4. Exit");

    gotoxy(38,10);
    printf("Enter you choice: ");

    int admin_menu_choice;
    scanf("%d", &admin_menu_choice);

    switch(admin_menu_choice)
    {
    case 1:
        Historyedit();
        //FILE* fp=fopen("history","r+");


        break;

    case 2:
        Memberedit();
        break;

    case 3:

        printf("\tTotal Information\n");
        FILE* fp=fopen("parliament.txt","r+");
        file(fp,4);//the number of readings
        fclose(fp);
        break;

    case 4:
        exit(0);
        break;

    default:
        gotoxy(38,10);
        printf("Invalid Choice!!");
        gotoxy(38,11);
        printf("Press any key to continue.");
        getch();
        adminmenu();
    }
}

void Historyedit()
{
        system("cls");
        gotoxy(10,6);
    printf(" The Constituent Assembly of bangladesh and the first parliament held their sittings in the building \n that now houses the Prime Minister's Office.The second Parliament also held most of its sittings in that building, \n the last sitting being on 10 July 1981. Its eight and incidently the last session commenced on 15 February 1982 \n in the new building.The design of the Parliament Building made by the famous architect Professirs Louis I.Khan, \n was evolved from the basic human requierment of protection from the glare and fury of nature.The entire complex \n has a floor area of 8,23000 sq.ft in the main building , 223000 sq.ft. in the south Plaza and 65000 sq. ft. \n in the Presidential Plaza.");
}
void Memberedit()
{
    system("cls");

    gotoxy(40,5);
    printf("1. Name");

    gotoxy(40,6);
    printf("2. Salary");

    gotoxy(40,7);
    printf("3. Position");

    gotoxy(40,8);
    printf("4. Team");

    //gotoxy(40,9);
    //printf("5. Info Edit");

    gotoxy(40,9);
    printf("5. Return to Admin Menu");

    gotoxy(40,10);
    printf("6. Exit from Programme");


    int choice;
    gotoxy(40,14);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        system("cls");
       gotoxy(0,5);

        printf("\t1. Md. Ashadujjaman Nur\n");
        printf("\t2. Mr. Hossain Mohammad Arshad\n");
        printf("\t3. Shirin sharmin Chowdhury\n");
        printf("\t4. Tarana Halim\n");
        printf("\t5. Md. Fajle Rabbi Mia\n");
        printf("\t6. Shekh Hasina\n");
        printf("\t7. Abul Mal Abdul Muhit\n");
        printf("\t8. Rowshon Arshad\n");
        printf("\t9. Md. Hasanul Haque ENu\n");
        printf("\t10. Md. Mahbubul Alam Hanif\n");
        break;

    case 2:
        system("cls");
        gotoxy(0,5);
        printf("\t1.74000\n \t2.74000\n \t3.74000\n \t4.74000\n \t5.74000\n \t6.149440\n \t7.96375\n \t8.74000\n \t9.96375\n \t10.96375\n");
        break;

    case 3:
        system("cls");
        gotoxy(0,5);
        printf("\t1. 13\n \t2. 21\n \t3. 24\n \t4. 316\n \t5.33\n \t6. 217\n \t7. 229\n  \t8. 149\n \t9. 76\n \t10. 77\n");
        break;

    case 4:
        system("cls");
        gotoxy(0,5);
        printf("\t1.Bangladesh Aawamileague \n \t2.National party\n \t3.Bangladesh Aawamileague  \n \t4. Bangladesh Aawamileague \n \t5.Bangladesh Aawamileague \n \t6. Bangladesh Aawamileague \n \t7. Bangladesh Aawamileague \n  \t8. National party\n \t9. Bangladesh Aawamileague \n \t10. Bangladesh Aawamileague \n");
        break;

    //case 5:
      //  Infoedit();
        //break;

    case 5:
        adminmenu();
        break;

    case 6:
        exit(0);
        break;

    default:
        gotoxy(40,15);
        printf("Invalid Choice!!");
        gotoxy(40,16);
        printf("Press any key to continue....");
        getch();
        Memberedit();
    }
}
void Infoedit()
{
    system("cls");
    printf("Total Info");
}



void Salaryedit()
{
    printf("Salaryedit");
}
void Nameedit()
{
    printf("Nameedit");
}
void Positionedit()
{
    printf("Positionedit");
}
void Teamedit()
{
    printf("Teamedit");
}


void Historymenu()
{
    printf("This is Historymenu");
}

void Membermenu()
{
    printf("This is Membermenu");
}

void Teammenu()
{
    printf("This is TeamMenu");
}

void Departmentmenu()
{
    printf("This is Departmentmenu");
}
void publicmenu()
{
    system("cls");
    gotoxy(40,5);
    printf("1. History");

    gotoxy(40,6);
    printf("2. Members");

    gotoxy(40,7);
    printf("3. Team");


    gotoxy(40,8);
    printf("5. Return to Main Menu");

    gotoxy(40,9);
    printf("6. Exit from Programme");

    int choice;
    gotoxy(40,12);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
       system("cls");
       gotoxy(10,5);
       printf("The Constituent Assembly of bangladesh and the first parliament held their sittings in the building \n that now houses the Prime Minister's Office.The second Parliament also held most of its sittings in that building, \n the last sitting being on 10 July 1981. Its eight and incidently the last session commenced on 15 February 1982 \n in the new building.The design of the Parliament Building made by the famous architect Professirs Louis I.Khan, \n was evolved from the basic human requierment of protection from the glare and fury of nature.The entire complex \n has a floor area of 8,23000 sq.ft in the main building , 223000 sq.ft. in the south Plaza and 65000 sq. ft. \n in the Presidential Plaza.");
        break;

    case 2:
        system("cls");
        gotoxy(0,5);
        printf("\t1. Md. Ashadujjaman Nur\n");
        printf("\t2. Mr. Hossain Mohammad Arshad\n");
        printf("\t3. Shirin sharmin Chowdhury\n");
        printf("\t4. Tarana Halim\n");
        printf("\t5. Md. Fajle Rabbi Mia\n");
        printf("\t6. Shekh Hasina\n");
        printf("\t7. Abul Mal Abdul Muhit\n");
        printf("\t8. Rowshon Arshad\n");
        printf("\t9. Md. Hasanul Haque ENu\n");
        printf("\t10. Md. Mahbubul Alam Hanif\n");
        break;

    case 3:
        system("cls");
        gotoxy(0,5);
        printf("\t1.Bangladesh Aawamileague \n \t2.National party\n \t3.Bangladesh Aawamileague  \n \t4. Bangladesh Aawamileague \n \t5.Bangladesh Aawamileague \n \t6. Bangladesh Aawamileague \n \t7. Bangladesh Aawamileague \n  \t8. National party\n \t9. Bangladesh Aawamileague \n \t10. Bangladesh Aawamileague \n");
        break;


    case 4:
        exit(0);
        break;

    default:
        gotoxy(40,15);
        printf("Invalid Choice!!");
        gotoxy(40,16);
        printf("Press any key to continue....");
        getch();
        break;
    }
}


void file(FILE* fp,int data)
{

    char name[30];
    int salary;
    int position;
    char team[30];
    int i;
    for(i=0;i<2;i++){
        fscanf(fp,"%s[^\n]",name);
        fscanf(fp,"%d[^\n]",&salary);
        fscanf(fp,"%d[^\n]",&position);
        fscanf(fp,"%s[^\n]",team);
        printf("\n%s \t%d\n \t%d\n \t%s\n ",name,salary,position,team);


    }
}

#endif // _OTHER_
