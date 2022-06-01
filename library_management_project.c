#include<stdio.h>
struct library
{

    char bk_name[50];
    char author_name[50];
    int pages; 
    float price;
};
int main() {
    struct library;
    char author_name[50],bk_name[50];
    int i,j, count;
    i=j=count=0;
    
    while (j!=6) {
        printf ("\n\n1. Add book information \n");
         printf ("\n\n2. List of all Book name \n");
          printf ("\n\n3. List of all Book Author name \n");
           printf ("\n\n4. List the price of Book \n");
            printf ("\n\n5. List the count of Book in the library \n");
             printf ("\n\n6. exit \n");


         printf ("\n\nEnter the one of the above \n");
         scanf("%d",&j);
         
        switch(j)
        {
            case 1:  printf (" Enter the Book name = ");
                     scanf("%s",library[i].bk_name);
                     
                     printf (" Enter the Author name = ");
                     scanf("%s",library[i].author_name);
                     
                     printf (" Enter pages = ");
                     scanf("%d",library[i].pages);
                     
                     printf (" Enter the price = ");
                     scanf("%f",library[i].price);
                     count++;
      break;
            
    case 2:  printf("\n No of books in library : %d", keepcount);
    
    break;
    
    case 3:
    exit (0); 

}
}
return 0;

}
