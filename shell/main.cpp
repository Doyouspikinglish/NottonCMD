#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include "shell.h"



/*
$MainFile
$shell.h
*/

/*
editor: doyouspikinglish
last edited on: 06/07/2025
*/

void progress_bar(int steps = 20, int delay_ms = 100) {
    std::cout << "[";
    for (int i = 0; i < steps; ++i) {
        std::cout << "#";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
    }
    std::cout << "] Done.\n";
}




int main() {
    
    progress_bar();
	shell sh;
	sh.start();
	return 0;
}


