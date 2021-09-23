#pragma comment(linker, "/STACK:2000000") // для ускорения программы (не всегда)
#pragma comment(linker, "/HEAP:2000000")

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <sstream>
#include <SFML/Audio.hpp>

sf::Font font_1;

class pechenki
{
private:
	int radius_m, radius_sm;

public:
	void input(int x, int y);
	void output();
	void preobrazhenskiy()
	{
		radius_m = radius_m + radius_sm / 100;
		radius_sm = radius_sm % 100;
	}
	sf::Text text;
};

void pechenki::input(int x, int y)
{
	radius_m = x;
	radius_sm = y;
	preobrazhenskiy();
}

void pechenki::output()
{
	text.setFont(font_1);
	text.setCharacterSize(65);
	text.setFillColor(sf::Color::Blue);

	text.setString(std::to_string(radius_m) + " м " + std::to_string(radius_sm) + " см ");
	text.setPosition(700, 360);
}

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
		m = m + sm / 100;
		sm = sm % 100;
	}
	void preobrazhenskiy_1()
	{
		km = km + m / 1000;
		m = m % 1000;
	}
	sf::Text text;
};

void rast::input(int x, int y, int z)
{
	km = x;
	m = y;
	sm = z;
	preobrazhenskiy();
	preobrazhenskiy_1();
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

	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Class for you", sf::Style::Fullscreen);
	window.setFramerateLimit(30);

	sf::Font font;
	font.loadFromFile("rus.ttf");

	font_1.loadFromFile("rus.ttf");

	sf::Text txt;
	txt.setFont(font);
	txt.setCharacterSize(65);
	txt.setFillColor(sf::Color::Blue);

	sf::Texture fon_texture;
	fon_texture.loadFromFile("image/Fon.png");
	sf::Sprite fon_sprite;
	fon_sprite.setTexture(fon_texture);

	sf::Texture fon_1_texture;
	fon_1_texture.loadFromFile("image/Fon_1.png");
	sf::Sprite fon_1_sprite;
	fon_1_sprite.setTexture(fon_1_texture);

	sf::Texture fon_2_texture;
	fon_2_texture.loadFromFile("image/Fon_2.png");
	sf::Sprite fon_2_sprite;
	fon_2_sprite.setTexture(fon_2_texture);

	sf::Texture fon_3_texture;
	fon_3_texture.loadFromFile("image/Fon_3.png");
	sf::Sprite fon_3_sprite;
	fon_3_sprite.setTexture(fon_3_texture);

	sf::Texture fon_5_texture;
	fon_5_texture.loadFromFile("image/Fon_5.png");
	sf::Sprite fon_5_sprite;
	fon_5_sprite.setTexture(fon_5_texture);

	sf::Texture fon_6_texture;
	fon_6_texture.loadFromFile("image/Fon_6.png");
	sf::Sprite fon_6_sprite;
	fon_6_sprite.setTexture(fon_6_texture);

	sf::Texture fon_7_texture;
	fon_7_texture.loadFromFile("image/Fon_7.png");
	sf::Sprite fon_7_sprite;
	fon_7_sprite.setTexture(fon_7_texture);

	sf::Texture mox_texture;
	mox_texture.loadFromFile("image/Mox.png");
	sf::Sprite mox_sprite;
	mox_sprite.setTexture(mox_texture);

	sf::Texture mak_texture;
	mak_texture.loadFromFile("image/mak.png");
	sf::Sprite mak_sprite;
	mak_sprite.setTexture(mak_texture);

	sf::Texture roza_texture;
	roza_texture.loadFromFile("image/roza.png");
	sf::Sprite roza_sprite;
	roza_sprite.setTexture(roza_texture);

	sf::Texture papor_texture;
	papor_texture.loadFromFile("image/papor.png");
	sf::Sprite papor_sprite;
	papor_sprite.setTexture(papor_texture);

	sf::Texture rogoz_texture;
	rogoz_texture.loadFromFile("image/rogoz.png");
	sf::Sprite rogoz_sprite;
	rogoz_sprite.setTexture(rogoz_texture);

	sf::Texture trost_texture;
	trost_texture.loadFromFile("image/trost.png");
	sf::Sprite trost_sprite;
	trost_sprite.setTexture(trost_texture);

	sf::Texture camish_texture;
	camish_texture.loadFromFile("image/camish.png");
	sf::Sprite camish_sprite;
	camish_sprite.setTexture(camish_texture);

	sf::Texture vishn_texture;
	vishn_texture.loadFromFile("image/vishn.png");
	sf::Sprite vishn_sprite;
	vishn_sprite.setTexture(vishn_texture);

	sf::Texture orex_texture;
	orex_texture.loadFromFile("image/orex.png");
	sf::Sprite orex_sprite;
	orex_sprite.setTexture(orex_texture);

	sf::Texture bereza_texture;
	bereza_texture.loadFromFile("image/bereza.png");
	sf::Sprite bereza_sprite;
	bereza_sprite.setTexture(bereza_texture);

	sf::Texture topol_texture;
	topol_texture.loadFromFile("image/topol.png");
	sf::Sprite topol_sprite;
	topol_sprite.setTexture(topol_texture);

	sf::Texture sekvoya_texture;
	sekvoya_texture.loadFromFile("image/sekvoya.png");
	sf::Sprite sekvoya_sprite;
	sekvoya_sprite.setTexture(sekvoya_texture);

	sf::Texture Number_texture;
	Number_texture.loadFromFile("image/Number.png");
	sf::Sprite Number_sprite;
	Number_sprite.setTexture(Number_texture);

	sf::Texture oreo_mini_texture;
	oreo_mini_texture.loadFromFile("image/oreo_mini.png");
	sf::Sprite oreo_mini_sprite;
	oreo_mini_sprite.setTexture(oreo_mini_texture);

	sf::Texture oreo_texture;
	oreo_texture.loadFromFile("image/oreo.png");
	sf::Sprite oreo_sprite;
	oreo_sprite.setTexture(oreo_texture);

	sf::Texture bab_texture;
	bab_texture.loadFromFile("image/bab.png");
	sf::Sprite bab_sprite;
	bab_sprite.setTexture(bab_texture);

	sf::Music music_1;
	music_1.openFromFile("music/11.wav");
	music_1.setLoop(true); // Зацикливание музыки (повтор)

	const int coll = 7;

	sf::Texture t[coll];

	for(int i = 1; i <= coll; i++)
	{
		t[i - 1].loadFromFile("image/" + std::to_string(i) + ".png");
	}

	sf::Sprite p[coll];

	for (int i = 1; i <= coll; i++)
	{
		p[i - 1].setTexture(t[i - 1]);
	}

	sf::Music music;

	int key = -1;
	
	double current_slide = 0;

	bool a = true;

	sf::String txt2;

	rast mox, mak, roza, papor, rogoz, trost, camish, vishnya, orex, bereza, topol, sekvoya;

	car lada;

	pechenki oreo_mini, oreo, babushka;

	sf::Clock clock; // Часы - засекают время


	while (window.isOpen())

	{
		sf::Time elapsed1 = clock.getElapsedTime(); //Получают время
		float time =  elapsed1.asSeconds(); //  преобразуем в секунды
		clock.restart(); //  сбрасываем в 0
		current_slide += 0.1f * time; // путь пройденный картинками :D

		if (current_slide >= coll)
			current_slide = 0;


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
						txt2.erase(txt2.getSize() - 1, 1); //Замена аналогией из sfml ради русского языка
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

				music.stop();

				music_1.stop();
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
				key = 5;
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::C) && a == true)
			{
				key = 10000;

				music_1.play();
			}

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::X))
			{
				window.close();

				a = true;
			}

		}


		window.clear(sf::Color(94, 2, 100, 0));

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

						mox.input(0, 0, l);

						mox.output();
					}

				}
				txt2.clear();
			}
		}

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
					
					if (txt2.getSize() == 7)
					{
						lada.input(txt2);

						lada.output();

						key = 18;
					}
					//проверка на символы очень сложна :(
					else
					{
						key = 10000002;
					}
				}
			}

		}

			else if (key == 3)
			{
				a = false;

				window.draw(fon_3_sprite);

				window.draw(txt);

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{
					if (!txt2.isEmpty())
						txt2.erase(0, 1);
					if (!txt2.isEmpty()) 
					{
						int r = atoi(std::string(txt2).c_str());
						if (r <= 1)
						{
							oreo_mini.input(0, r);

							oreo_mini.output();

							key = 19;
						}
						
						else if (r > 1 && r <= 2)
						{
							oreo.input(0, r);

							oreo.output();

							key = 20;
						}

						else if (r > 2 && r <= 5)
						{
							babushka.input(0, r);

							babushka.output();

							key = 21;
						}

						else
						{
							key = 10000001;

							oreo.input(0, r);
							
							oreo.output();
						}
					}
				}
			}

			else if (key == 5)
			{
				a = false;

				window.draw(fon_5_sprite);

				window.draw(txt);

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
				{
					if (!txt2.isEmpty())
						txt2.erase(0, 1);
					if (!txt2.isEmpty())
					{
						int m = atoi(std::string(txt2).c_str());
						if (m == 1)
						{
							music.openFromFile("music/1.wav");

							music.play();
						}

						else if (m == 2)
						{
							music.openFromFile("music/2.wav");

							music.play();
						}

						else if (m == 3)
						{
							music.openFromFile("music/3.wav");

							music.play();
						}

						else if (m == 4)
						{
							music.openFromFile("music/4.wav");

							music.play();
						}

						else if (m == 5)
						{
							music.openFromFile("music/5.wav");

							music.play();
						}

						else if (m == 6)
						{
							music.openFromFile("music/6.wav");

							music.play();
						}

						else if (m == 7)
						{
							music.openFromFile("music/7.wav");

							music.play();
						}

						else if (m == 8)
						{
							music.openFromFile("music/8.wav");

							music.play();
						}

						else if (m == 9)
						{
							music.openFromFile("music/9.wav");

							music.play();
						}

						else if (m == 10)
						{
							music.openFromFile("music/10.wav");

							music.play();
						}

						else if (m > 10)
						{
							key = 10000002;
						}
					}
				}


			}

			else if (key == 10000)
			{
				a = false;

				window.draw(p[(int)(current_slide)]); // преобразование типов, нужен int
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

				lada.text.setCharacterSize(100);

				lada.text.setFillColor(sf::Color::Black);

				lada.text.setPosition(980, 420);

				window.draw(lada.text);
			}

			else if (key == 19)
			{
				a = false;

				window.draw(oreo_mini_sprite);

				oreo_mini.text.setPosition(1100, 410);

				window.draw(oreo_mini.text);
			}

			else if (key == 20)
			{
				a = false;

				window.draw(oreo_sprite);

				oreo.text.setPosition(1100, 510);

				window.draw(oreo.text);
			}

			else if (key == 21)
			{
				a = false;

				window.draw(bab_sprite);

				babushka.text.setPosition(960, 460);

				window.draw(babushka.text);
			}


			else if (key == 10000000)
			{
				a = false;
	
				window.draw(fon_7_sprite);

				mox.text.setPosition(600, 480);
				
				window.draw(mox.text);
			}

			else if (key == 10000001)
			{
				a = false;
	
				window.draw(fon_7_sprite);

				oreo.text.setPosition(700, 480);
				
				window.draw(oreo.text);
			 }

			else if (key == 10000002)
			{
				a = false;

				window.draw(fon_7_sprite);
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