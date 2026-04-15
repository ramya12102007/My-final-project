#include<stdio.h>

struct Employee{
    int id;
    char name[50];
    float basic,hra,da,gross;
};

int main()
{
    struct Employee emp[100];
    int n=0,choice,i;

    while(1){
            printf("\n---Employee Management System---\n");
    printf("1.Add Employee\n");
    printf("2.Display Employees\n");
    printf("3.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        printf("\nEnter Employee ID:");
        scanf("%d",&emp[n].id);

        printf("Enter Name:");
        scanf("%s",emp[n].name);

        printf("Enter Basic Salary:");
        scanf("%f",&emp[n].basic);

        emp[n].hra=0.20*emp[n].basic;
        emp[n].da=0.10*emp[n].basic;
        emp[n].gross=emp[n].basic+emp[n].hra+emp[n].da;

        n++;
        printf("Employee Added Successfully!\n");
        break;

    case 2:
        if(n==0){
                printf("No records found!\n");
        }else{
            printf("\n---Employee Records---\n");
            for(i=0;i<n;i++){
                    printf("\nID:%d",emp[i].id);
            printf("\nName:%s",emp[i].name);
            printf("\nBasic Salary:%.2f",emp[i].basic);
            printf("\nHRA:%.2f",emp[i].hra);
            printf("\nDA:%.2f",emp[i].da);
            printf("\nGross Salary:%.2f",emp[i].gross);
            }
        }
        break;

    case 3:
        printf("Exiting...\n");
        return 0;

    default:
        printf("Invalid choice!\n");
    }
    }
    return 0;
}

