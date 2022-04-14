#include <utilapiset.h>
#include <iostream>
#include <conio.h>

int main() {
    std::cout << "use keys 0 to 9 for make sounds" << std::endl;
    std::cout << "press \"q\" for exit" << std::endl;
    char key = ' ';
    int keyNum = 0;
    int frecuency = 0;    

    while (true)
    {
        key = _getch();
         if (key == 'q') {
            std::cout << "bye!" << std::endl;
            exit(0);
        } else if (!(isdigit(key))) {
            std::cout << "not a digit!" << std::endl;
            continue;
        } else {            
            keyNum = (int(key) - 48);
            if (keyNum == 0) {
                frecuency = 2000;
            } else {
                frecuency = 200 * keyNum;
            }            
            std::cout << frecuency << " hz" << std::endl;
            Beep(frecuency, 200);
        }
    }        
    return 0;
}
