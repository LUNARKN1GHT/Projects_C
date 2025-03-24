#pragma once
#ifndef __LOGIN_H__
#define __LOGIN_H__

#include<stdio.h>
#include<stdbool.h>

typedef struct LOG_IN
{
    char userID[20];
    char password[20];
}LOG_IN;

LOG_IN user;

bool login_as_administrator();
bool login_as_teacher();
bool login_as_student();

#endif