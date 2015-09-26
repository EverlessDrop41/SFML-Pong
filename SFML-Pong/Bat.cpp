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

float clip(float n, float lower, float upper) {
    return std::max(lower, std::min(n, upper));
}

Bat::Bat(sf::RectangleShape _shape, sf::Keyboard::Key _upKey, sf::Keyboard::Key _downKey) {
    this->Shape = _shape;
    this->UpKey = _upKey;
    this->DownKey = _downKey;
}

void Bat::SetSize(sf::Vector2f _size) {
    this->Shape.setSize(_size);
}

void Bat::SetPosition(sf::Vector2f _pos) {
    this->Shape.setPosition(_pos );
}

sf::Vector2<float> Bat::GetPostion() {
    return this->Shape.getPosition();
}

sf::Vector2<float> Bat::GetSize() {
    return this->Shape.getSize();
}

void Bat::Draw(sf::RenderWindow* win){
    win->draw(this->Shape);
}

void Bat::Update(sf::RenderWindow* win){
    if (sf::Keyboard::isKeyPressed(this->UpKey)) {
        float newY = this->Shape.getPosition().y + (this->speed * -1);
        newY = clip(newY, 0, win->sf::Window::getSize().y - this->GetSize().y);
        this->SetPosition(sf::Vector2f(this->GetPostion().x, newY));
    }
    
    if (sf::Keyboard::isKeyPressed(this->DownKey)) {
        float newY = this->Shape.getPosition().y + this->speed;
        newY = clip(newY, 0, win->sf::Window::getSize().y - this->GetSize().y);
        this->SetPosition(sf::Vector2f(this->GetPostion().x, newY));
    }
}