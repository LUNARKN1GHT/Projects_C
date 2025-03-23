#include "menu.h"

void menu()
{
	printf("Welcome to School Manage System!\n");
	printf("Please enter your option:\n");
    printf("1. Add teacher\n");
    printf("2. Delete teacher\n");
    printf("3. Add student\n");
    printf("4. Delete student\n");
    printf("5. Add course\n");
    printf("6. Delete course\n");
    printf("7. Query teacher\n");
    printf("8. Query student\n");
    printf("9. Query course\n");
    printf("10. Exit system\n");
    while (1)
    {
        scanf_s("%d", &menue_option); //input the option
        switch (menue_option)
        {
            case add_teacher:
                printf("1");
                break;
            case delete_teacher:
                printf("1");
                break;
            case add_student:
                printf("1");
                break;
            case delete_student:
                printf("1");
                break;
            case add_course:
                printf("1");
                break;
            case delete_course:
                printf("1");
                break;
            case query_teacher:
                printf("1");
                break;
            case query_student:
                printf("1");
                break;
            case query_course:
                printf("1");
                break;
            case exit_system:
                exit(0);
                break;
            default:
                printf("Invalid option. Please input again.\n");
                break;
        }
        system("pause");
        system("cls");
        printf("1. Add teacher\n");
        printf("2. Delete teacher\n");
        printf("3. Add student\n");
        printf("4. Delete student\n");
        printf("5. Add course\n");
        printf("6. Delete course\n");
        printf("7. Query teacher\n");
        printf("8. Query student\n");
        printf("9. Query course\n");
        printf("10. Exit system\n");
        fflush(stdout);
    }
}