#include "Window.h"

#include <SFML/Graphics.hpp>

#include <string>

int main() {
    constexpr int width = 500;
    constexpr int height = 500;     // set the resolutin;
    Window hud{ width, height };

    sf::RenderWindow window(sf::VideoMode(width, height), "Game of Life",
        sf::Style::Titlebar | sf::Style::Close);
    window.setFramerateLimit(60);

    constexpr float update_delay = .5;
    bool is_active = false;
    int iteration = 0;
    sf::Clock clock;
    clock.restart();
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            switch (event.type) {
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::P) {               //pause the game using P key
                    is_active = !is_active;
                }

                if (!is_active && event.key.code == sf::Keyboard::U) { //update the generation using U key
                    window.setTitle(std::to_string(++iteration));
                    hud.update();
                }

                if (event.key.code == sf::Keyboard::R) {              //reset game using R key
                    is_active = false;
                    iteration = 0;
                    window.setTitle("0 Gen");
                    hud.reset();
                }

                if (event.key.code == sf::Keyboard::Q) {             // Quit the game using Q key
                    is_active = false;
                    window.close();
                }
                break;

            default:
                break;
            }
        }

        window.clear();
        int update_delta=0.5;
        if (is_active &&
            clock.getElapsedTime().asSeconds() >= update_delta) {
            window.setTitle(std::to_string(++iteration));
            hud.update();
            clock.restart();
        }

        hud.display_grid(window);

        window.display();
    }
}