#include <iostream>

int printAndDecrementOne(int x, int pow)
{
    std::cout << '1';
    return (x - pow);
}

// x is our number to test
// pow is a power of 2 (e.g. 128, 64, 32, etc...)
int printAndDecrementBit(int x, int pow)
{
    // Test whether our x is greater than some power of 2 and print the bit
    if (x >= pow)
        return printAndDecrementOne(x, pow); // If x is greater than our power of 2, subtract the power of 2

    // x is less than pow
    std::cout << '0';
    return x;
}

int main(){
    
    std::cout << "Enter an integer between 0 and 255: ";
    int x{};
    std::cin >> x;

    x = printAndDecrementBit(x, 128);
    x = printAndDecrementBit(x, 64);
    x = printAndDecrementBit(x, 32);
    x = printAndDecrementBit(x, 16);

    std::cout << ' ';

    x = printAndDecrementBit(x, 8);
    x = printAndDecrementBit(x, 4);
    x = printAndDecrementBit(x, 2);
    x = printAndDecrementBit(x, 1);

    std::cout << '\n';

    return 0;
}