#ifndef ARBRE_H
#define ARBRE_H


//* declaration des types publics de monModule

struct noeud {
  char c;
  int n;
  struct noeud *fg;
  struct noeud *fd;
            };

typedef struct noeud *TArbre;


//* prototype des fonctions publiques de monModule

TArbre arbreConsVide(void);
int arbreEstVide(TArbre a);
TArbre arbreCons(char c, int n, TArbre fg, TArbre fd);
char arbreRacineLettre(TArbre a);
int arbreRacineNbOcc(TArbre a);
TArbre arbreFilsGauche(TArbre a);
TArbre arbreFilsDroit(TArbre a);
void arbreSuppr(TArbre a);


#endif
