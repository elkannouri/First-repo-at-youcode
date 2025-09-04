#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int choix ;
	int nbr=0;
	
	  char titres[100][50];
	  char auteurs[100][50];
	   float prix[100];
	    int  quantites[100][50];
	   
	      
	     
	      do{ 
	        printf(" MENU PRINCIPAL \n");
	       printf(" 1. Ajouter un livre\n");
           printf(" 2. Afficher les livres\n");
           printf(" 3.Mettre à jour la quantité d'un livre\n");
            printf(" 4.Supprimer un livrE : ");
           printf("5. Afficher les nombres");
		 scanf("%d", &choix);
		 
		 switch (choix) {
            case 1:
                if (nbr >= 100) {
                    printf("Stock plein !\n");
                    break;
                }
                printf("Titre : ");
                fgets(titres[nbr], 100, stdin);
                titres[nbr][strcspn(titres[nbr], "\n")] = '\0';

                printf("Auteur : ");
                fgets(auteurs[nbr], 100, stdin);
                auteurs[nbr][strcspn(auteurs[nbr], "\n")] = '\0';

                printf("Prix : ");
                scanf("%f", &prix[nbr]);

                printf("Quantité : ");
                scanf("%d", &quantites[nbr]);
                getchar(); 

                nbr++;
                printf("Livre ajouté .\n");
                break;
                break;
            case 2:
                if (nbr == 0) {
                    printf("Aucun livre disponible.\n");
                } else {
                    for (int i = 0; i < nbr; i++) {
                        printf("\nLivre %d\n", i + 1);
                        printf("Titre : %s\n", titres[i]);
                        printf("Auteur : %s\n", auteurs[i]);
                        printf("Prix : %.2f\n", prix[i]);
                        printf("Quantité : %d\n", quantites[i]);
                    }
                }
                break;
            case 3:
                if (nbr == 0) {
                    printf("Aucun livre en stock.\n");
                    break;
                }
                {
                    char titreRecherche[50];
                    printf("Entrez le titre du livre a mettre a jour : ");
                    fgets(titreRecherche, 50, stdin);
                    titreRecherche[strcspn(titreRecherche, "\n")] = '\0';

                    int trouve = 0;
                    for (int i = 0; i < nbr; i++) {
                        if (strcmp(titres[i], titreRecherche) == 0) {
                            printf("Quantite actuelle : %d\n", quantites[i]);
                            printf("Nouvelle quantite : ");
                            scanf("%d", &quantites[i]);
                            getchar();
                            printf("Quantite mise a jour.\n");
                            trouve = 1;
                            break;
                        }
                    }
                    if (!trouve) {
                        printf("Livre non trouve.\n");
                    }
                }
                break;   
               
               
            case 4:
            	if (nbr == 0) {
                    printf("Aucun livre en stock.\n");
                    break;
                }
                {
                    char titreRecherche[50];
                    printf("Entrez le titre du livre a supprimer : ");
                    fgets(titreRecherche, 50, stdin);
                    titreRecherche[strcspn(titreRecherche, "\n")] = '\0';

                    int trouve = 0;
                    for (int i = 0; i < nbr; i++) {
                        if (strcmp(titres[i], titreRecherche) == 0) {
                           
                            for (int j = i; j < nbr - 1; j++) {
                                strcpy(titres[j], titres[j + 1]);
                                strcpy(auteurs[j], auteurs[j + 1]);
                                prix[j] = prix[j + 1];
                                quantites[j] = quantites[j + 1];
                            }
                            nbr--;
                            printf("Livre supprime.\n");
                            trouve = 1;
                            break;
                        }
                    }
                    if (!trouve) {
                        printf("Livre non trouve.\n");
                    }
                }
                break;
            	
                
               
            case 5:
                
                break;
                default:
                printf("Choix invalide, réessayez.\n");
                
                
                
                
                 printf("entre  votre  choix   0  quett   1  contuner\n");
       scanf("%d",&choix);
 }while(choix);
                
                
	  
	  
	
	
	return 0;   
}
	