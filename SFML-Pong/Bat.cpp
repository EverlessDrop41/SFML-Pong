//
//  Bat.cpp
//  SFML-Pong
//
//  Created by Emily Peregrine on 26/09/2015.
//  Copyright © 2015 Emily Peregrine. All rights reserved.
//

#include <stdio.h>
#include <SFML/Graphics.hpp>

#include "Bat.hpp"


Bat::Bat(sf::Rect<float> _shape, sf::Keyboard::Key _upKey, sf::Keyboard::Key _downKey) {
    this->Shape = _shape;
    this->UpKey = _upKey;
    this->DownKey = _downKey;
}

void Bat::SetSize(sf::Vector2<float> _size) {
    this->Shape.height = _size.y;
    this->Shape.width = _size.x;
}

void Bat::SetPosition(sf::Vector2<float> _pos) {
    this->Shape.left = _pos.x;
    this->Shape.top = _pos.y;
}

sf::Vector2<float> Bat::GetPostion() {
    sf::Vector2<float> positon(this->Shape.left, this->Shape.top);
    return positon;
}

sf::Vector2<float> Bat::GetSize() {
    sf::Vector2<float> size(this->Shape.width, this->Shape.height);
    return size;
}