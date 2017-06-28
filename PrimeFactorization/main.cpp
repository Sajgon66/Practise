
#include <iostream>
#include <vector>

int main()
{
    int x;
    std::cin >> x;
    int z = x;
    std::vector<int> prime;
    for(int i=0; i<=z;i++)
    {
        for(int y = 2;y<=z;y++)
        {
            if(z % y == 0)
            {
                prime.push_back(y);
                z = z / y;
                break;
            }
        }
    }
    for(int n : prime)
    {
        if(n == x)
        {
            std::cout << x << " is PrimeNumber";
            break;
        }
        std::cout << n << " ";
    }
    return 0;
}

