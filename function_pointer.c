#include <stdio.h>

void powerTwo(int a) {

    printf("Value of a is %d\n", a);
    printf("Value of a^2 is %d\n", a*a);

}
 
int main() {

    void (*fun_ptr)(int) = &powerTwo;
    (*fun_ptr)(10);
    
    (*fun_ptr)(int) = fun; 
    fun_ptr(10);
 
    return 0;
}
