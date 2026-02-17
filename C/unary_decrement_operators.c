 #include<stdio.h>
 int main()
 {
    printf("Pre - Decrement Operators\n");

       int a = 5 , r;
    
       r = --a;  // Pre - Decrement Opertors
      
       printf("a = %d \n" ,a);

       printf("result = %d" ,r);


   printf("\n Post - Decrement Opertors \n");
   
    int a1 = 5 , r1;

    r1 = a1--;  // Post - Decrement Opertors

    printf("a1 = %d \n" ,a1);

    printf("result = %d" ,r1);

    return 0;
}
