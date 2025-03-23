#pragma once

#ifndef __MENU_H__
#define __MENU_H__

#include<stdio.h>
#include<stdlib.h>
#include<windows.h> // This include is incorrect and unnecessary

enum MENU_OPTION    // define the menu option
{
	add_teacher = 1,
	delete_teacher,
	add_student,
    delete_student,
    add_course,
    delete_course,
	query_teacher,
    query_student,
    query_course,
    exit_system
};

int menue_option;   // input the menu option

void menu();

#endif // !__MENU_H__
