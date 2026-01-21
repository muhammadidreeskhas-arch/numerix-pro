#include <stdio.h>
#include <windows.h>
#include <math.h>

void armstrong(int num);
void perfect(int num);
void prime(int num);
void reverse(int num);
void sum(int num);
void binary(int num);
void octal(int num);
void hexa(int num);
void power(int num, int exp);
void design();

int main(){
	
	//Title Zone
	char u_line[] = "=====================";
	char title[] = "SMART NUMBER ANALYZER";
	char d_line[] = "=====================";
	
	for(int iteration = 0; u_line[iteration] != '\0'; iteration++){
		printf("%c",u_line[iteration]);
		Sleep(60);
	}
	
	printf("\n");
	
	for(int iteration = 0; title[iteration] != '\0'; iteration++){
		printf("%c",title[iteration]);
		Sleep(100);
	}
	
	printf("\n");
	
	for(int iteration = 0; d_line[iteration] != '\0'; iteration++){
		printf("%c",d_line[iteration]);
		Sleep(60);
	}
	
	printf("\n");
	
	//The Functions That We are Providing
	
	printf("\n");
	
	printf("1) Find Armstrong Number.\n");
	printf("2) Find Perfect Number.\n");
	printf("3) Find Prime Number.\n");
	printf("4) Reverse the Number.\n");
	printf("5) Sum of Digits.\n");
	printf("6) Decimal to Binary.\n");
	printf("7) Decimal to Octal.\n");
	printf("8) Decimal to Hexadecimal.\n");
	printf("9) Power Calculation.\n");
	printf("0) Exit.\n");
	
	printf("\n");
	
	// A Little Design
	char line[] = "--------------------------";
	for(int i = 0; line[i] != '\0'; i++){
		printf("%c",line[i]);
		Sleep(60);
	}
	
	printf("\n\n");
	
	// Asking User to choose function
	int choice=1;
	while(choice != 0){
	
	printf("Choose an Operation to Execute: ");
	scanf("%d",&choice);
	
	int number;
	if(choice >= 1 && choice <=8){
	printf("Enter Number: ");
	scanf("%d",&number);
      }
      
      int num, exp;
      if(choice == 9){
        	printf("Enter Number: ");
		    scanf("%d",&num);
		    printf("Enter Power: ");
		    scanf("%d",&exp);
         }
         
         // Processing short animation
        char ani[] = "...";
		printf("\n\nProcessing");
		for(int count = 0; ani[count] != '\0'; count++){
			printf("%c",ani[count]);
			Sleep(400);
		} 

        printf("\n\n");
        
      // Using Switch to Call Functions
      
	switch (choice){
		
		case 1:
		    armstrong(number);
		break;
		
		case 2:
			perfect(number);
		break;
		
		case 3:
		    prime(number);
		break;
		
		case 4:
		    reverse(number);
		break;
		
		case 5:
		    sum(number);
		break;
		
		case 6:
		    binary(number);
		break;
		
		case 7:
		    octal(number);
		break;
		
		case 8:
		    hexa(number);
		break;
		
		case 9:
		    power(num,exp);
		break;
		
		case 0:
		    printf("CLOSED");
		    printf("\n\nCome next time too :)\n");
		    exit(0);
		break;
		
		default:
			printf("Oops! Choose between 1-9, or 0 to exit :)");
	} 
	
	printf("\n\n");
    }
	return 0;
}


// Solutions 

void armstrong(int num){
	int flag = 0, sum = 0, temp;
	
	 temp = num;
	 
	 while(temp != 0){
	 	temp = temp / 10;
	 	flag++;
	 }
	
	temp = num;
	int remainder;
	
	while(temp != 0){
		remainder = temp % 10;
		sum += pow(remainder,flag);
		temp = temp / 10;
	}
	
	design();
	printf("\n");
	
	if(sum == num){
		printf("RESULT: Armstrong Number");
	} else 
	printf("RESULT: Not an Armstrong Number");
	
	printf("\n");
	design();
	
	return;
}


