#include <iostream>

int main()
{
    double total =0 , cost = 0;
    do
    {
        std::cout << "Koszt Suma :";
    std::cin >> cost >> total;
    std::cout << std::endl;
    }
    while(total < cost);
    total *= 100;
    cost *= 100;
    std::cout << total << " " << cost << std::endl;
    total -= cost;
    
    int quartes = 0, dimes = 0, nickels = 0, pennies = 0;
    
    
    while (total != 0)
    {
        if(total >= 25)
        {
            total -=25;
            quartes ++;
            continue;
        }
        if(total >= 10)
        {
            total -= 10;
            dimes ++;
            continue;
        }
        if(total >= 5)
        {
            total -= 5;
            nickels ++;
            continue;
        }
        if(total >= 1)
        {
            total -= 1;
            pennies ++;
            continue;
        }
    }
    std::cout << quartes << " " << dimes << " " << nickels << " " << pennies << std::endl;
}