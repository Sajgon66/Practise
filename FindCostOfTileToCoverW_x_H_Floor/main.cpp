#include <iostream>
int main() 
{
    std::cout << "Type width, height and cost[w h c]: ";
    double x,y,z;
    std::cin >> x >> y >> z;
    std::cout << std::endl << "Cost is: " << x*y*z;
    return 0;
}

