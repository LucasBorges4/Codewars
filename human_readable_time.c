#include <stdio.h>

long int div_int_hours(long int num){
    return num/=3600;
}
long int div_int_minutes(long int num){
    return num/=60;
}
char *human_readable_time (long int seconds, char *time_string){
    long int hours;
    int minutes, second;
    hours = div_int_hours(seconds);
    minutes = seconds - hours*3600;
    minutes = div_int_minutes(minutes);
    second = seconds - hours*3600 - minutes*60;
    sprintf(time_string, "%02ld:%02d:%02d", hours, minutes, second);
	return time_string;
}

/*
char *human_readable_time(unsigned seconds, char *time_string) {
    sprintf(time_string, "%02u:%02u:%02u", seconds / 3600, seconds / 60 % 60, seconds % 60);
	  return time_string;
}
*/

int main() {
   long int seconds = 45;
   char time_string[10];
   printf("%s\n", human_readable_time(seconds, time_string));
   return 0;
}