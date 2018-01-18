#include "game.h"

// // Uncomment for Part 2
// // ********************
bool flip = false;
int current = 1;
// // ********************

Game::Game() : window(VideoMode(800, 600), "OpenGL"),
primatives(2)
{
	// // Uncomment for Part 2
	// // ********************
	index = glGenLists(primatives);
	// // ********************
}

Game::~Game() {}

void Game::run()
{

	initialize();

	Event event;

	while (isRunning) {

		cout << "Game running..." << endl;

		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}
		update();
		draw();
	}
}

void Game::initialize()
{
	isRunning = true;
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, window.getSize().x / window.getSize().y, 1.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
}

void Game::update()
{
	std::cout << "Update up" << std::endl;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		glRotatef(rotationAngle, 5.0f, 0.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		glRotatef(rotationAngle, -5.0f, 0.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		glRotatef(rotationAngle, 0.0f, -5.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		glRotatef(rotationAngle, 0.0f, 5.0f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
	{
		glRotatef(rotationAngle, 0.0f, 0.0f, 5.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::PageDown))
	{
		glRotatef(rotationAngle, 0.0f, 0.0f, -5.0f);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::E))
	{
		glTranslatef(0.0f, 0.0f, -0.0069f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
	{
		glTranslatef(0.0f, 0.0f, 0.0069f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		glTranslatef(-0.0069f, 0.0f, -0.00f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		glTranslatef(0.0069f, 0.0f, 0.0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		glTranslatef(0.0f, 0.0069f, 0.0f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		glTranslatef(0.0f, -0.0069, 0.0f);
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
	{
		glScalef(1.0005f, 1.0f, 1.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::K))
	{
		glScalef(1.f, 1.0005, 1.f);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::U))
	{
		glScalef(1.f, 1.0f, 1.0005f);
	}


}

void Game::draw()
{
	//	cout << "Draw up" << endl;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


	glBegin(GL_TRIANGLES);
	{ glVertex3f(-1.5, 2.0, -5.0); glVertex3f(-1.5, 1.0, -5.0); glVertex3f(-1.4, 1.5, -5.0); }
	glEnd();



	window.display();

}

void Game::unload()
{
	cout << "Cleaning up" << endl;
}