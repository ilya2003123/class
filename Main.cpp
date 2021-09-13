#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

sf::Font font_mox;


class rast
{
private:
	int sm, m, km;

public:
	void input(int x, int y, int z);
	void output();
	int rost()
	{
		return km * 100000 + m * 100 + sm;
	}

	void preobrazhenskiy()
	{
		km = km + m / 1000;
		m = m % 1000;
		m = m + sm / 100;
		sm = sm % 100;
	}
	sf::Text text;
};

void rast::input(int x, int y, int z)
{
	km = x;
	m = y;
	sm = z;
	preobrazhenskiy();
}

void rast::output()
{
	std::cout << km << "км" << std::endl;
	std::cout << m << "м" << std::endl;
	std::cout << sm << "см" << std::endl;
	
	text.setFont(font_mox);
	text.setCharacterSize(65);
	text.setFillColor(sf::Color::Blue);

	text.setString(std::to_string(km) + " км " + std::to_string(m) + " м " + std::to_string(sm) + " см ");
	text.setPosition(700, 360);
	







}


int main()
{
	setlocale(LC_ALL, "rus");

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Class for you"/*, sf::Style::Fullscreen*/);
	window.setFramerateLimit(30);

	sf::Font font;
	font.loadFromFile("arial.ttf");

	font_mox.loadFromFile("rus.ttf");

	sf::Text txt;
	txt.setFont(font);
	txt.setCharacterSize(65);
	txt.setFillColor(sf::Color::Blue);

	sf::Image fon_image;
	fon_image.loadFromFile("image/Fon.png");
	sf::Texture fon_texture;
	fon_texture.loadFromImage(fon_image);
	sf::Sprite fon_sprite;
	fon_sprite.setTexture(fon_texture);

	sf::Image fon_1_image;
	fon_1_image.loadFromFile("image/Fon_1.png");
	sf::Texture fon_1_texture;
	fon_1_texture.loadFromImage(fon_1_image);
	sf::Sprite fon_1_sprite;
	fon_1_sprite.setTexture(fon_1_texture);

	sf::Image fon_2_image;
	fon_2_image.loadFromFile("image/Fon_2.png");
	sf::Texture fon_2_texture;
	fon_2_texture.loadFromImage(fon_2_image);
	sf::Sprite fon_2_sprite;
	fon_2_sprite.setTexture(fon_2_texture);

	sf::Image fon_3_image;
	fon_3_image.loadFromFile("image/Fon_3.png");
	sf::Texture fon_3_texture;
	fon_3_texture.loadFromImage(fon_3_image);
	sf::Sprite fon_3_sprite;
	fon_3_sprite.setTexture(fon_3_texture);

	sf::Image fon_4_image;
	fon_4_image.loadFromFile("image/Fon_4.png");
	sf::Texture fon_4_texture;
	fon_4_texture.loadFromImage(fon_4_image);
	sf::Sprite fon_4_sprite;
	fon_4_sprite.setTexture(fon_4_texture);

	sf::Image fon_5_image;
	fon_5_image.loadFromFile("image/Fon_5.png");
	sf::Texture fon_5_texture;
	fon_5_texture.loadFromImage(fon_5_image);
	sf::Sprite fon_5_sprite;
	fon_5_sprite.setTexture(fon_5_texture);

	sf::Image fon_6_image;
	fon_6_image.loadFromFile("image/Fon_6.png");
	sf::Texture fon_6_texture;
	fon_6_texture.loadFromImage(fon_6_image);
	sf::Sprite fon_6_sprite;
	fon_6_sprite.setTexture(fon_6_texture);

	sf::Image fon_7_image;
	fon_7_image.loadFromFile("image/Fon_7.png");
	sf::Texture fon_7_texture;
	fon_7_texture.loadFromImage(fon_7_image);
	sf::Sprite fon_7_sprite;
	fon_7_sprite.setTexture(fon_7_texture);

	sf::Image mox_image;
	mox_image.loadFromFile("image/Mox.png");
	sf::Texture mox_texture;
	mox_texture.loadFromImage(mox_image);
	sf::Sprite mox_sprite;
	mox_sprite.setTexture(mox_texture);

	sf::Image mak_image;
	mak_image.loadFromFile("image/mak.png");
	sf::Texture mak_texture;
	mak_texture.loadFromImage(mak_image);
	sf::Sprite mak_sprite;
	mak_sprite.setTexture(mak_texture);

	sf::Image roza_image;
	roza_image.loadFromFile("image/roza.png");
	sf::Texture roza_texture;
	roza_texture.loadFromImage(roza_image);
	sf::Sprite roza_sprite;
	roza_sprite.setTexture(roza_texture);

	int key = -1;

	bool a = true;

	std::string text;

	rast mox, mak, roza;
	


	while (window.isOpen())

	{

		sf::Event event;

		while (window.pollEvent(event))

		{

			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
			if (key > -10000)
			{
				if (!text.empty())
				{
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
					{
						text.pop_back();

						if (!text.empty())
						{
							txt.setString(text.substr(1, text.size()));
						}
					}
				}

				if (event.type == sf::Event::TextEntered)
				{
					if (event.text.unicode == '\b' && !text.empty())
					{
						text.pop_back();
					}

					else
					{
						text += event.text.unicode;

					}

					txt.setString(text.substr(1, text.size() - 1));
				}

			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1) && a == true)
			{
				key = 1;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
			{
				key = -1;
				a = true;
				text.clear();
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) && a == true)
			{
				key = 2;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) && a == true)
			{
				key = 3;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4) && a == true)
			{
				key = 4;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5) && a == true)
			{
				key = 5;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && a == true)
			{
				key = 10000;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			{
				window.close();
				a = true;
			}

		}


		window.clear();

		if (key == 1)
		{
			a = false;

			window.draw(fon_1_sprite);

			window.draw(txt);

		    
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				if (!text.empty())
					text.erase(text.begin()); // Текст не пустой и удаляет первый символ
				if (!text.empty()) {
					int l = atoi(text.c_str()); // atoi перевод текста в циферы. c_str из текста в const char* (atoi работает с const char*) а текст типа string
					if (l <= 15)
					{
						mox.input(0, 0, l);

						mox.output();

						key = 6;
					}
					else if (l <= 45 && l > 15)
					{
						mak.input(0, 0, l);

						mak.output();

						key = 7;

					}
					else if (l > 45 && l <= 80)
					{
						roza.input(0, 0, l);

						roza.output();

						key = 8;
					}
				}
				text.clear();
			}
		}


		/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2) || sf::Keyboard::isKeyPressed(sf::Keyboard::Num3) || sf::Keyboard::isKeyPressed(sf::Keyboard::Num4)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Num5) || sf::Keyboard::isKeyPressed(sf::Keyboard::Num6)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Num7) || sf::Keyboard::isKeyPressed(sf::Keyboard::Num8)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Num9) || sf::Keyboard::isKeyPressed(sf::Keyboard::Num0)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Tab) || sf::Keyboard::isKeyPressed(sf::Keyboard::Q)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::W) || sf::Keyboard::isKeyPressed(sf::Keyboard::E)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::R) || sf::Keyboard::isKeyPressed(sf::Keyboard::T)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Y) || sf::Keyboard::isKeyPressed(sf::Keyboard::U)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::I) || sf::Keyboard::isKeyPressed(sf::Keyboard::O)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::P) || sf::Keyboard::isKeyPressed(sf::Keyboard::A)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::S) || sf::Keyboard::isKeyPressed(sf::Keyboard::D)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::F) || sf::Keyboard::isKeyPressed(sf::Keyboard::G)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::H) || sf::Keyboard::isKeyPressed(sf::Keyboard::J)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::K) || sf::Keyboard::isKeyPressed(sf::Keyboard::L)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::Z) || sf::Keyboard::isKeyPressed(sf::Keyboard::C)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::V) || sf::Keyboard::isKeyPressed(sf::Keyboard::B)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::N) || sf::Keyboard::isKeyPressed(sf::Keyboard::M)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::LShift) || sf::Keyboard::isKeyPressed(sf::Keyboard::RShift)
			|| sf::Keyboard::isKeyPressed(sf::Keyboard::LAlt) || sf::Keyboard::isKeyPressed(sf::Keyboard::RAlt))

		{
			key = 22;
		}*/


		else if (key == 2)
		{
			a = false;

			window.draw(fon_2_sprite);
		}

		else if (key == 3)
		{
			a = false;

			window.draw(fon_3_sprite);
		}

		else if (key == 4)
		{
			a = false;

			window.draw(fon_4_sprite);
		}

		else if (key == 5)
		{
			a = false;

			window.draw(fon_5_sprite);
		}

		else if (key == 10000)
		{
			a = false;

			window.draw(fon_6_sprite);
		}

		else if (key == 6)
		{
			a = false;

			window.draw(mox_sprite);

			window.draw(mox.text);
		}

		else if (key == 7)
		{
			a = false;

			window.draw(mak_sprite);

			mak.text.setPosition(1130, 450);

			window.draw(mak.text);
			
        }

		else if (key == 8)
		{
			a = false;

			window.draw(roza_sprite);

			roza.text.setPosition(1150, 280);

			window.draw(roza.text);
		}

		else if (key == 22)
		{
			a = false;

			window.draw(fon_7_sprite);

			mox.text.setPosition(700, 480);
			
			window.draw(mox.text);
		}

		else
		{
			a = true;

			window.draw(fon_sprite);
		}

		window.display();

	}

	return 0;

}