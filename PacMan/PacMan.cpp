// PacMan.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Game.h"
#include "Menu.h"

int main()
{
	sf::RenderWindow window(VideoMode(1000, 1000), "PacMan.Game"); //, Style::Close | Style::Titlebar
	Game start;
	start.GameLoop(window);
	return 0;
}
	 

/*
sf::Texture texture;
if(!texture.loadFromFile(""))
{ }
Tile.setTexture(&texture);
*/