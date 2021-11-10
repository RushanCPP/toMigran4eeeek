#include "Thread.hpp"
namespace our {
	extern sf::RenderTexture rTexture;
	extern sf::RenderWindow  window;
	extern sf::Color colorKucTb;
	extern sf::Color colorClear;
	extern int width;
	std::function<void()> msg_pros = []() {
		std::string input;
		std::string help_msg("Commands:\n"\
			"    help - print this message\n"\
			"    setColor r g b a - set color\n"\
			"    setFillColor r g b a - set fill color\n"\
			"    fill - fill our window fillcolor\n"\
			"    setWidth width - set width");
		std::cout << help_msg << std::endl;
		while (true) {
			std::cout << "Enter command: ";
			std::cin >> input;
			if (input == "help") {
				std::cout << help_msg << std::endl;
			}
			if (input == "setColor") {
				int r, g, b, a;
				std::cin >> r >> g >> b >> a;
				colorKucTb = sf::Color(r, g, b, a);
			}
			if (input == "setWidth") {
				int new_width;
				std::cin >> new_width;
				width = new_width;
			}
			if (input == "setFillColor") {
				int r, g, b, a;
				std::cin >> r >> g >> b >> a;
				colorClear = sf::Color(r, g, b, a);
				rTexture.clear(colorClear);
			}
			if (input == "fill") {
				rTexture.clear(colorClear);
			}
		}
	};
}