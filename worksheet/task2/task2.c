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
	
	printf("Enter a hexadecimal:\n");
    fgets(hex, sizeof(hex), stdin);
	hex[strcspn(hex, "\n")] = '\0';
	char *ptr = hex;


	// if input contains invalid hex digit
	/*
	for (int j=0; j<10; j++) {
		if (hex[j] == (" " || "1" || "2" || "3" || "4" || "5" || "6" || "7" || "8" || "9" || "A" || "B" || "C" || "D" || "E" || "F")) {
			printf("Valid Hexadecimal\n");
		} else {
			printf(hex);
		}
	}
	*/

	// printf("Error: Invalid Hexadecimal\n");
	// print the decimal result
	
	int len = strlen(hex);
	while (*ptr != '\0') { 
		if (*ptr == '0') {
			decimal = decimal;
		} else if (*ptr == '1') {
			decimal += 1;
		} else if (*ptr == '2') {
			decimal +=2;
		} else if (*ptr == '3') {
			decimal +=3;
		} else if (*ptr == '4') {
			decimal +=4;
		} else if (*ptr == '5') {
			decimal +=5;
		} else if (*ptr == '6') {
			decimal +=6;
		} else if (*ptr == '7') {
			decimal += 7;
		} else if (*ptr == '8') {
			decimal += 8;
		} else if (*ptr == '9') {
			decimal += 9;
		} else if (*ptr == 'A'||*ptr == 'a') {
			decimal += 10;
		} else if (*ptr == 'B'||*ptr == 'b') {
			decimal +=11;
		} else if (*ptr == 'C'||*ptr == 'c') {
			decimal += 12;
		} else if (*ptr == 'D'||*ptr == 'd') {
			decimal += 13;
		} else if (*ptr == 'E'||*ptr == 'e') {
			decimal += 14;
		} else if (*ptr == 'F'||*ptr == 'f') {
			decimal += 15;
		} else {
			printf("Error: Invalid Hexadecimal\n");
			return 0;
		}
	    ptr++;
	}
	printf("decimal:%ld\n", decimal);
	
	return 0;
}