void perfect(int num){
	int sum = 0;
	
	for(int count = 1; count < num; count++){
		if(num % count == 0){
			sum = sum + count;
		}
	}
	
	design();
	printf("\n");
	
	if(sum == num){
		printf("RESULT: Perfect Number");
	} else
	printf("RESULT: Not Perfect Number");
	
	printf("\n");
	design();
	
	return;
}


void prime(int num){
	int flag = 0;
	for(int count = 2; count < num; count++){
		if(count % num == 0){
			flag++;
			break;
		}
	}
	
    design();
    printf("\n");
    
	if(flag == 0){
		printf("RESULT: Prime Number");
	} else
	printf("RESULT: Not Prime");
	
	printf("\n");
	design();
	
	return;
}


void reverse(int num){
	int temp, last, size = 0;
	int arr[size];
	
	temp = num;
	while(temp != 0){
		last = temp % 10;
		arr[size] = last;
		size++;
		temp = temp / 10;
	}
	
	design();
	printf("\n");
	
	printf("RESULT: ");
	for(int count = 0; count < size; count++){
		printf("%d",arr[count]);
	}
	
	printf("\n");
	design();
	
	return;
}


void sum(int num){
	int sum = 0, temp, temp2;
	
	temp = num;
	while(temp != 0){
		temp2 = temp % 10;
		sum = sum + temp2;
		temp = temp / 10;
	}
	
	design();
	printf("\n");
	
	printf("RESULT: %d",sum);
	
	printf("\n");
	design();
	
	return;
}


void binary(int num){
	int temp, size=0;
	int bin[32];
	temp = num;
	
	 if(num == 0){
	 	design();
	 	printf("\n");
	 	
        printf("RESULT: 0");
        
        printf("\n");
        design();
        return;
    }
	
	while(temp != 0){
		bin[size] = temp % 2;
		temp = temp / 2;
		size++;
	}
	
	design();
	printf("\n");
	
	printf("RESULT: ");
	for(int j = size - 1; j >= 0; j--){
		printf("%d",bin[j]);
	}
	
	printf("\n");
	design();
	
	return;
}


void octal(int num){
	int temp, size=0;
	int oct[32];
	temp = num;
	
	 if(num == 0){
	 	
	 	design();
	 	printf("\n");
	 	
        printf("RESULT: 0");
        
        printf("\n");
        design();
        
        return;
    }
	
	while(temp != 0){
		oct[size] = temp % 8;
		temp = temp / 8;
		size++;
	}
	
	design();
	printf("\n");
	
	printf("RESULT: ");
	for(int j = size - 1; j >= 0; j--){
		printf("%d",oct[j]);
	}
	
	printf("\n");
	design();
	
	return;
}



void hexa(int num){
    int temp, size = 0;
    int hex[32];

    if(num == 0){
    	
    	design();
    	printf("\n");
    	
        printf("RESULT: 0");
        
        printf("\n");
        design();
        return;
    }

    temp = num;

    while(temp != 0){
        hex[size] = temp % 16;
        temp = temp / 16;
        size++;
    }
    
    design();
    printf("\n");
    
    printf("RESULT: ");
    for(int j = size - 1; j >= 0; j--){
        if(hex[j] < 10)
            printf("%d", hex[j]);
        else
            printf("%c", hex[j] + 55); 
    }
    
    printf("\n");
    design();
    
    return;
}


void power(int num, int exp){
	int result = pow(num,exp);
	
	design();
	printf("\n");
	
	printf("Result: %d",result);
	
	printf("\n");
	design();
	
	return;
}


void design(){
	char dash[] = "----------------------------------------";
	for(int count = 0; dash[count] != '\0'; count++){
		printf("%c",dash[count]);
		Sleep(30);
	}
	return;
}
