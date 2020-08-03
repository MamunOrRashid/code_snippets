//uva problem 12896
//vai ami apnar tutorial dake onak siksi.But ai problem ta parsina.output to thik astase.

#include <stdio.h>

int main()
{
    int kase,i,digit,j,a[100],b[100];
    scanf("%d",&kase);
    for(i=0;i<kase;i++){
        scanf("%d",&digit);
        for(j=0;j<digit;j++){
            scanf("%d",&a[j]);
        }

        for(j=0;j<digit;j++){
            scanf("%d",&b[j]);
        }
        for(j=0;j<digit;j++){
            if(a[j]==1){
               if(b[j]==1)printf(".");
                else if(b[j]==2)printf(",");
                else if(b[j]==3)printf("?");
                 else if(b[j]==4)printf("\"");
            }
            else if(a[j]==2){
                if(b[j]==1)printf("a");
                else if(b[j]==2)printf("b");
                else if(b[j]==3)printf("c");
            }

            else if(a[j]==3){
                if(b[j]==1)printf("d");
                else if(b[j]==2)printf("e");
                else if(b[j]==3)printf("f");
            }
            else if(a[j]==4){
                if(b[j]==1)printf("g");
                else if(b[j]==2)printf("h");
                else if(b[j]==3)printf("i");
            }
            else if(a[j]==5){
                if(b[j]==1)printf("j");
                else if(b[j]==2)printf("j");
                else if(b[j]==3)printf("l");
            }
            else if(a[j]==6){
                if(b[j]==1)printf("m");
                else if(b[j]==2)printf("n");
                else if(b[j]==3)printf("o");
            }
            else if(a[j]==7){
                if(b[j]==1)printf("p");
                else if(b[j]==2)printf("q");
                else if(b[j]==3)printf("r");
                else if(b[j]==3)printf("s");
            }
           else if(a[j]==8){
                if(b[j]==1)printf("t");
                else if(b[j]==2)printf("u");
                else if(b[j]==3)printf("v");
            }
            else if(a[j]==9){
                if(b[j]==1)printf("w");
                else if(b[j]==2)printf("x");
                else if(b[j]==3)printf("y");
                else if(b[j]==3)printf("z");
            }
            else if(a[j]==0 && b[j]==1)printf(" ");
        }
        printf("\n");
    }


    return 0;

}
