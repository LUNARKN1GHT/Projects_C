#pragma once

#ifndef __MENU_H__
#define __MENU_H__

#include<stdio.h>
#include<stdlib.h>
#include<windows.h> // This include is incorrect and unnecessary

enum MENU_OPTION    // define the menu option
{
	login_op_administrator = 1,
	login_op_teacher,
    login_op_student,
};

int menu_option;   // input the menu option

void menu();

#endif // !__MENU_H__
