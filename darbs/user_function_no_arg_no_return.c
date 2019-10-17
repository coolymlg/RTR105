#include<stdio.h>

void user_function_1()

{
printf("Cienijamais lietotaj,svaicu Tevi no savas lietotajas funkcijas!\n");
}
void user_function_2();

void main()
{
user_function_1();
user_function_1();
user_function_2();
}
void user_function_2()

{
user_function_1();
}

