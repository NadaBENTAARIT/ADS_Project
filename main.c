#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "source/arbre.h"
#include "source/arbre.c"



int main(int argc, char **argv)
{
   TArbre a=NULL;
   int test;

   test= arbreEstVide(a);
   printf("l'arbre est il vide?   %d  \n",test);

   return 0;
}

