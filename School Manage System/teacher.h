#pragma once
#ifndef __TEACHER_H__
#define __TEACHER_H__

#include <stdio.h>
#include <stdlib.h>

typedef struct Teacher
{
	char name[20];
	char ID[20];
}Teacher;

void add_teacher();
void delete_teacher();
void query_teacher();

#endif // !__TEACHER_H__
