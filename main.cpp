#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <fstream>
using namespace std;
void eyesblue(){
  initwindow(500,500, "Image window");;
readimagefile("eyesblue.jpg",0,0,500,500);
getch();
}
void eyesbluev2(){
  initwindow(500,500, "Image window");;
  readimagefile("eyesbluev2.jpg", 0,0,500,500);
  getch();
}
void eyesgreen(){
 initwindow(500,500, "Image window");;
 readimagefile("eyesgreen.jpg", 0,0,500,500);
 getch();
}
void eyesgreenv2(){
initwindow(500,500, "Image window");;
readimagefile("eyesgreenv2.jpg", 0,0,500,500);
 getch();
}
void eyeshazel(){
initwindow(500,500, "Image window");;
readimagefile("eyeshazel.jpg", 0,0,500,500);
 getch();
}
void eyeshazelv2(){
initwindow(500,500, "Image window");;
readimagefile("eyeshazelv2.jpg", 0,0,500,500);
 getch();
}
void eyesbrown(){
initwindow(500,500, "Image window");;
readimagefile("eyesbrown.jpg", 0,0,500,500);
 getch();
}
void eyesbrownv2(){
initwindow(500,500, "Image window");;
readimagefile("eyesbrownv2.jpg", 0,0,500,500);
 getch();
}

int main(){
    double value = 2.48; int overjit  = 0;
    int rs12913832, rs16891982, rs1015362, rs1408799, rs12896399;
    printf("How many G alleles in rs12913832, enter '3' if you lack the snp: ");
    scanf("%d", &rs12913832);
    switch(rs12913832){
  case 2: value = value * 0.641; break;
  case 1: value = value * 1.299; break;
  case 0: value = value * 1.613; break;
    default: overjit = overjit + 8;

    }
    printf("%f", value);
    printf("\nHow many C alleles in rs16891982, enter '3' if you lack the snp: ");
    scanf("%d",&rs16891982);
    switch(rs16891982){
case 2: value = value * 1.613; break;
case 1: value = value * 1.411; break;
case 0: value = value * 0.882; break;
default: overjit = overjit + 8;
    }
    printf("%f", value);
    printf("\nHow many T alleles in rs1015362, enter '3' if you lack the snp: ");
    scanf("%d", &rs1015362);
    switch(rs1015362){
case 2: value = value * 1.152; break;
case 1: value = value * 1.041; break;
case 0: value = value *0.9814; break;
    default: overjit = overjit + 4;

    }
    printf("%f", value);
    printf("\nHow many T alleles in rs1408799, enter '3' if you lack the snp: ");
    scanf("%d", &rs1408799);
    switch(rs1408799){
case 2: value = value * 1.267; break;
case 1: value = value * 1.021; break;
case 0: value = value * 0.894; break;
    default: overjit = overjit + 4;
    }
    printf("%f", value);
    printf("\nHow many G alleles in rs12896399, enter '3' if you lack the snp: ");
    scanf("%d", &rs12896399);
    switch(rs12896399){
case 2: value = value * 1.142; break;
case 1: value = value * 0.945; break;
case 0: value = value * 0.748; break;
    default: overjit = overjit + 4;
    }
    printf("%f", value);

    if(overjit >= 8){
    printf("Not enough data to accurately predict your eyecolor!");
    }
    if(value < 1.25){
      eyesblue();
    } else if(value < 1.75){
    eyesbluev2();
    } else if(value < 2.25){
     eyesgreen();
    } else if(value < 2.75){
     eyesgreenv2();
    } else if(value <3.25){
     eyeshazel();
    } else if(value < 3.75){
     eyeshazelv2();
    } else if(value <4.25){
     eyesbrown();
    } else {
     eyesbrownv2();
    }
}
