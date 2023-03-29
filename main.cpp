#include <iostream>
#include "hungerGamesAdventure.h"

int main() {
    std::cout << "This is a choose your own adventure game.\nChoose wisely.\nYou will begin with 100 points.\n" << std::endl;

    std::string name;
    std::string pronouns;

    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << " \n";

    std::cout << "What is your pronoun? (she, he, they) \n";
    std::cin >> pronouns;

    int choice;
    char restart;

    do {

        int points = 100;
        std::cout << name << " is a contestant in the 74th annual Hunger Games. The countdown hits 0.\nWhat does " << pronouns << " do?\n(1) Run for the cornucopia \n(2) Run away\n(3) Try to steal someone's weapon\n(4) Grab the nearest backpack\n";
        std::cin >> choice;
        std::cout << " \n";
        if (choice == 1) {
            points = badChoice(points, " You are attacked by multiple contestants. You get away with a severe arm injury.\n");
        }
        else if (choice == 2) {
            points = okChoice(points, " You get away with no weapons or resources, but find some rope on the ground.\n");
        }
        else if (choice == 3)
        {
            points = veryBadChoice(points, " They turn around and stab you in the stomach!\n");
        }
        else if (choice == 4)
        {
            points = wiseChoice(points, " You get away with a bag of resources but no weapons.\n");
        }

        if (points > 0)
        {
            std::cout << name << " sees a young girl and she's alone. She has weapons. \nWhat does " << pronouns << " do?\n(1) Try to befriend her\n(2) Negotiate some resources for a weapon\n(3) Attack her\n(4) Try to steal her weapon without her noticing\n";
            std::cin >> choice;
            std::cout << " \n";
            if (choice == 1) {
                points = wiseChoice(points, "You form an alliance and she provides you a bow and arrow.\nWhile scavenging for food, you find out she's been killed.\n");
            }
            else if (choice == 2) {
                points = okChoice(points, "You give up your rope for a bow and arrow.");
            }
            else if (choice == 3){
                points = veryBadChoice(points, "You attack her unarmed! She stabs you in the stomach!");
            }
            else if (choice == 4){
                points = wiseChoice(points, "You manage to steal a bow and arrow without her noticing.");
            }

            if (points > 0) {
                std::cout << "You are thirsty. You hear a stream nearby, but there are voices.\nWhat do you do?\n(1) Avoid the people and try to find water elsewhere\n(2) Climb a tree to scout the area\n(3) Go to the stream\n(4) Wait it out\n";
                std::cin >> choice;
                std::cout << " \n";
                if (choice == 1) {
                    points = okChoice(points, "You find a bottle of water in the hand of a fallen contestant. Unfortunately, it only contains a sip of water.\n");
                }
                else if (choice == 2) {
                    points = wiseChoice(points, "You see another unoccupied stream. You drink water from there.\n");
                }
                else if (choice == 3){
                    points = veryBadChoice(points, "The people at the stream attack you! You die.\n");
                }
                else if (choice == 4){
                    points = badChoice(points, "You try and wait until they leave, but they don't. You have to keep moving.\n");
                }

                if (points > 0){
                std::cout << "You have to find a place to sleep. \nWhat do you do?\n(1) Climb and sleep in a tree\n(2) Spend the night in a nearby cave\n(3) Try to stay awake\n(4) Sleep in a tall grass field that you've booby trapped\n";
                std::cin >> choice;
                std::cout << " \n";
                    if (choice == 1)
                    {
                        points = badChoice(points, "A forest fire begins nearby. You escape with minor burns.\n");
                    }
                    else if (choice == 2)
                    {
                        points = okChoice(points, "A contestant spots you in the cave. They try to attack you, but you get away with no injuries.\n");
                    }
                    else if (choice == 3)
                    {
                        points = veryBadChoice(points, "You are extremely fatigued. A contestant attacks but you are too weak to fight back. You die.\n");
                    }
                    else if (choice == 4)
                    {
                        points = wiseChoice(points, "Someone tries to attack you while you're sleeping, but your booby trap kills them.\n");
                    }

                    if (points > 0){
                        std::cout << "You are one of the final two contestants. Everyone else has been eliminated.\nWhat do you do?\n(1) Hide\n(2) Try to find the last contestant\n(3) Go back to the cornucopia to gather weapons\n(4) Loot dead bodies\n";
                        std::cin >> choice;
                        std::cout << " \n";
                        if (choice == 1)
                        {
                            points = okChoice(points, "You go unnoticed until nighttime. You hear animals running towards you.\nYou run and narrowly escape. You end up on top of the cornucopia.\n");
                        }
                        if (choice == 2)
                        {
                            points = wiseChoice(points, "You see him walking towards the cornucopia. You take a shot and hit him in the shoulder. He runs and takes cover in the cornucopia. You follow.\n");
                        }
                        if (choice == 3)
                        {
                            points = badChoice(points, "The cornucopia is clear. However, as you gather weapons, you are stabbed in the back!\n");
                        }
                        if (choice == 4)
                        {
                            points = okChoice(points, "You find a couple throwing knives. As you loot, you hear animals running towards you.\nYou run and narrowly escape. You end up on top of the cornucopia.\n");
                        }

                        if (points > 0){
                            std::cout << "You are now face to face with the final contestant.\nWhat do you do?\n(1) Try to create a truce\n(2) Shoot an arrow at him\n(3) Charge at him\n(4) Run\n";
                            std::cin >> choice;
                            std::cout << " \n";
                            if (choice == 1)
                            {
                                points = veryBadChoice(points, " He takes advantage of your vulnerability and kills you!\n");
                            }
                            else if (choice == 2)
                            {
                                points = wiseChoice(points, " You hit him in the head!\n");
                            }
                            else if (choice == 3)
                            {
                                points = wiseChoice(points, " You push and manage to strangle him!\n");
                            }
                            else if (choice == 4)
                            {
                                points = veryBadChoice(points, " You try and run, but he catches up and throws a knife at you!\n");
                            }
                        }
                    }
                }
            }
        }

        if (points == 0)
        {
            std::cout << "GAME OVER! "<< name << " has been eliminated!\n";
        }
        else
        {
            std::cout << "Congratulations! "<< name << " is the winner of the 74th annual Hunger Games!\n";
            std::cout << "You won with a score of " << points << " points!\n";
        }

        std::cout << "Play again? (y/n)\n";
        std::cin >> restart;
    }
    while (tolower(restart) == 'y');

    return 0;
}
