# Snake

Cette version du jeu [Snake](https://fr.wikipedia.org/wiki/Serpentes) a été réalisée dans le cadre du [SAÉ1.01 "Implémentation d'un besoin client"](http://www.iut-fbleau.fr/sitebp/pt11/11_2023/UWO9O2WOJ7JETN3P.php) lors du premier semestre de BUT 1 à l'IUT de Fontainebleau.

## Lancement du programme
### Compilation
> Installer au préalable les [dépendances nécessaires](#dépendances) au fonctionnement du programme

Utiliser la commande suivante pour compiler le programme :
```bash
make
```
#### Méthode n°1 (recommandée) : Compiler et lancer le programme avec Make
Utiliser la commande suivante pour compiler puis lancer le programme :
```bash
make run
```

#### Méthode n°2 : Compiler puis lancer le programme
Une fois la [compilation du programme](#compilation) faite, exécuter le programme à l'aide de la commande suivante :
```bash
./game
```


## Comment jouer ?
### Les touches 
- Flèches directionnel : se déplacer en haut, en bas, à droite, à gauche
- Espace : Mettre le jeu en pause
- Échap : Quitter la partie en cours


## Fonctionnalités

### Fonctionnalités exigées
 -   Mise en pause du jeu lorsque la touche Espace est pressée
 -   Quitter la partie en cours lorsque la touche Échap est pressée
 -   Affichage du score pendant et après la partie
 -   Affichage du temps pendant et après la partie

### Fonctionnalités additionnelles

#### 4 Modes de jeu différents
- Mode classique : Affichage d'une seule pomme
- Mode MultiPomme : Affichage de 5 pommes
- Mode PartieRapide : Affichage de 25 pommes et accélération du serpent en fonction du score
- Mode Accélération : Affichage d'une seule pomme et accélération du serpent en fonction du score

#### Menues uniques
Nous avons ajouter des menues afin de faciliter l'expérience utilisateur ! 



## Dépendances
### Bibliothèque graphique de l'IUT de Fontainebleau
 -   Documentation : http://www.iut-fbleau.fr/sitebp/doc/doc_bib_graphique/
 -   Auteur : Denis Monnerat (@monnerat)

## Crédits
 -   Programme réalisé par Moncef STITI (@stiti) et Marco ORFAO (@orfao)
 
 ## Remerciements
 -   Lyanis Souidi pour son explication sur la réalisation d'un readme.md