#include <iostream>
int main() 
{
    std::cout<< "Post two numbers: ";
    double x = 0,y = 0;
    std::cin >> x >> y;
    char z = '0';
    std::cout<<"Put operation add(+), subtract(-), multiple(*), divide(\\): ";
    std::cin >> z;
    switch (z)
    {
        case '+':
        {
            std::cout << x + y;
            break;
        }
        case '-':
        {
            std::cout << x-y;
            break;
        }
        case '*':
        {
            std::cout << x*y;
            break;
        }
        case '\\':
        {
            std::cout << x/y;
            break;
        }
        default:
        {
            std::cout << "Something goes wrong. I end";
            return 1;
        }
    }
    
    return 0;
}

