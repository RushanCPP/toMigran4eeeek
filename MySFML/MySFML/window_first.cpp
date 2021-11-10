#include "Opening.hpp"
namespace our {
	void setVertexArrayTraingle(sf::VertexArray& vertex) {
		vertex[0].position = sf::Vector2f(550, 50);
		vertex[0].color = sf::Color::Blue;
		vertex[1].position = sf::Vector2f(550, 550);
		vertex[1].color = sf::Color::Green;
		vertex[2] = vertex[1];
	}
	void updateOurVertexArray(sf::VertexArray& vertex, const sf::Time& elapsed, 
							const float& velosity, const float& velosity_color,
							float& r, float& g, float& b) {
		vertex[2].position.x -= velosity * elapsed.asSeconds();
		vertex[2].position.y -= velosity * elapsed.asSeconds();
		r += velosity_color * elapsed.asSeconds();
		g -= velosity_color * elapsed.asSeconds();
		vertex[2].color = sf::Color(r, g, b);
	}
	void opening() { // блок опеннига
		sf::RenderWindow window(sf::VideoMode(600, 600), "Hello!");
		sf::VertexArray vertex(sf::PrimitiveType::Triangles, 3);
		setVertexArrayTraingle(vertex);
		sf::Clock clock;
		
		float velosity = 50.0;
		float velosity_color = 25.5;
		
		sf::Time window_live = sf::Time::Zero;

		float r = 0, g = 255, b = 0;
		
		while (window.isOpen()) {
			sf::Event event;
			while (window.pollEvent(event)) {
				if (event.type == sf::Event::Closed)
					window.close();
			}

			sf::Time elapsed = clock.restart();
			
			window_live += elapsed;
			
			if (window_live >= sf::seconds(15)) {
				window.close();
			}
			if (window_live >= sf::seconds(10)) {
				continue;
			}
			updateOurVertexArray(vertex, elapsed, velosity, velosity_color, r, g, b);

			window.clear();

			window.draw(vertex);
			
			window.display();
		}
	}
}