//inclusion des librairies standards

#include <stdio.h>


// inclusion du header de monModule  pour connaitre les types qui y sont déclarés
// et verifier les prototypes
#include "arbre.h"



// inclusion des autres headers du projet dont on a besoin



// instanciation et initialisation des variables globales


                            /* definition des fonctions */


// Retourner un arbre vide
TArbre arbreConsVide(void)
    {
        TArbre a=NULL;
        return a;
    }








// Tester si arbre vide ou non
int arbreEstVide(TArbre a)
{
	//On renvoi directement le résultat de la comparaison
	return(a == NULL);
}






// Elle construit un nouveau nœud avec la lettre et l’entier,
// puis y greffe les deux sous-arbres. 
//Nous obtenons alors un nouvel arbre dont la racine est le nœud que nous venons de créer
TArbre arbreCons(char c, int n, TArbre fg, TArbre fd)
{
TArbre a;
 struct noeud *newNode = malloc(sizeof(struct noeud));
newNode->n  = n;
newNode->c = c;
newNode->fg  = fg;
newNode->fd= fd;
a=newNode;
return(a);
}















// Retourner la lettre stockée dans le nœud racine de l’arbre passé en paramètre

char arbreRacineLettre(TArbre a)
{

	return((a->c));

}









// Retourner l'entier stocké dans le nœud racine de l’arbre passé en paramètre

int arbreRacineNbOcc(TArbre a)
{

	return((a->n));


}










// Retourne le sous-arbre fils gauche de l’arbre passé en paramètre
TArbre arbreFilsGauche(TArbre a)
{

	return((a->fg));


}










// Retourne le sous-arbre fils droit de l’arbre passé en paramètre
TArbre arbreFilsDroit(TArbre a)
{

	return((a->fd));

}












// Permet de détruire proprement l’arbre passé en paramètre
// (i.e. libère toute la mémoire qui aurait été allouée par les appels successifs à la fonction arbreCons)
void arbreSuppr(TArbre a)
{
if(a == NULL)
        return;
    /* Delete Left sub-tree */
    arbreSuppr(a->fg);
    /* Delete right sub-tree */
   arbreSuppr(a->fd);
     
    /* At last, delete root node */
    printf("Deleteing Node : %d\n", a->n);
    free(a);
     
    return;

}
