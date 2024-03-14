#include <stdio.h>
#include <stdlib.h>

int n = 0;

void function_1(){
FILE *fptr;

fptr = fopen("bonjour.txt", "r");

char myString[100];

while(fgets(myString, 100, fptr)) {

  printf("%s\n", myString);

}

fclose(fptr);

}

void function_2(){
FILE *fptr;

// Open a file in writing mode
fptr = fopen("bonjour.txt", "w");

// Write some text to the file
fprintf(fptr, "Bonjour les futurs développeurs\nBonjour les futurs développeurs");

// Close the file
fclose(fptr);
}

void function_3(){
    FILE *fichier;
    int compteur = 0;


    fichier = fopen("compteur.txt", "r");
    if (fichier != NULL) {
        fscanf(fichier, "%d", &compteur);
        fclose(fichier);
    }

    compteur++;

    fichier = fopen("compteur.txt", "w");
    if (fichier != NULL) {
        fprintf(fichier, "%d", compteur);
        fclose(fichier);
    } else {
        printf("Erreur lors de l'ecriture\n");
        return 1;
    }

    printf("J'ai ete execute %d fois!\n", compteur);
}

void function_4(){
FILE *fptr;
fptr = fopen("bonjour.txt", "r");
char myString[100];
int x=0;
int y=0;

while(fgets(myString, 100, fptr)) {
for(int i=0;myString[i];i++){
  x++;
  if(myString[i]==' '){
    y++;
    }
}
y++;
}
printf("il y a %d caractères  dans le fichier\n", x);
printf("il y a %d mot  dans le fichier", y);

fclose(fptr);
}


int main()
{
function_1();
function_4();

}
