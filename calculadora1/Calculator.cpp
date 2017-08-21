#include <iostream>
int add(int x, int y)
{
//Toma los numeros i hace su suma
    std::cout << "Runing the calculator \n";
            return(x+y);
}
int main(){
/*Este programa llama a la funcion add() de modo que suma los mumeros */
    std::cout<< "what is 89 + 5";
            std::cout << "what is sum " << add(89, 5);
            return 0;

}