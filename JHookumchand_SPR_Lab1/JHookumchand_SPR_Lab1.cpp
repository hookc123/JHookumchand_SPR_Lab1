// JHookumchand_SPR_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
unsigned int bitField=0;
void TurnOn(int bit) 
{
    bitField |= (1 << bit);
}
void TurnOff(int bit) 
{
    bitField &= ~(1 << bit);
}
void Toggle(int bit) 
{
    bitField ^= (1 << bit);
}
void Negate() 
{
    bitField= ~bitField;
}
void LeftShift() 
{
    bitField= (bitField<<1);
}
void RightShift() 
{
    bitField= (bitField>>1);
}
int main()
{
    int bitOperation;
    int bit;
    std::cout << "What bit operation do you wish to do?" << std::endl;
    std::cout << "1) Turn on bit" << std::endl;
    std::cout << "2) Turn off bit" << std::endl;
    std::cout << "3) Toggle bit" << std::endl;
    std::cout << "4) Negate bit" << std::endl;
    std::cout << "5) Shift bit left" << std::endl;
    std::cout << "6) Shift bit right" << std::endl;
    std::cout << "7) Exit" << std::endl;
    std::cin >> bitOperation;
    std::cout << "Which index do you wish to perform this operation?" << std::endl;
    std::cin >> bit;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
