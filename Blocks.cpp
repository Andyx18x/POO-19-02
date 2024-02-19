#include "Blocks.h"
#include <SFML/Graphics/RectangleShape.hpp>

Blocks::Blocks(float x, float y, float width, float height, Color color){
	
	
	b_shape.setSize(Vector2f(width,height));
	b_shape.setPosition(x,y);
	b_shape.setFillColor(color);
	b_shape.setOutlineThickness(1.f);
	b_shape.setOutlineColor(sf::Color::White);
	
}

