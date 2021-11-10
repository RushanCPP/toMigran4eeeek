#ifndef VALUES_HPP
#define VALUES_HPP
#include <SFML/Graphics.hpp>
namespace our {
	extern int width;
	extern sf::Color colorKucTb;// (sf::Color::White);
	extern sf::Color colorClear;// (sf::Color::Black);
	extern sf::RenderWindow window;// (sf::VideoMode(600, 600), "Paint4D");
	extern sf::RenderTexture rTexture;
	extern sf::Sprite sprite;//(rTexture.getTexture());
}
#endif // !VALUES_HPP
