#include <stdio.h>
#include <stdlib.h>
int Men1(){ //Menu 1=
    int m1; //This section is for Linux Commands
    printf("\nIP Address Console\n");
    printf("Please make a selection from the list below.\n");
    printf("1. What is my IP?\n");
    printf("2. IP Release\n");
    printf("3. Linux Commands\n");
    printf("Number?: ");
    scanf("%d", &m1);
    return m1;
}
int Men2(){ //Menu 2
    int m2; //This section processes IP Release and Renew
    printf("Reset IP\n");
    printf("1. IP Address Release\n");
    printf("2. IP Address Renew\n");
    printf("3. IP Address\n");
    printf("\nMake a selection: ");
    scanf("%d", &m2);
    return m2;
}
int Men3(){ //Menu 3
    int m3;
    printf("\nCommon Linux Commands \n");
    printf("1. Update\n");
    printf("2. Upgrade\n");
    printf("Make a selection: ");
    scanf("%d", &m3);
    return m3;

}
int main(){
    extern int Men1();
    int me1 = Men1();
    switch(me1){
        case 1: {       //Calls the first menu 
            extern int Men1();
            printf("Placeholder\n"); //Needs a CMD command
            return Men1();
        }
        case 2: {       //Second Menu
            extern int Men2();
            int me2 = Men2();
            switch(me2){
                case 1: {
                    extern int Men2();
                    me2=Men2();
                    system("ipconfig /release");
                    return me2;
                }
                case 2: {
                    extern int Men2();
                    me2 = Men2();
                    system("ipconfig /renew");
                    return me2;
                }
                case 3: {
                    extern int Men2();
                    me2 = Men2();
                    system("ipconfig");
                    return me2;
                }
                default: {
                    extern int Men2();
                    me2 = Men2();
                    printf("End");
                    return me2;
                }
            }
            return Men2();
        }
        case 3: { //Third Menu
            extern int Men3();
            int mm = Men3();
            switch(mm){
                case 1: {
                    extern int Men3();
                    mm = Men3();
                    printf(" ");
                    return mm;
                }
                case 2: {
                    extern int Men3();
                    mm = Men3();
                    printf(" ");
                    return mm;
                }
                default: {
                    extern int Men3();
                    mm = Men3();
                    printf("END");
                    return mm;
                }
            }
            return mm;
        }
        default: {
            printf("End\n");
            return 0;
        }
    }
    return 0;
}