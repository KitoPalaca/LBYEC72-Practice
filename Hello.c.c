#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

void printNameCourse();
float computeCircleArea(float fucntionRadius);

int main(){
	
	printNameCourse();
	/********************************/
	float area;
	float radius;
	
	radius = 10;

	area = computeCircleArea(radius);
	
	printf("The Area is %f\n", area);
	
	
	return 0;
}

void printNameCourse() {
	printf("Christopher Palaca\n");
	printf("Hello LBYEC72!\n");
	
}

float computeCircleArea(float functionRadius){
	return PI * functionRadius * functionRadius;
}
