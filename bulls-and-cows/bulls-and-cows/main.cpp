//  Exercices tirés de "Programming"
// Created by André Tonic on 17/11/2017.
// Dernier cours : 09/12/2017

// Headers générés naturellement par Xcode
// #include <iostream>
// #include <math.h>

// Caractères spéciaux : [ ]   '\n'   {  }   ||


// Version initiale du Book de BS
#include "std_lib_facilities.h"




int main()
{
    /*
     int generation=0;
     cout << "Entre un nombre pour initialiser le moteur random :\n";
     cin >> generation;
     srand(generation);
     */
    
    
    vector<int>v;
    
    int coups=0;
    bool gagne=false;
    
    for (int i=0;i<4;i++)
        v.push_back(randint(10));
    
    
    while (!gagne) {
        string proposition="";
        cout << "Ta proposition en 4 chiffres :\n";
        cin >> proposition;
        vector<int>w;
        
        // décodage de la saisie et stockage dans un vecteur int pour comparaison
        for (int i=0;i<4;i++)
            w.push_back(proposition[i]-48);
        
        // Bull & Cows
        int bull=0;
        int cow=0;
        for (int i=0;i<4;i++)
        {
            
            for (int j=0;j<4;j++)
            {
                if (w[i]==v[j]&&i==j)++bull;
                if (w[i]==v[j]&&i!=j)++cow;
            }
        }
        
        
        
        if (bull==4)
            gagne=true;
        else
        {
            
            cout << "Bull = "<<bull<<'\n';
            cout << "Cow = "<<cow<<'\n';
        }
        
        ++coups;
    }
    
    cout << "Gagné en "<<coups<<" coups\n" ;
    
    
    
}
