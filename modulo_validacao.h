#include <stdio.h>
#include <string.h>
#include <stdlib.h>

///Assinaturas
int bissexto(int ano);
int data_int(int dia, int mes, int ano);
int data_char(char data[]);
int email_validacao(char email[]);

int meses_int[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//// Validações baseadas no código de Vinicius Maia e do professor Flavius Gorgônio

//Bissexto
int bissexto (int ano){ 
    if ((ano % 4 == 0) && (ano % 100 != 0)){
        return 1;
    }

    else if (ano % 400 == 0){
        return 1;
    }

    else{
        return 0;
    }
}
//Data 
int data_int(int dia, int mes, int ano){
    int dia_final;
    if (ano < 0 || mes > 12 || mes < 0 || dia < 1){
        return 0;
    }
    
    if  (mes == 2) {
        if (bissexto(ano)){
         dia_final = 29;
        }
        else{
         dia_final = 28;
        }
    } 
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
     dia_final = meses_int[mes-1];
    }
    else{
     dia_final = meses_int[mes-1];
    }
    if (dia > dia_final){
        return 0;
    }

    return 1;
}
//data
int data_char(char data[]){
    int dia, mes, ano;

    if (strlen(data) != 10){
        return 0;
    }
    if (data[2] != '/' || data[5] != '/'){
        return 0;
    }
    dia = ((data[0] - '0') * 10) + (data[1] - '0');
    mes = ((data[3] - '0') * 10) + (data[4] - '0');
    ano = ((data[6] - '0') * 1000) + ((data[7] - '0') * 100) + ((data[8] - '0') * 10) + (data[9] - '0');
    if(data_int(dia,mes,ano)){
        return 1;
    }

    return 0;
}
//email
int email_validacao(char email[]){

    int arroba = 0, ponto = 0;

    if (strlen(email) > 0){
        for(int i = 0; i < strlen(email); i++){
            
            if(email[i] == '@'){
                arroba ++;
            }

            else if(email[i] == '.'){
                ponto++;

            }
        }

        if(arroba == 1 && ponto!= 0){
            return 1;
        }

        else{
            return 0;
        }
    }
    return 0;
}



