#include <stdio.h>

int main() {

    int score = 0 ;
    printf( "enter score :\n" ) ;
    scanf( "%d", &score ) ;

    if( score >= 80 ){
        printf("A !") ;
    }else if( score >= 75 && score < 80){
        printf("B+ !") ;
    }else if( score >= 70 && score < 75){
        printf("B !") ;
    }else if( score >= 65 && score < 70){
        printf("C+ !") ;
    }else if( score >= 60 && score < 65){
        printf("C !") ;
    }else if( score >= 55 && score < 60){
        printf("D+ !") ;
    }else if( score >= 50 && score < 55){
        printf("D !") ;
    }else if( !score ){
        printf("please enter number only.");
    }else{
        printf("F !") ;
    }

    return 0 ;
}//end main function