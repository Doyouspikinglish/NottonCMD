#pragma once
#include <iostream>
#include <string>
#ifndef SHELL_H
#define SHELL_H

/*
editor: doyouspikinglish
last edited in: 06/07/2025 
*/

class shell {
public:
	void start();
private:
	void handle_command(const std::string& cmd);
};

#endif
