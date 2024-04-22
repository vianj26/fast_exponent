#include <iostream>
#include <vector>

using namespace std;

int exponent(int, int);



int main()
{

    int base = 2;
    int power = 2;

    cout << exponent(base, power) << endl;

    return 0;
}

int exponent(int base, int power)
{
    int remainder = 1;
    
    if (base == 1) return 1;
    if (power == 0) return 1;

    while(power >= 2)
    {
        if(power % 2 == 1)
        {
            power -= 1;
            remainder *= base;
        }
        power /= 2;
        base *= base;
    }

    return base * remainder;

}
