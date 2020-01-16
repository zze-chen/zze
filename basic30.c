#include <stdio.h>

int main(){
	int month, date;

	scanf("%d %d", &month, &date);
	if(month == 1){
		if(date >= 21 && date<= 31){
			printf("Aquarius\n");
        }else{
			printf("Capricorn\n");
        }
	}else if(month == 2){
		if(date >= 19 && date<= 28){
			printf("Pisces\n");
        }else{
			printf("Aquarius\n");
        }
	}else if(month == 3){
		if(date >= 21 && date<= 31){
			printf("Aries\n");
        }else{
			printf("Pisces\n");
        }
	}else if(month == 4){
		if(date >= 21 && date<= 30){
			printf("Taurus\n");
        }else{
			printf("Aries\n");
        }
	}else if(month == 5){
		if(date >= 22 && date<= 31){
			printf("Gemini\n");
        }else{
			printf("Taurus\n");
        }
	}else if(month == 6){
		if(date >= 22 && date<= 30){
			printf("Cancer\n");
        }else{
			printf("Gemini\n");
        }
    }else if(month == 7){
		if(date >= 23 && date<= 31){
			printf("Leo\n");
        }else{
			printf("Cancer\n");
        }
	}else if(month == 8){
		if(date >= 24 && date<= 31){
			printf("Virgo\n");
        }else{
			printf("Leo\n");
        }
	}else if(month == 9){
		if(date >= 24 && date<= 30){
			printf("Libra\n");
        }else{
			printf("Virgo\n");
        }
	}else if(month == 10){
	    if(date >= 24 && date<= 31){
			printf("Scorpio\n");
        }else{
			printf("Libra\n");
        }
	}else if(month == 11){
		if(date >= 23 && date<= 30){
			printf("Sagittarius\n");
        }else{
			printf("Scorpio\n");
        }
	}else if(month == 12){
		if(date >= 22 && date<= 31){
			printf("Capricorn\n");
        }else{
			printf("Sagittarius\n");
        }
    }
}