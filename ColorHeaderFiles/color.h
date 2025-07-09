#pragma once
#include <iostream>

/*30  Black
  31  Red
  32  Green
  33  Yellow
  34  Blue
  35  Magenta
  36  Cyan
  37  White
*/

namespace TxtColor {
	inline void SetColor(const std::string& color) {
		if (color == "Black" || color == "black") {
			std::cout << "\033[30m";
		}
		else if (color == "Red" || color == "red") {
			std::cout << "\033[31m";
		}
		else if (color == "Green" || color == "green") {
			std::cout << "\033[32m";
		}
		else if (color == "Yellow" || color == "yellow") {
			std::cout << "\033[33m";
		}
		else if (color == "Blue" || color == "blue") {
			std::cout << "\033[34m";
		}
		else if (color == "Magenta" || color == "magenta") {
			std::cout << "\033[35m";
		}
		else if (color == "Cyan" || color == "cyan") {
			std::cout << "\033[36m";
		}
		else if (color == "White" || color == "white" || color == "reset" || color == "Reset") {
			std::cout << "\033[37m";
		}
		else {
			std::cerr << "not a valid color";
		}
	}
}
