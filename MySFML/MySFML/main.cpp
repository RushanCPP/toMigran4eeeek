#include <SFML\Graphics.hpp>
#include <iostream>
#include <string>
#include <thread>
#include "Opening.hpp"
#include "Paint4d.hpp"
#include "Thread.hpp"
namespace our {
	int width = 2;
	sf::Color colorKucTb(sf::Color::White);
	sf::Color colorClear(sf::Color::Black);
	sf::RenderWindow window(sf::VideoMode(600, 600), "Paint4D");
	sf::RenderTexture rTexture;
	sf::Sprite sprite(rTexture.getTexture());
}
int main() { 
	our::opening();
	if (!our::rTexture.create(600, 600)) {
		std::cout << "Can't creat render texture!\n";
		return -1;
	}
	our::rTexture.clear(our::colorClear);
	std::thread t(our::msg_pros);
	our::windowCycle(our::window, our::rTexture);
	t.detach();
	return 0;
}