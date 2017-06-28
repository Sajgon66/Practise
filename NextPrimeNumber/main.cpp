#include <iostream>
void nextPrime();
int main() 
{
    bool x;
    char z;
    std::cin >> z;
    while(!(z=='n'||z=='N'))
    {
        nextPrime();
        std::cin >> z;
    }
}
void write(int x)
{
    std::cout << "Prime Number is: " << x <<"\nDo we seek next Prime Number[y/n]";
}
void nextPrime()
{
    static int x = 2;
    bool foundPrime = false;
    while(!foundPrime)
    {
        foundPrime = false;
        for(int i=2;i<=x;i++)
        {
            if(x % i == 0)
            {
                if(x == i)
                {
                    write(x);
                    foundPrime = true;
                    break;
                }
                else
                {
                    break;
                }
            }
        }
        x++;
    }
    
}
