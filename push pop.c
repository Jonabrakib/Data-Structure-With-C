int update()
{

    system("cls");
    display();

    char name[100],id[20],dept[20],semester[20],section[20];
    long long int phone;
    int batch;
    float cgpa;

    printf("\nWrite the ID that want to edit: ");
    scanf("%s",&id);

    struct node *link=Head;

    while(link != NULL)
        {
            if(strcmp(link->ID,id)==0)
               {
                    break;
               }

            else
                {
                    link = link->ptr;
                }

        }

    if(link == NULL)
    {
        printf("\nYour search ID didn't match ! ! ! Press any key to continue\n");
        getch();
        displayTitle();
    }
    else
    {
        printf("\n\n");
        printf("1. Change Name\n");
        printf("2. Change ID\n");
        printf("3. Change Department\n");
        printf("4. Change Batch\n");
        printf("5. Change Semester\n");
        printf("6. Change Section\n");
        printf("7. Change CGPA\n");
        printf("8. Change Phone Number\n");
        printf("\nEnter your choice: ");

        int choice;
        scanf("%d",&choice);


        switch(choice)
        {
            case 1:
                printf("\nWrite The Update Name : ");
                scanf("%c",&ch);
                gets(name);

                strcpy(link->Name,name);
                break;
            case 2:
                printf("\nWrite The Update ID : ");
                scanf("%c",&ch);
                gets(id);

                strcpy(link->ID,id);
                break;
            case 3:
                printf("\nWrite The Update Department : ");
                scanf("%c",&ch);
                gets(dept);

                strcpy(link->Deparment,dept);
                break;
            case 4:
                printf("\nWrite the update Batch : ");
                scanf("%d",&batch);

                link->Batch = batch;
                break;
            case 5:
                printf("\nWrite the update Semester : ");
                scanf("%c",&ch);
                gets(semester);

                strcpy(link->Semester,semester);
                break;
            case 6:
                printf("\nWrite the update Section : ");
                scanf("%c",&ch);
                gets(section);

                strcpy(link->Section,section);
                break;
            case 7:
                printf("\nWrite the update CGPA : ");
                scanf("%f",&cgpa);

                link->CGPA = cgpa;
                break;
            case 8:
                printf("\nWrite the update Phone Number : ");
                scanf("%lld",&phone);

                strcpy(link->Phone,phone);
                break;
            default:
                system("cls");
                printf("You have choosen wrong option !!! press any key to continue ");
                getch();
                displayTitle();
                break;
        }
    }

}
