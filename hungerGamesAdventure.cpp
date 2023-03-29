//
// Created by felic on 7/12/2022.
//
#include <iostream>
#include "hungerGamesAdventure.h"

int veryBadChoice (int points, std::string event)
{
    std::cout << "TERRIBLE choice!" << event << "You lost all your points!" << std::endl;
    points -= points;
    pointsRemaining(points);
    return points;
}

int badChoice (int points, std::string event)
{
    std::cout << "Bad choice!" << event << "You lost 25 points!" << std::endl;
    points -= 50;
    pointsRemaining(points);
    return points;
}

int wiseChoice (int points, std::string event)
{
    std::cout << "Good choice!" << event << "You gained 25 points!" << std::endl;
    points += 25;
    pointsRemaining(points);
    return points;
}
int okChoice (int points, std::string event) {
    std::cout << event << "You did not gain or lose points!" << std::endl;
    pointsRemaining(points);
    return points;
}
void pointsRemaining (int points)
{
    std::cout << "You have " << points << " points remaining.\n";
    std::cout << " \n";
}