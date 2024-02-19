#ifndef NIVEL_H
#define NIVEL_H
#include "Scene.h"
#include "Game.h"
#include <SFML/Graphics/RenderWindow.hpp>
#include "Blocks.h"
#include "Stats.h"
#include "Ball.h"
#include "Player.h"

class Nivel : public Scene {
public:
	Nivel();
	virtual void Update(Game &g) = 0;
	virtual void Draw(RenderWindow &window) = 0;
	virtual ~Nivel (){};
	
protected:
	const int rowCount = 10;
	const int columnCount =10 ;
	const float blockWidth = 74.f; // 74
	const float blockHeight = 20.f;
	
	Ball m_ball; Player m_player;
	
	vector<Blocks>m_blocks;
};

#endif

