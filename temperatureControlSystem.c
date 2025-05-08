#include<stdio.h>
// Function declaration/Function prototypes
float convertToFahrenheit(float celsius);
void checkComfortLevel(float current_tempF,float desired_temp_F);
int main(){
    float current_tempC,current_tempF,desired_temp_C;
    printf("SMART HOME Temperature Control System \n\n");
    
    // Get current temperature in Celsius
    printf("Enter current temperature in Celsius: ");
    scanf("%f", &current_tempC);
    
    // Get desired temperature in Celsius
    printf("Enter desired temperature min in Celsius: ");
    scanf("%f", & desired_temp_C);


    //FUNCTION CALLING*** & Temperature conversion
    float desired_temp_F = convertToFahrenheit(desired_temp_C);


    current_tempF = convertToFahrenheit(current_tempC);

    //showing coverted temperatures to °F
    printf("desired_temp_minF: %.1f°F)\n",desired_temp_F);

printf("%.1f °F is the current_temp\n",current_tempF);

printf("\nSystem Status: ");
       checkComfortLevel(current_tempF,desired_temp_F);


    return 0;
}
//FUNCTION DEFINITION***
//FUNCTION TO CONVERT CELSIUS TO FAHRENHEIT
float convertToFahrenheit(float  to_celsius)
{return (to_celsius*9.0f/5.0f)+32;}

//FUNCTION TO CHECK  COMFORT LEVEL  BASED ON CURRENT AND DESIRED TEMPERATURE
void checkComfortLevel(float current_tempF,float desired_temp_F){
     if(current_tempF < desired_temp_F - 3){
        printf("Heating\n");
     } else if(current_tempF > desired_temp_F + 3){
            printf("cooling\n");
     } else { printf("IDEAL\n");}

    }

/*
LUBEGA RAYMOND VICTOR            2024/DCS/DAY/1692
KATUMBA DOUGLAS                  2024/DCS/DAY/0999
ATAMA DISMAS                     2024/DCS/DAY/1527
ABOTH MARTHA                     2024/DCS/DAY/1934
NANKUNDA AGATHA                  2024/DCS/DAY/0318
SSALI FRANK                      2024/DCS/DAY/0915
*/
