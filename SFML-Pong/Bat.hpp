//
//  Bat.hpp
//  SFML-Pong
//
//  Created by Emily Peregrine on 26/09/2015.
//  Copyright © 2015 Emily Peregrine. All rights reserved.
///Users/emilyperegrine/Documents/Code/C++/SFML-Pong/SFML-Pong/Bat.hpp

#ifndef Bat_hpp
#define Bat_hpp

#include <stdio.h>
#include <SFML/Graphics.hpp>

class Bat {
public:
    sf::RectangleShape Shape;
    sf::Keyboard::Key UpKey = sf::Keyboard::Up;
    sf::Keyboard::Key DownKey = sf::Keyboard::Down;
    
    float speed = 3;
    
    sf::Vector2<float> GetPostion();
    sf::Vector2<float> GetSize();
    
    void SetSize(sf::Vector2<float>);
    void SetPosition(sf::Vector2<float>);
    
    void Update(sf::RenderWindow*);
    void Draw(sf::RenderWindow*);
    
    Bat(sf::RectangleShape _shape, sf::Keyboard::Key _upKey, sf::Keyboard::Key _downKey);
};

#endif /* Bat_hpp */
