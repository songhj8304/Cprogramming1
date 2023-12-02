#include<stdio.h>
#include<string.h>

typedef struct info {
	char name[30];
	char country[30];
	char population[20];
}Info;

int main(void) {
	Info arr[3];
	printf("Input three cities: \n");

	for (int i = 0; i < 3; i++) {
		printf("Name> "); fgets(arr[i].name, sizeof(arr[i].name),stdin);
		printf("Country> "); fgets(arr[i].country, sizeof(arr[i].country),stdin);
		printf("Population> "); fgets(arr[i].population,sizeof(arr[i].population),stdin);
		
	}
	for (int i = 0; i < 3; i++) {
		arr[i].name[strlen(arr[i].name)-1] = 0;
		arr[i].country[strlen(arr[i].country)-1] = 0;
		arr[i].population[strlen(arr[i].population)-1] = 0;
	}
	
	printf("Printing the three cities: \n");
	for (int i = 0; i < 3; i++) {
		printf("%d. %s in %s with a population of %s people\n", i+1,arr[i].name, arr[i].country, arr[i].population);
	}
	return 0;
}