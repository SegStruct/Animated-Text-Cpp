#include <iostream>
#include "textHandler.h"


int main()
{
    //Example
    TEXT hello_world[TEXT_LENGTH] = (L"Hello world ");// Main Text
    TEXT how_r_u[TEXT_LENGTH] = (L"how are you?\n"); // Concat Text

    TEXT have_nice_day[TEXT_LENGTH] = (L"Have a nice day!");

    text_getter(hello_world, how_r_u, TEXT_SPEED::NORMAL);
    text_getter(have_nice_day, NULL, TEXT_SPEED::NORMAL);

    system("pause");

}

