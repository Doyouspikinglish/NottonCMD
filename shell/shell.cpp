#include "shell.h"
#include "color.h"
#include "CheckTime.h"
#include <iostream>
#include <string>

/*
editor: doyouspkinglish
last edited in: 06/07/2025 
 */

void clear() {
	std::cout << "\033[2J\033[H";
}


void shell::start() {
	std::string inpt;
	while (true) {
		std::cout << "Notton -"; 
		std::getline(std::cin, inpt); 
		handle_command(inpt);
	}
}

void shell::handle_command(const std::string& cmd) {
	if (cmd == "CMD -show -mdl") {
		std::cout << "%MSG {working}\n";
	}
	else if (cmd == "exit") {
		std::cout << "exiting\n";
		exit(0);
	}
	else if (cmd == "cls -Terminal") {
		clear();
	}
	else if (cmd == "CMD set -$func -exit = true") {
		exit(0);
	}
	else if (cmd == "cls -t") {
		clear();
	}
	else if (cmd == "cls -Black" || cmd == "cls -black") {
		TxtColor::SetColor("Black");
	}
	else if (cmd == "cls -Red" || cmd == "cls -red") {
		TxtColor::SetColor("red");
	}
	else if (cmd == "cls -Green" || cmd == "cls -green") {
		TxtColor::SetColor("green");
	}
	else if (cmd == "cls -Reset" || cmd == "cls -reset" || cmd == "cls -white" || cmd == "cls -White") {
		TxtColor::SetColor("white");
	}
	else if (cmd == "cls -magenta" || cmd == "cls -Magenta") {
		TxtColor::SetColor("magenta");
	}
	else if (cmd == "cls -Yellow" || cmd == "cls -Yellow") {
		TxtColor::SetColor("yellow");
	}
	else if (cmd == "cls -Cyan" || cmd == "cls -cyan") {
		TxtColor::SetColor("cyan");
	}
	else if (cmd == "shw -time") {
		SHW_USER_TIME();
	}
	else if (cmd == "ver" || cmd == "shw -ver") {
		std::cout << "NottonCMD: alpha\n";
		
	}

}

