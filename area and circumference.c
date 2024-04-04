/*#include<stdio.h>
int area(float radii);
int perii(float radii);
int main(){
float radii , k;
printf("enter the radius of circle : ");
scanf("%.2f" , &radii);
k = area(radii);
printf("Area is %.2f\n", k);
float z = perii(radii);
printf("circumference is %.2f\n", z);


}
int area(float radii){

float area = 3.14*radii*radii;
return area;

}
int perii(float radii){
 float perimeter = 2*3.14*radii;
 return perimeter;


}

#include <stdio.h>

float area(float radii); // Function prototype for calculating area
float perii(float radii); // Function prototype for calculating circumference

int main() {
    float radii, k, z;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radii);

    k = area(radii);
    printf("Area is %.2f\n", k);

    z = perii(radii);
    printf("Circumference is %.2f\n", z);

    return 0;
}

// Function to calculate the area of the circle
float area(float radii) {
    float area = 3.14 * radii * radii;
    return area;
}

// Function to calculate the circumference of the circle
float perii(float radii) {
    float perimeter = 2 * 3.14 * radii;
    return perimeter;
}
*/
#include <stdio.h>

// Function prototypes
void swapByValue(int x, int y);
void swapByReference(int *x, int *y);

int main() {
    int a = 10, b = 20;

    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call by value
    swapByValue(a, b);
    printf("After swapping by value:\n");
    printf("a = %d, b = %d\n", a, b);

    // Call by reference
    swapByReference(&a, &b);
    printf("After swapping by reference:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

// Function definitions
void swapByValue(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapByReference(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
