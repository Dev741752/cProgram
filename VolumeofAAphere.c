#include <stdio.h>    
float myradius;          
float myvolume;          
char line_text[50];      
const float PI = 3.14159;

int main() {
printf("Input the radius of the sphere : ");  
fgets(line_text, sizeof(line_text), stdin);  
sscanf(line_text, "%f", &myradius);         

myvolume = (4.0 / 3.0) * PI * (myradius * myradius * myradius);  
printf("The volume of sphere is %f.\n", myvolume);  

return(0);   
}


