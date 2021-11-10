#include "values.hpp"
#include "Paint4d.hpp"
namespace our {
	void windowCycle(sf::RenderWindow& window, sf::RenderTexture& rTexture) {
		bool mousePressed = false;
		sf::Sprite sprite(rTexture.getTexture());
		window.setFramerateLimit(60);
		while (window.isOpen()) {
			sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed) {
					std::cout << "Bye!\n";
					window.close();
				}
				if (event.type == sf::Event::MouseButtonPressed) {
					mousePressed = true;
				}
				if (event.type == sf::Event::MouseButtonReleased) {
					mousePressed = false;
				}
			}
			window.clear();
			if (mousePressed)
				updateOur(rTexture, window);
			window.draw(sprite);
			window.display();
		}
	}
}