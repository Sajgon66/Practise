#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::cout << "You put Binary or Decimal number[B/D]: ";
    char z = '0';
    std::cin >> z;
    if(z == 'B')
    {
        int x = 0;
        std::cout << "Put number in Decimal: ";
        std::cin >> x;
        std::string y;
        while( x != 1)
        {
            if(x%2 == 1)
            {
                y+= "1";
                x--;
                x /=2;     
            }
            else
            {
                y+= "0";
                x /= 2;
            }
            std::cout << x << std::endl;
        }
        y+= "1";
        std::reverse(y.begin() , y.end());
        std::cout << y;
    }
    if(z == 'D')
    {
        std::cout << "Put number in Binary[Please put number in binary without mistake]: ";
        std::string y;
        std::cin >> y; 
        int length = y.size()-1;
        int result = 0;
        char z = ' ';
        int dec = 0;
	int exp = 0;
          
	for (int i = length; i >= 0; i--, exp++)
        {
		result += (y.at(i) % 48) << exp;
	
        }
        std::cout << "Wynik to: " << result;
    }
}

