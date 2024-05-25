#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "The constructor constructed Harl" << "\n";
};

Harl::~Harl()
{
    std::cout << "The destructor destroyed Harl" << "\n";

};

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << "\n";
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << "\n";
}

void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << "\n";
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << "\n";
}

void    Harl::complain(std::string level)
{
    std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    t_func funcs[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; i++)
    {
        if (level == lvl[i])
        {
            (this->*funcs[i])();
            return ;
        }
    }
    std::cerr << "The input you wrote is sadly didn't match the complain list!!" << "\n";
}