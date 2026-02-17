 #include<stdio.h>
 int main()
 {
    printf("Pre - Increment Operators\n");

       int a = 5 , r;
    
       r = ++a;  // Pre - Increment Opertors
      
       printf("a = %d \n" ,a);

       printf("result = %d" ,r);


   printf("\n Post - Increment Opertors \n");
   
    int a1 = 5 , r1;

    r1 = a1++;  // Post - Increment Opertors

    printf("a1 = %d \n" ,a1);

    printf("result = %d" ,r1);

    return 0;
}
