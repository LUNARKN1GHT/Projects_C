#include "menu.h"

void menu()
{
	printf("Welcome to School Manage System!\n");
	printf("Please enter your option:\n");
	printf("1. login as administrator\n");
    printf("2. login as teacher\n");
    printf("3. login as student\n");
	printf("0. exit the system\n");

	while (1)
	{
        scanf_s("%d", &menu_option);

        switch (menu_option)
        {
            case login_op_administrator:
                login_as_administrator();
                break;
            case login_op_teacher:
                login_as_teacher();
                break;
            case login_op_student:
                login_as_student();
                break;
            case 0:
                printf("exit the system\n");
                exit(0);
            default:
                printf("Invalid option, please in put again.\n");
                break;
        }
	}
}