#pragma once

#include <Lmcons.h>
#include <Windows.h>

typedef wchar_t TEXT; // Write Text;
#define TEXT_LENGTH  256+1 // Default Array Length for wchar_t data type

namespace TEXT_SPEED {
    int NORMAL = 10;
    int DOUBLE = 5;
    int FASTEST = 1;
}

/*Read each character in a character array, and write them one by one to the console */
void text_writer(wchar_t arry[TEXT_LENGTH], int speed) {

    size_t length = wcslen(arry); // get length of wide string (arry) using wcslen function

    // Iterate through character array and print each character one by one
    for (int i = 0; i <= length; i++) {
        Sleep(100 - length / speed); //Time to wait per iteration
        std::wcout << "\a" << arry[i]; // Print wide characters to screen with beep
    }
    std::wcout << "\n"; //wcout means wide cout
}


void text_getter(wchar_t* message, wchar_t* secondary, int speed) {

    if (secondary) {

        wchar_t message_[TEXT_LENGTH]; // Adjust size accordingly

        // Create the message
        wcscpy(message_, message);
        wcscat(message_, secondary);

        //Write Text To Screen
        text_writer(message_, speed);

    }
    else {
        wchar_t message_[TEXT_LENGTH]; // Adjust size accordingly
        wcscpy(message_, message);
        text_writer(message_, speed);
    }


}