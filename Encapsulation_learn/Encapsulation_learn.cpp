// Encapsulation_learn.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <typeinfo>
#include <string>
#include "Point.h"

void PrintBag(const std::vector<std::string>& bag)
{
    for (int i = 0; i < bag.size(); i++)
        std::cout << bag[i] << std::endl;
}

int main()
{
    Point point;
    std::string newElement;
    std::vector<std::string> bag;
    int X = 9;
    while (true) 
    {
        point.x = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));
        point.y = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));
        point.z = static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / X));

        std::cout << "In my bag I add\n";
        std::cin >> newElement;
        bag.push_back(newElement);

        if(bag.size() == 1)
            std::cout << "In my bag I have " + std::to_string(bag.size()) +  " thing :\n";
        
        else
            std::cout << "In my bag I have " + std::to_string(bag.size()) +  " things :\n";

        PrintBag(bag);

        std::cout << std::endl;
        std::cout << point.ToString();
    }
    
    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
