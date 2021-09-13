#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>

sf::Font font_1;

class car
{
private:
	sf::String Num; 

public:
	void input(sf::String x);
	void output();
	sf::Text text;
};


void car::input(sf::String x)
{
	Num = x;
}

void car::output()
{
	text.setFont(font_1);
	text.setCharacterSize(65);
	text.setFillColor(sf::Color::Blue);

	text.setString(Num);
	text.setPosition(700, 360);
}



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
	/*std::cout << km << "км" << std::endl;
	std::cout << m << "м" << std::endl;
	std::cout << sm << "см" << std::endl;*/

	text.setFont(font_1);
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
	font.loadFromFile("rus.ttf");

	font_1.loadFromFile("rus.ttf");

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

	sf::Image papor_image;
	papor_image.loadFromFile("image/papor.png");
	sf::Texture papor_texture;
	papor_texture.loadFromImage(papor_image);
	sf::Sprite papor_sprite;
	papor_sprite.setTexture(papor_texture);

	sf::Image rogoz_image;
	rogoz_image.loadFromFile("image/rogoz.png");
	sf::Texture rogoz_texture;
	rogoz_texture.loadFromImage(rogoz_image);
	sf::Sprite rogoz_sprite;
	rogoz_sprite.setTexture(rogoz_texture);

	sf::Image trost_image;
	trost_image.loadFromFile("image/trost.png");
	sf::Texture trost_texture;
	trost_texture.loadFromImage(trost_image);
	sf::Sprite trost_sprite;
	trost_sprite.setTexture(trost_texture);

	sf::Image camish_image;
	camish_image.loadFromFile("image/camish.png");
	sf::Texture camish_texture;
	camish_texture.loadFromImage(camish_image);
	sf::Sprite camish_sprite;
	camish_sprite.setTexture(camish_texture);

	sf::Image vishn_image;
	vishn_image.loadFromFile("image/vishn.png");
	sf::Texture vishn_texture;
	vishn_texture.loadFromImage(vishn_image);
	sf::Sprite vishn_sprite;
	vishn_sprite.setTexture(vishn_texture);

	sf::Image orex_image;
	orex_image.loadFromFile("image/orex.png");
	sf::Texture orex_texture;
	orex_texture.loadFromImage(orex_image);
	sf::Sprite orex_sprite;
	orex_sprite.setTexture(orex_texture);

	sf::Image bereza_image;
	bereza_image.loadFromFile("image/bereza.png");
	sf::Texture bereza_texture;
	bereza_texture.loadFromImage(bereza_image);
	sf::Sprite bereza_sprite;
	bereza_sprite.setTexture(bereza_texture);

	sf::Image topol_image;
	topol_image.loadFromFile("image/topol.png");
	sf::Texture topol_texture;
	topol_texture.loadFromImage(topol_image);
	sf::Sprite topol_sprite;
	topol_sprite.setTexture(topol_texture);

	sf::Image sekvoya_image;
	sekvoya_image.loadFromFile("image/sekvoya.png");
	sf::Texture sekvoya_texture;
	sekvoya_texture.loadFromImage(sekvoya_image);
	sf::Sprite sekvoya_sprite;
	sekvoya_sprite.setTexture(sekvoya_texture);

	sf::Image Number_image;
	Number_image.loadFromFile("image/Number.png");
	sf::Texture Number_texture;
	Number_texture.loadFromImage(Number_image);
	sf::Sprite Number_sprite;
	Number_sprite.setTexture(Number_texture);

	int key = -1;

	bool a = true;

	rast mox, mak, roza, papor, rogoz, trost, camish, vishnya, orex, bereza, topol, sekvoya;

	car lada;

	sf::String txt2;


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
				if (!txt2.isEmpty())
				{
					if (sf::Keyboard::isKeyPressed(sf::Keyboard::Delete))
					{
						txt2.erase(txt2.getSize() - 1, 1);

						if (!txt2.isEmpty())
						{
							txt.setString(txt2.substring(1, txt2.getSize()));
						}
					}
				}

				if (event.type == sf::Event::TextEntered)
				{
					
					if (event.text.unicode == '\b' && !txt2.isEmpty())
					{
						//тоже самое  что и pop back удалил последний символ
						txt2.erase(txt2.getSize() - 1, 1); //Замена аналогией из sf ради русского языка
					}

					else
					{
						txt2 += event.text.unicode;
					}

					txt.setString(txt2.substring(1, txt2.getSize() - 1));

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

				txt2.clear();
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
				if (!txt2.isEmpty())
					txt2.erase(0, 1); // Текст не пустой и удаляет первый символ
				if (!txt2.isEmpty()) {
					int l = atoi(std::string(txt2).c_str()); // atoi перевод текста в циферы. c_str из текста в const char* (atoi работает с const char*) а текст типа string
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

					else if (l > 80 && l <= 150)
					{
						papor.input(0, 0, l);

						papor.output();

						key = 9;
					}

					else if (l > 150 && l <= 200)
					{
						rogoz.input(0, 0, l);

						rogoz.output();

						key = 10;
					}

					else if (l > 200 && l <= 400)
					{
						trost.input(0, 0, l);

						trost.output();

						key = 11;
					}

					else if (l > 400 && l <= 600)
					{
						camish.input(0, 0, l);

						camish.output();

						key = 12;
					}

					else if (l > 600 && l <= 1000)
					{
						vishnya.input(0, 0, l);

						vishnya.output();

						key = 13;
					}

					else if (l > 1000 && l <= 3000)
					{
						orex.input(0, 0, l);

						orex.output();

						key = 14;
					}

					else if (l > 3000 && l <= 4500)
					{
						bereza.input(0, 0, l);

						bereza.output();

						key = 15;
					}

					else if (l > 4500 && l <= 6000)
					{
						topol.input(0, 0, l);

						topol.output();

						key = 16;
					}

					else if (l > 6000 && l <= 11200)
					{
						sekvoya.input(0, 0, l);

						sekvoya.output();

						key = 17;
					}

					else if (l > 11200)
					{
						key = 10000000;
					}

				}
				txt2.clear();
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

			window.draw(txt);

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
			{
				if (!txt2.isEmpty())
					txt2.erase(0, 1); // Текст не пустой и удаляет первый символ
				if (!txt2.isEmpty())
				{
					//std::string c = text; std only eng, sf == rus
					
					lada.input(txt2);

					lada.output();

					key = 18;
				}
			}

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

				mak.text.setPosition(1130, 388);

				window.draw(mak.text);

			}

			else if (key == 8)
			{
				a = false;

				window.draw(roza_sprite);

				roza.text.setPosition(1150, 280);

				window.draw(roza.text);
			}

			else if (key == 9)
			{
				a = false;

				window.draw(papor_sprite);

				papor.text.setPosition(250, 380);

				window.draw(papor.text);
			}

			else if (key == 10)
			{
				a = false;

				window.draw(rogoz_sprite);

				rogoz.text.setPosition(250, 380);

				window.draw(rogoz.text);
			}

			else if (key == 11)
			{
				a = false;

				window.draw(trost_sprite);

				trost.text.setPosition(170, 385);

				window.draw(trost.text);
			}

			else if (key == 12)
			{
				a = false;

				window.draw(camish_sprite);

				camish.text.setPosition(170, 385);

				window.draw(camish.text);
			}

			else if (key == 13)
			{
				a = false;

				window.draw(vishn_sprite);

				vishnya.text.setPosition(170, 215);

				window.draw(vishnya.text);
			}

			else if (key == 14)
			{
				a = false;

				window.draw(orex_sprite);

				orex.text.setPosition(170, 400);

				window.draw(orex.text);
			}

			else if (key == 15)
			{
				a = false;

				window.draw(bereza_sprite);

				bereza.text.setPosition(120, 210);

				window.draw(bereza.text);
			}

			else if (key == 16)
			{
				a = false;

				window.draw(topol_sprite);

				topol.text.setPosition(120, 400);

				window.draw(topol.text);
			}

			else if (key == 17)
			{
				a = false;

				window.draw(sekvoya_sprite);

				sekvoya.text.setPosition(70, 195);

				window.draw(sekvoya.text);
			}

			else if (key == 18)
			{
				a = false;

				window.draw(Number_sprite);

				lada.text.setPosition(960, 460);

				window.draw(lada.text);
			}


			else if (key == 10000000)
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