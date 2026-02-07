#include <stdio.h>

int avg(float av[], int size); //this will calculate the avarage grade and returns it
void letter(float avg);	//this will switch the avarge to letters (AA OR FD etc.) and print it

int main(void)	{	// main function takes the values from user and send them to functions
	
	int lessonnumber;
	
	printf("how many lessons do you have? ");
	scanf("%d", &lessonnumber);
	
	float a[lessonnumber];
	
	for(int count=1; count <= lessonnumber; count++)	//it creates the array
	{
		printf("\nenter your %d. grade: ", count);
		scanf("%f", &a[count-1]);
	}
	
	float avgmain = avg(a, lessonnumber);
	
	letter(avgmain);
	
	return 0;
}

int avg(float av[], int size)	{
	
	float sum = 0;
	for(int count = 0 ; count < size; count++)	//it calculates the sum
	{
		sum += av[count];
	}
	
	float avarage = sum / size;
	
	return(avarage);
}

void letter(float avg) {
	
	if (avg >= 90 && avg<=100)	//this could be better but it works
	{
		printf("\nyour score is AA");
	}	
	else if(avg <90 && avg >=85)
	{
		printf("\nyour score is BA");
	}
	else if(avg >= 80 && avg < 85)
	{
		printf("\nyour score is BB");
	}
	else if(avg >= 75 && avg < 80)
	{
		printf("\nyour score is CB");
	}
	else if(avg>=70 && avg <75)
	{
		printf("\nyour score is CC");
	}
	else if(avg>=65 && avg<70)
	{
		printf("\nyour score is DC");
	}
	else if(avg>=60 && avg<65)
	{
		printf("\nyour score is DD");
	}
	else if(avg>=50 && avg<60)
	{
		printf("\nyour score is FD");
	}
	else if(avg>=0 && avg<50)
	{
		printf("\nyour score is FF");
	}
	else
	{
		printf("you gave an invalid value!");
	}

}