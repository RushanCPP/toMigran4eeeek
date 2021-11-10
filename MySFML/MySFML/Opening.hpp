#ifndef OPENING_HPP
#define OPENING_HPP
#include <SFML\Graphics.hpp>
namespace our {
	void setVertexArrayTraingle(sf::VertexArray&);
	void updateOurVertexArray(sf::VertexArray& vertex, const sf::Time& elapsed,
		const float& velosity, const float& velosity_color,
		float& r, float& g, float& b);
	void opening();
}
#endif//OPENING_HPP