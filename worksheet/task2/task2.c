/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Yanjani Nkhata
 * ID:201930814
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	
	printf("Enter a hexadecimal:");
	scanf("%c", &*hex);


	// if input contains invalid hex digit
	int j = 0;
	for (j=0; j<10; j++) {
		if (hex[j] != ("1" || "2" || "3" || "4" || "5" || "6" || "7" || "8" || "9" || "A" || "B" || "C" || "D" || "E" || "F")) {
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
		input_value = calloc(hex[j]);
	}
	// printf("Error: Invalid Hexadecimal\n");
	// print the decimal result
	int sum = 0;
    int i = 0;
	for (i=0; i<10;i++);
	    switch (i) {
			case hex[i] == "1":
			    decimal += 1;
			    break;
			case hex[i] == "2":
			    decimal += 2;
			    break;
			case hex[i] == "3":
			    decimal += 3;
			    break;
			case hex[i] == "4":
			    decimal += 4;
			    break;
			case hex[i] == "5":
			    decimal += 5;
			    break;
			case hex[i] == "6":
			    decimal +=6;
			    break;
			case hex[i] == "7":
			    decimal +=7;
			    break;
			case hex[i] == "8":
			    decimal +=8;
			    break;
			case hex[i] == "9":
			    decimal +=9;
			    break;
			case hex[i] == ("A" || "a"):
			    decimal += 10;
			    break;
			case hex[i] == ("B" || "b"):
			    decimal += 11;
			    break;
			case hex[i] == ("C" || "c"):
			    decimal += 12;
			    break;
			case hex[i] == ("D" || "d"):
			    decimal += 13;
			    break;
			case hex[i] == ("E" || "e"):
			    decimal += 14;
			    break;
			case hex[i] == ("F" || "f"):
			    decimal += 15;
			    break;
			default:
			    decimal += 0;
	    }
	printf("decimal:%ld\n", decimal);
	
	return 0;
}