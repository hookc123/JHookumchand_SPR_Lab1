// JHookumchand_SPR_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


unsigned int bitField;
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
    bitField = ~bitField;
}
void LeftShift()
{
    bitField = (bitField << 1);
}
void RightShift()
{
    bitField = (bitField >> 1);
}
void BitDisplay()
{
    std::cout << "bitField: " << bitField << "\n" << std::endl;
    std::cout << "Bits: ";
    for (int i = 31; i >=0 ; i--) 
    {
        int bit = (bitField>>i)&1 ;
        std::cout << bit;
        if (i % 4 == 0) {
            std::cout << " ";
        }

    }
    std::cout<<"\n" << std::endl;
}
int main()
{
     ;
    srand(time(0));
    bitField = rand();
    BitDisplay();
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
    while (bitOperation != 7) {
        if(bitOperation<=3)
        {
            std::cout << "Which index do you wish to perform this operation?" << std::endl;
            std::cin >> bit;
        }
        switch (bitOperation) {
        case 1:
            TurnOn(bit);
            break;
        case 2:
            TurnOff(bit);
            break;
        case 3:
            Toggle(bit);
            break;
        case 4:
            Negate();
            break;
        case 5:
            LeftShift();
            break;
        case 6:
            RightShift();
            break;
        }
        BitDisplay();
        std::cout << "What bit operation do you wish to do?" << std::endl;
        std::cout << "1) Turn on bit" << std::endl;
        std::cout << "2) Turn off bit" << std::endl;
        std::cout << "3) Toggle bit" << std::endl;
        std::cout << "4) Negate bit" << std::endl;
        std::cout << "5) Shift bit left" << std::endl;
        std::cout << "6) Shift bit right" << std::endl;
        std::cout << "7) Exit" << std::endl;
        std::cin >> bitOperation;
    }
    
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
