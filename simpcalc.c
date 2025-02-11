#include <stdio.h>
//i am thou
void inputNum(float *input) {
	printf("Input a number: ");
    scanf("%f", input);
}

void getOp(char *op,int *nop) {
	switch (*op) {
        case '+': *nop = 0; break;
        case '-': *nop = 1; break;
        case '*': *nop = 2; break;
        case '/': *nop = 3; break;
    }
}

void doOp(int nop, float input1, float input2, float *output) {
	switch (nop) {
        case 0: *output = input1 + input2; break;
        case 1: *output = input1 - input2; break;
        case 2: *output = input1 * input2; break;
        case 3: *output = input1 / input2; break;
    }
}    

int main () {
    float input1, input2, output;
    char op;
    int nop;
	int state = 1;

	while (state == 1) {
		inputNum(&input1);
	
	    printf("Choose op (+ - * or /): ");
	    scanf("%c", &op);
	    scanf("%c", &op);
	
	    getOp(&op, &nop);
	
		inputNum(&input2);
		
	    doOp(nop, input1, input2, &output);
	
	    printf("%.2f\n", output);
	    
	    printf("Calculate again? (1=yes, 2=no): ");
	    scanf("%d", &state);
	}
}