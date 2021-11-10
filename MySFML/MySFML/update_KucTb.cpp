#include "Paint4d.hpp"
namespace our {
	extern sf::Color colorKucTb;
	extern int width;
	void updateOur(sf::RenderTexture& renderTexture, sf::RenderWindow& window) {
		sf::CircleShape point(width);
		point.setFillColor(colorKucTb);
		point.setOrigin(width, width);
		point.setPosition(sf::Mouse::getPosition(window).x, 600 - sf::Mouse::getPosition(window).y);
		renderTexture.draw(point);
	}
}