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
    sf::Rect<float> Shape;
    sf::Keyboard::Key UpKey = sf::Keyboard::Up;
    sf::Keyboard::Key DownKey = sf::Keyboard::Down;
    
    sf::Vector2<float> GetPostion();
    sf::Vector2<float> GetSize();
    
    void SetSize(sf::Vector2<float>);
    void SetPosition(sf::Vector2<float>);
    
    Bat(sf::Rect<float> _shape, sf::Keyboard::Key _upKey, sf::Keyboard::Key _downKey);
private:
    float velocity; //Float becuase we only want yMovement
};

#endif /* Bat_hpp */
