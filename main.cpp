#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <thread>

#ifdef __linux__
#include <X11/Xlib.h>
#endif

#include "headers/Game.h"

int main() {
    #ifdef __linux__
    XInitThreads();
    #endif

//    std::cerr << "error2";
//    std::cerr.flush();
//    SomeClass *c = getC();
//    std::cout << c << "\n";
//    delete c;

    Game jocNou;

    jocNou.runGame();

//      sf::RenderWindow window;
//     NOTE: sync with env variable APP_WINDOW from .github/workflows/cmake.yml:30

//    window.create(sf::VideoMode({800, 700}), "My Window", sf::Style::Default);
//    window.setVerticalSyncEnabled(true);
//    window.setFramerateLimit(60);
//
//    while(window.isOpen()) {
//        sf::Event e;
//        while(window.pollEvent(e)) {
//            switch(e.type) {
//            case sf::Event::Closed:
//                window.close();
//                break;
//            case sf::Event::Resized:
//                std::cout << "New width: " << window.getSize().x << '\n'
//                          << "New height: " << window.getSize().y << '\n';
//                break;
//            case sf::Event::KeyPressed:
//                std::cout << "Received key " << (e.key.code == sf::Keyboard::X ? "X" : "(other)") << "\n";
//                break;
//            default:
//                break;
//            }
//        }
//        using namespace std::chrono_literals;
//        std::this_thread::sleep_for(300ms);
//
//        window.clear();
//        window.display();
//    }

    return 0;
}
