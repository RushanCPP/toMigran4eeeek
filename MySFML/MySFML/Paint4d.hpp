#ifndef PAINT4D_HPP
#define PAINT4d_HPP
#include <SFML\Graphics.hpp>
#include <iostream>
namespace our {
	void updateOur(sf::RenderTexture& renderTexture, sf::RenderWindow& window);
	void windowCycle(sf::RenderWindow&, sf::RenderTexture&);
}
#endif//PAINT4D_HPP