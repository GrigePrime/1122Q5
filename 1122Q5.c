#include <stdio.h>

int main(void)
{
    int code[256];
    char i;
    int p=0;
    scanf("%c", &i);
    for(int c=1;c<10;c++){
        scanf("%c",&code[c]);
    }
    if (i == 'A'){
        p = 1+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'B'){
        p = 10+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'C'){
        p = 19+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'D'){
        p = 28+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'E'){
        p = 37+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'F'){
        p = 46+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'G'){
        p = 55+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'H'){
        p = 64+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'J'){
        p = 73+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'K'){
        p = 82+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'L'){
        p = 91+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'M'){
        p = 100+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'N'){
        p = 109+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'P'){
        p = 118+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'Q'){
        p = 127+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'R'){
        p = 136+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'S'){
        p = 145+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'T'){
        p = 154+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'U'){
        p = 163+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'V'){
        p = 172+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'X'){
        p = 181+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'Y'){
        p = 190+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }
    else if(i == 'Z'){
        p = 199+8*code[1]+7*code[2]+6*code[3]+5*code[4]+4*code[5]+3*code[6]+2*code[7]+code[8]+code[9];
    }

    if(p%10==0){
        printf("CORRECT!!!\n");
    }
    else{
        printf("WRONG!!!\n");
    }
}
