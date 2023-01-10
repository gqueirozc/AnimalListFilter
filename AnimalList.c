#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){

	setlocale(LC_ALL, "Portuguese");
	int escolha;
	
	printf("=======Descubra um animal=======\n");
	printf("O animal que deseja é Mamifero?\n");
	printf("1. Sim\n2.Nao\n>>> ");
	scanf("%i", &escolha);
	if(escolha == 1){
		printf("O mamifero que deseja é quadrúpede?\n");
		printf("1. Sim\n2.Nao\n>>>");	
		scanf("%i", &escolha);		
			if(escolha == 1){
				printf("O mamifero que deseja é carnivoro?\n");
				printf("1. Sim\n2.Nao\n>>> ");	
				scanf("%i", &escolha);				
					if(escolha == 1){
						system("cls");
						printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
						printf("O animal escolhido foi o LEÃO!\n");
						printf("Características:\n-Mamifero\n-Quadrupede\n-Carnivoro");
						continuarJogando();						
					}else if(escolha == 2){
						printf("O mamifero que deseja é herbivoro?\n");
						printf("1. Sim\n2.Nao\n>>> ");	
						scanf("%i", &escolha);						
						if(escolha ==1){
							system("cls");
							printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
							printf("O mamifero escolhido foi o CAVALO!\n");
							printf("Características:\n-Mamifero\n-Quadrupede\n-Herbivoro");
							continuarJogando();
						}else if(escolha == 2){
							system("cls");
							printf("Não encontramos o animal... Tente novamente!");
							system("pause");
							continuarJogando();
						}
					}
			}else if(escolha == 2){
				printf("O mamifero que deseja é bipede?\n");
				printf("1. Sim\n2.Nao\n>>>");	
				scanf("%i", &escolha);
					if(escolha == 1){
							printf("O mamifero que deseja é onivoro?\n");
							printf("1. Sim\n2.Nao\n>>> ");	
							scanf("%i", &escolha);							
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O mamifero escolhido foi o HOMEM!\n");
									printf("Características:\n-Mamifero\n-Bipede\n-Onivoro");
									continuarJogando();
									
								}else if(escolha == 2){
									printf("O mamifero que deseja é frutívoro?\n");
									printf("1. Sim\n2.Nao\n>>> ");	
									scanf("%i", &escolha);
										if(escolha ==1){
											system("cls");
											printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
											printf("O mamifero escolhido foi o MACACO!\n");
											printf("Características:\n-Mamifero\n-Bipede\n-Frutivoro");
											continuarJogando();
										}else if(escolha == 2){
											system("cls");
											printf("Não encontramos o animal... Tente novamente!");
											system("pause");
											continuarJogando();
										}
								}
					}else if (escolha == 2){
							printf("O mamifero que deseja é voador?\n");
							printf("1. Sim\n2.Nao\n>>>");	
							scanf("%i", &escolha);
							if(escolha == 1){
								system("cls");
								printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
								printf("O mamifero escolhido foi o MORCEGO!\n");
								printf("Características:\n-Mamifero\n-Voador");
								continuarJogando();
							}else if(escolha == 2){
								printf("O mamifero que deseja é aquatico?\n");
								printf("1. Sim\n2.Nao\n>>>");	
								scanf("%i", &escolha);
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O mamifero escolhido foi a BALEIA!\n");
									printf("Características:\n-Mamifero\n-Aquatico");
									continuarJogando();
								}else if(escolha == 2){
									system("cls");
									printf("Não encontramos o animal... Tente novamente!");
									system("pause");
									continuarJogando();
								}
							}
					}
			}
		}else if(escolha == 2){
			printf("O animal que deseja é Ave?\n");
			printf("1. Sim\n2.Nao\n>>> ");
			scanf("%i", &escolha);
				if(escolha == 1){
				printf("A ave que deseja é Não voadora?\n");
				printf("1. Sim\n2.Nao\n>>>");	
				scanf("%i", &escolha);
					if(escolha == 1){
							printf("A ave que deseja é Tropical?\n");
							printf("1. Sim\n2.Nao\n>>> ");	
							scanf("%i", &escolha);							
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("A ave escolhida foi o AVESTRUZ!\n");
									printf("Características:\n-Ave\n-Não Voador\n-Tropical");
									continuarJogando();
								}else if(escolha == 2){
									printf("A ave que deseja é Polar?\n");
									printf("1. Sim\n2.Nao\n>>> ");	
									scanf("%i", &escolha);
										if(escolha ==1){
											system("cls");
											printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
											printf("A ave escolhida foi o PINGUIM!\n");
											printf("Características:\n-Ave\n-Não voador\n-Polar");
											continuarJogando();
										}else if(escolha == 2){
											system("cls");
											printf("Não encontramos o animal... Tente novamente!");
											continuarJogando();
										}
								}
					}else if (escolha == 2){
							printf("A ave que deseja é Nadadora?\n");
							printf("1. Sim\n2.Nao\n>>>");	
							scanf("%i", &escolha);
							if(escolha == 1){
								system("cls");
								printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
								printf("A ave escolhida foi o PATO!\n");
								printf("Características:\n-Ave\n-Nadador");
								continuarJogando();
							}else if(escolha == 2){
								printf("A ave que deseja é de rapina?\n");
								printf("1. Sim\n2.Nao\n>>>");	
								scanf("%i", &escolha);
								if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O animal escolhido foi a ÁGUIA!\n");
									printf("Características:\n-Ave\n-Rapina");
									continuarJogando();
								}else if(escolha == 2){
									system("cls");
									printf("Não encontramos o animal... Tente novamente!");
									continuarJogando();
								}
							}
					}
				}else if(escolha == 2){
					printf("O animal que deseja é um Réptil?\n");
					printf("1. Sim\n2.Nao\n>>> ");
					scanf("%i", &escolha);
						if(escolha == 1){
						printf("O réptil que deseja é com casco?\n");
						printf("1. Sim\n2.Nao\n>>>");	
						scanf("%i", &escolha);
							if(escolha == 1){
									system("cls");
									printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
									printf("O réptil escolhido foi a TARTARUGA!\n");
									printf("Características:\n-Réptil\n-Com casco");
									continuarJogando();
							}else if (escolha == 2){
									printf("O réptil que deseja é carnívoro?\n");
									printf("1. Sim\n2.Nao\n>>>");	
									scanf("%i", &escolha);
									if(escolha == 1){
										system("cls");
										printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
										printf("O réptil escolhido foi o CROCODILO!\n");
										printf("Características:\n-Réptil\n-Carnívoro");
										continuarJogando();
									}else if(escolha == 2){
											printf("O réptil que deseja é sem patas?\n");
											printf("1. Sim\n2.Nao\n>>>");	
											scanf("%i", &escolha);
											if(escolha == 1){
												system("cls");
												printf("@@@@@ ESCOLHA FINALIZADA @@@@@\n");
												printf("O réptil escolhido foi a COBRA!\n");
												printf("Características:\n-Réptil\n-Sem patas");
												continuarJogando();
												}else if(escolha == 2){
													system("cls");
													printf("Não encontramos o animal... Tente novamente!");
													continuarJogando();
												}
											}
							}
				}else if(escolha == 2){
						system("cls");
						printf("Não encontramos o animal... Tente novamente!");
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

