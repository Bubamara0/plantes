// Ce programme aide l'utilisateur a s'occuper de ses plantes d'intérieur en lui donnant les instructions correspondant à la plante demandée et en fonction de la saison.
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Définition d'une structure qui comprend les différentes catégories d'informations d'entretien de la plante

typedef struct
{
    string arrosage, arrosageHiver, exposition, temperature, rempotage;
}
categories;


int main(void)
{

// Déclaration des variables qui seront saisies par l'utilisateur : la plante choisie et le mois en cours
    string plante, mois;

// Tableaux de la liste des plantes comprises dans le programme et des mois d'hiver
    string listePlantes[5] = {"schefflera", "orchidée", "cactus", "ficus", "crossandra"};
    string listeMoisHiver[5] = {"janvier", "février", "mars", "novembre", "décembre"};

    categories plantes[5];
// Informations conçernant la Schefflera
    // Été
    plantes[0].arrosage = "Arrosage : Une fois par semaine. Brumiser trois à quatre fois par semaine.";
    plantes[0].exposition = "Exposition : Luminosité sans soleil direct.";
    plantes[0].temperature = "Température : 12 à 22°C. Éviter les changements brusques.";
    plantes[0].rempotage = "Rempotage : Tous les deux ans.";
    // Hiver
    plantes[0].arrosageHiver = "Arrosage : Une fois tous les dix jours. Brumiser une à deux fois par semaine";

// Orchidée
    // Été
    plantes[1].arrosage = "Arrosage : Une à deux fois par semaine.";
    plantes[1].exposition = "Exposition : Luminosité sans soleil direct.";
    plantes[1].temperature = "Température : 18 à 21°C.";
    plantes[1].rempotage = "Rempotage : Tous les deux ou trois ans.";
    // Hiver
    plantes[1].arrosageHiver = "Arrosage : Deux fois par mois";

// Cactus
    // Été
    plantes[2].arrosage = "Arrosage : Une fois par semaine par le bas du pot. ";
    plantes[2].exposition = "Exposition : Plein soleil.";
    plantes[2].temperature = "Température : Pas en-dessous de 10°C";
    plantes[2].rempotage = "Rempotage : Tous les trois à quatre ans.";
    // Hiver
    plantes[2].arrosageHiver = "Arrosage : Pas d'arrosage l'hiver afin de respecter le repos du cactus";

// Ficus
    // Été
    plantes[3].arrosage = "Arrosage : Une fois par semaine.";
    plantes[3].exposition = "Exposition : Lumière vive sans soleil direct.";
    plantes[3].temperature = "Température : 15 à 22°. Éviter les courants d'air.";
    plantes[3].rempotage = "Rempotage : Tous les deux à trois ans.";
    // Hiver
    plantes[3].arrosageHiver = "Arrosage : Une fois tous les dix jours.";

// Crossandra
    // Été
    plantes[4].arrosage = "Arrosage : Modéré et avec une eau à température ambiante. ";
    plantes[4].exposition = "Exposition : Beaucoup de lumière et un peu d'ombre l'été.";
    plantes[4].temperature = "Température : Entre 18 et 21°C. Pas en-dessous de 14°C.";
    plantes[4].rempotage = "Rempotage : Tous les deux ans.";
    // Hiver
    plantes[4].arrosageHiver = "Arrosage : Espacer les arrosages.";


// Saisie des variables par l'utilisateur
    plante = get_string("Bonjour, voici un programme qui va vous aider à entretenir correctement vos plantes.\nDe quelle plante souhaitez-vous vous occuper aujourd'hui ? \nSaisissez une variété parmi la liste suivante : schefflera, orchidée, cactus, ficus ou crossandra.\n");
    mois = get_string("En quel mois sommes nous ?\n");


// Si l'utilisateur souhaite s'occuper de la schefflera
    if (strcmp(plante, listePlantes[0]) == 0)
    {
// On vérifie si le mois actuel est compris dans la liste des mois d'hiver, si oui alors on affiche l'arrosage d'hiver
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(mois, listeMoisHiver[i]) == 0)
            {
                printf("%s\n", plantes[0].arrosageHiver);
            }

// Sinon, on affiche les informations d'arrosage pour l'été
            else
            {
                printf("%s\n", plantes[0].arrosage);
            }

// Puis on affiche le reste des informations
            printf("%s\n%s\n%s\n", plantes[0].exposition, plantes[0].temperature, plantes[0].rempotage);
            return 0;
        }
    }

// Si l'utilisateur choisi l'orchidée
    if (strcmp(plante, listePlantes[1]) == 0)
    {
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(mois, listeMoisHiver[i]) == 0)
            {
                printf("%s\n", plantes[1].arrosageHiver);
            }
            else
            {
                printf("%s\n", plantes[1].arrosage);
            }
            printf("%s\n%s\n%s\n", plantes[1].exposition, plantes[1].temperature, plantes[1].rempotage);
            return 0;
        }
    }

// Si l'utilisateur choisi le cactus
    if (strcmp(plante, listePlantes[2]) == 0)
    {
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(mois, listeMoisHiver[i]) == 0)
            {
                printf("%s\n", plantes[2].arrosageHiver);
            }
            else
            {
                printf("%s\n", plantes[2].arrosage);
            }
            printf("%s\n%s\n%s\n", plantes[2].exposition, plantes[2].temperature, plantes[2].rempotage);
            return 0;
        }
    }

// Si l'utilisateur choisi le ficus
    if (strcmp(plante, listePlantes[3]) == 0)
    {
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(mois, listeMoisHiver[i]) == 0)
            {
                printf("%s\n", plantes[3].arrosageHiver);
            }
            else
            {
                printf("%s\n", plantes[3].arrosage);
            }
            printf("%s\n%s\n%s\n", plantes[3].exposition, plantes[3].temperature, plantes[3].rempotage);
            return 0;
        }
    }

// Si l'utilisateur choisi la crossandra
    if (strcmp(plante, listePlantes[4]) == 0)
    {
        for (int i = 0; i < 7; i++)
        {
            if (strcmp(mois, listeMoisHiver[i]) == 0)
            {
                printf("%s\n", plantes[4].arrosageHiver);
            }
            else
            {
                printf("%s\n", plantes[4].arrosage);
            }
            printf("%s\n%s\n%s\n", plantes[4].exposition, plantes[4].temperature, plantes[4].rempotage);
            return 0;
        }
    }
}

