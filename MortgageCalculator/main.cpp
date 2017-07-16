#include <iostream>
int mortgage(int, int, int);
int main() 
{
    static unsigned int loan=0,rate=0,month=0;
    std::cout << "Put loan, interest rate in number and months of renting[l i m]: ";
    std::cin >> loan >> rate >> month;
    std::cout << "Cost of renting is: " << mortgage(loan,rate,month) << std::endl;
    return 0;
}
int mortgage(int loan,int rate, int month)
{
    return (loan * month) * ((100+rate)/100);
}

