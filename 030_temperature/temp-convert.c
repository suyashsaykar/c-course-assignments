#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float cToFahrenheit(float c)
{
    return (c * 9 / 5) + 32;
}

float fToCelsius(float f)
{
    return (f - 32) * 5 / 9;
}

float cToKelvin(float c)
{
    return c + 273.15;
}

float kToCelsius(float k)
{
    return k - 273.15;
}

int main(int argc, char const *argv[])
{
    float convertTemp = 0.0;
    if (argc >= 3)
    {
        if ((strcmp(argv[1],"C") == 0 || strcmp(argv[1],"c") == 0 || strcmp(argv[1],"Celcius") == 0 || strcmp(argv[1],"celcius") == 0 || strcmp(argv[1],"°C") == 0) &&
           (strcmp(argv[2],"F") == 0 || strcmp(argv[2],"f") == 0 || strcmp(argv[2],"Fahrenheit") == 0 || strcmp(argv[2],"fahrenheit") == 0 || strcmp(argv[2],"°F") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            for (size_t tempArg = 3; tempArg < argc; tempArg++)
            {
                convertTemp = cToFahrenheit(atof(argv[tempArg]));
                printf("%.2fC :%.2fF\n",atof(argv[tempArg]),convertTemp);            
            }
        }

        else if ((strcmp(argv[2],"C") == 0 || strcmp(argv[2],"c") == 0 || strcmp(argv[2],"Celcius") == 0 || strcmp(argv[2],"celcius") == 0 || strcmp(argv[2],"°C") == 0) &&
           (strcmp(argv[1],"F") == 0 || strcmp(argv[1],"f") == 0 || strcmp(argv[1],"Fahrenheit") == 0 || strcmp(argv[1],"fahrenheit") == 0 || strcmp(argv[1],"°F") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            for (size_t tempArg = 3; tempArg < argc; tempArg++)
            {
                convertTemp = fToCelsius(atof(argv[tempArg]));
                printf("%.2fF :%.2fC\n",atof(argv[tempArg]),convertTemp);            
            }
        }

        else if ((strcmp(argv[1],"C") == 0 || strcmp(argv[1],"c") == 0 || strcmp(argv[1],"Celcius") == 0 || strcmp(argv[1],"celcius") == 0 || strcmp(argv[1],"°C") == 0) &&
           (strcmp(argv[2],"K") == 0 || strcmp(argv[2],"k") == 0 || strcmp(argv[2],"Kelvin") == 0 || strcmp(argv[2],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            for (size_t tempArg = 3; tempArg < argc; tempArg++)
            {
                convertTemp = cToKelvin(atof(argv[tempArg]));
                printf("%.2fC :%.2fK\n",atof(argv[tempArg]),convertTemp);            
            }
        }

        else if ((strcmp(argv[2],"C") == 0 || strcmp(argv[2],"c") == 0 || strcmp(argv[2],"Celcius") == 0 || strcmp(argv[2],"celcius") == 0 || strcmp(argv[2],"°C") == 0) &&
                 (strcmp(argv[1],"K") == 0 || strcmp(argv[1],"k") == 0 || strcmp(argv[1],"Kelvin") == 0 || strcmp(argv[1],"kelvin") == 0))
        {
            if (argc == 3)
            {
                puts("");
            }
            for (size_t tempArg = 3; tempArg < argc; tempArg++)
            {
                convertTemp = kToCelsius(atof(argv[tempArg]));
                printf("%.2fK :%.2fC\n",atof(argv[tempArg]),convertTemp);            
            }
        }
        
        else
        {
            fprintf(stderr,"%s: error: Not enough arguments.\n Usage: %s INPUT_SCALE OUTPUT_SCALE [TEMPERATURE]...",argv[0],argv[0]);
        }
    }
    return EXIT_SUCCESS;
}
