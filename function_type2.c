#include<stdio.h>
//function with argument and without return value

void add(int,int); //function prototype

// whenever we declared function after main then we have to used function prototype

// whenever we declared function before main then we need not to used function prototype

//function prototype must be equal to the function defination


int main()
{

add(20,30);
add(40,30);
add(70,30);


return 0;
}

void add(int a,int b)

{

    printf("%d",a+b);

}
