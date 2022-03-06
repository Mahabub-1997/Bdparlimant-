//defining my header file
#ifndef _Header_
#define _Header_


#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>



//variables and function prototypes
char passwordadmin[20]={"admin"};
void PASSWORD(int choice);
void delay(unsigned int mseconds);
void adminmenu();
void History();
void Member();
void Seatplan();
void Salary();
void Name();
void Position();
void Team();
void Info();
void gotoxy(int x, int y);
void publicmenu();
void Historymenu();
void Membermenu();
void Teammenu();
void Departmentmenu();
void file(FILE* fp,int data);

#endif // _Header_
