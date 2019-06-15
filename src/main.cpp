#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include "partie.hpp"


int main()
{
    srand(time(NULL)); // initialisation de rand

    Partie partie;
    sf::UdpSocket socket;
    if (socket.bind(4500) != sf::Socket::Done)
    {
        cout << "BINDERROR" << endl;
    }
    cout << "BINDED" << endl;
    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Age Of Du Riche v0.01");
    while (window.isOpen())
    {
        sf::Packet packet;
        sf::IpAddress sender;
        unsigned short port;
        if (socket.receive(packet, sender, port) != sf::Socket::Done) {
            cout << "ERROR RECEIVING PACKETS" << endl;
        }
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        Mouse souris {
            sf::Mouse::getPosition(window),
            sf::Mouse::isButtonPressed(sf::Mouse::Left),
            sf::Mouse::isButtonPressed(sf::Mouse::Right)
        };
        partie.setSouris(souris);
        Mouse netMouse;
        packet >> netMouse.position.x >> netMouse.position.y;
        packet >> netMouse.leftPressed >> netMouse.rightPressed;
        sf::CircleShape sousou(10.f);
        sousou.setFillColor(sf::Color::Green);
        sousou.setPosition(sf::Vector2f(netMouse.position.x, netMouse.position.y));
        partie.update();
        window.clear();
        window.draw(partie);
        window.draw(sousou);
        window.display();
    }
    sf::Time GeneralTime;

    return 0;
}
