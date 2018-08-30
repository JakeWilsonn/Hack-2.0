/**
*Author: Jake Wilson & James Kyle Janvrin
*Date: August 29th, 2018
*
*This program will show the distance between two locations of longitude and latitude
*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(int argc, char** argv) {

double originLongitude, originLatitude, destinationLongitude, destinationLatitude;
double longitudeRadians1, longitudeRadians2, latitudeRadians1, latitudeRadians2;
double Distance;




printf("Please input your origin latitude:");
scanf("%lf", &originLatitude);

printf("Please input your origin longitude:");
scanf("%lf", &originLongitude);

printf("Please input your destination latitude:");
scanf("%lf", &destinationLatitude);

printf("Please input your destination longitude:");
scanf("%lf", &destinationLongitude);


longitudeRadians1 = originLongitude / 180 * M_PI;
latitudeRadians1 = originLatitude / 180 * M_PI;

longitudeRadians2 = destinationLongitude / 180 * M_PI;
latitudeRadians2 = destinationLatitude / 180 * M_PI;



Distance = acos(sin(latitudeRadians1)*sin(latitudeRadians2)+cos(latitudeRadians1)*cos(latitudeRadians2)*cos(longitudeRadians2-longitudeRadians1))*6371;



printf("Location distance: \n");
printf("=============== \n");

printf("Origin: (%f, %f) \n" , originLatitude, originLongitude);
printf("Destination: (%f, %f) \n" , destinationLatitude, destinationLongitude);
printf("Air Distance is %f kms\n", Distance);



  return 0;
}
