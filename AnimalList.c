#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){

	setlocale(LC_ALL, "Portuguese");
	int escolha;
	
	printf("=======Descubra um animal=======\n");
	printf("O animal que deseja � Mamifero?\n");
	printf("1. Sim\n2.Nao\n>>> ");
	scanf("%i", &escolha);
	if(escolha == 1){
		printf("O mamifero que deseja � quadr�pede?\n");
		printf("1. Sim\n2.Nao\n>>>");	
		scanf("%i", &escolha);		
			if(escolha == 1){
				printf("O mamifero que deseja � carnivoro?\n");
				printf("1. Sim\n2.Nao\n>>> ");	
				scanf("%i", &escolha);				
					if(escolha == 1){
						system("cls");
						printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
						printf("O animal escolhido foi o LE�O!\n");
						printf("Caracter�sticas:\n-Mamifero\n-Quadrupede\n-Carnivoro");
						continuarJogando();						
					}else if(escolha == 2){
						printf("O mamifero que deseja � herbivoro?\n");
						printf("1. Sim\n2.Nao\n>>> ");	
						scanf("%i", &escolha);						
						if(escolha ==1){
							system("cls");
							printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
							printf("O mamifero escolhido foi o CAVALO!\n");
							printf("Caracter�sticas:\n-Mamifero\n-Quadrupede\n-Herbivoro");
							continuarJogando();
						}else if(escolha == 2){
							system("cls");
							printf("N�o encontramos o animal... Tente novamente!");
							system("pause");
							continuarJogando();
						}
					}
			}else if(escolha == 2){
				printf("O mamifero que deseja � bipede?\n");
				printf("1. Sim\n2.Nao\n>>>");	
				scanf("%i", &escolha);
					if(escolha == 1){
							printf("O mamifero que deseja � onivoro?\n");
							printf("1. Sim\n2.Nao\n>>> ");	
							scanf("%i", &escolha);							
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O mamifero escolhido foi o HOMEM!\n");
									printf("Caracter�sticas:\n-Mamifero\n-Bipede\n-Onivoro");
									continuarJogando();
									
								}else if(escolha == 2){
									printf("O mamifero que deseja � frut�voro?\n");
									printf("1. Sim\n2.Nao\n>>> ");	
									scanf("%i", &escolha);
										if(escolha ==1){
											system("cls");
											printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
											printf("O mamifero escolhido foi o MACACO!\n");
											printf("Caracter�sticas:\n-Mamifero\n-Bipede\n-Frutivoro");
											continuarJogando();
										}else if(escolha == 2){
											system("cls");
											printf("N�o encontramos o animal... Tente novamente!");
											system("pause");
											continuarJogando();
										}
								}
					}else if (escolha == 2){
							printf("O mamifero que deseja � voador?\n");
							printf("1. Sim\n2.Nao\n>>>");	
							scanf("%i", &escolha);
							if(escolha == 1){
								system("cls");
								printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
								printf("O mamifero escolhido foi o MORCEGO!\n");
								printf("Caracter�sticas:\n-Mamifero\n-Voador");
								continuarJogando();
							}else if(escolha == 2){
								printf("O mamifero que deseja � aquatico?\n");
								printf("1. Sim\n2.Nao\n>>>");	
								scanf("%i", &escolha);
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O mamifero escolhido foi a BALEIA!\n");
									printf("Caracter�sticas:\n-Mamifero\n-Aquatico");
									continuarJogando();
								}else if(escolha == 2){
									system("cls");
									printf("N�o encontramos o animal... Tente novamente!");
									system("pause");
									continuarJogando();
								}
							}
					}
			}
		}else if(escolha == 2){
			printf("O animal que deseja � Ave?\n");
			printf("1. Sim\n2.Nao\n>>> ");
			scanf("%i", &escolha);
				if(escolha == 1){
				printf("A ave que deseja � N�o voadora?\n");
				printf("1. Sim\n2.Nao\n>>>");	
				scanf("%i", &escolha);
					if(escolha == 1){
							printf("A ave que deseja � Tropical?\n");
							printf("1. Sim\n2.Nao\n>>> ");	
							scanf("%i", &escolha);							
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("A ave escolhida foi o AVESTRUZ!\n");
									printf("Caracter�sticas:\n-Ave\n-N�o Voador\n-Tropical");
									continuarJogando();
								}else if(escolha == 2){
									printf("A ave que deseja � Polar?\n");
									printf("1. Sim\n2.Nao\n>>> ");	
									scanf("%i", &escolha);
										if(escolha ==1){
											system("cls");
											printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
											printf("A ave escolhida foi o PINGUIM!\n");
											printf("Caracter�sticas:\n-Ave\n-N�o voador\n-Polar");
											continuarJogando();
										}else if(escolha == 2){
											system("cls");
											printf("N�o encontramos o animal... Tente novamente!");
											continuarJogando();
										}
								}
					}else if (escolha == 2){
							printf("A ave que deseja � Nadadora?\n");
							printf("1. Sim\n2.Nao\n>>>");	
							scanf("%i", &escolha);
							if(escolha == 1){
								system("cls");
								printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
								printf("A ave escolhida foi o PATO!\n");
								printf("Caracter�sticas:\n-Ave\n-Nadador");
								continuarJogando();
							}else if(escolha == 2){
								printf("A ave que deseja � de rapina?\n");
								printf("1. Sim\n2.Nao\n>>>");	
								scanf("%i", &escolha);
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O animal escolhido foi a �GUIA!\n");
									printf("Caracter�sticas:\n-Ave\n-Rapina");
									continuarJogando();
								}else if(escolha == 2){
									system("cls");
									printf("N�o encontramos o animal... Tente novamente!");
									continuarJogando();
								}
							}
					}
				}else if(escolha == 2){
					printf("O animal que deseja � um R�ptil?\n");
					printf("1. Sim\n2.Nao\n>>> ");
					scanf("%i", &escolha);
						if(escolha == 1){
						printf("O r�ptil que deseja � com casco?\n");
						printf("1. Sim\n2.Nao\n>>>");	
						scanf("%i", &escolha);
							if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O r�ptil escolhido foi a TARTARUGA!\n");
									printf("Caracter�sticas:\n-R�ptil\n-Com casco");
									continuarJogando();
							}else if (escolha == 2){
									printf("O r�ptil que deseja � carn�voro?\n");
									printf("1. Sim\n2.Nao\n>>>");	
									scanf("%i", &escolha);
									if(escolha == 1){
										system("cls");
										printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
										printf("O r�ptil escolhido foi o CROCODILO!\n");
										printf("Caracter�sticas:\n-R�ptil\n-Carn�voro");
										continuarJogando();
									}else if(escolha == 2){
											printf("O r�ptil que deseja � sem patas?\n");
											printf("1. Sim\n2.Nao\n>>>");	
											scanf("%i", &escolha);
											if(escolha == 1){
												system("cls");
												printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
												printf("O r�ptil escolhido foi a COBRA!\n");
												printf("Caracter�sticas:\n-R�ptil\n-Sem patas");
												continuarJogando();
												}else if(escolha == 2){
													system("cls");
													printf("N�o encontramos o animal... Tente novamente!");
													continuarJogando();
												}
											}
							}
				}else if(escolha == 2){
						system("cls");
						printf("N�o encontramos o animal... Tente novamente!");
						continuarJogando();
				}
	}	
} 
}

void continuarJogando(){
	int escolha;
	printf("\n\nDeseja tentar novamente?\n");
	printf("1. Sim\n2.Nao\n>>> ");
	scanf("%i", &escolha);
		if(escolha == 1){
			system("cls");
			main();
		}else{
			printf("\n****************************************");
			printf("\nNome: Guilherme de Queiroz Calixto");
			printf("\nRA:   921114484");
			printf("\n      3o Semestre\n");
			system("pause");
		}
}

