#include<iostream>

using namespace std;

double
num1,
num2,
num3,
num4,
num5;

void getJudgeData();
void calcScore(double, double, double, double, double);
int findLowestScore(int, int, int, int ,int);
int findHighestScore(int, int, int, int,int);

int main (){

getJudgeData();
findHighestScore(num1, num2, num3, num4, num5);
findLowestScore(num1, num2, num3, num4, num5);
calcScore(num1, num2, num3, num4, num5);

return 0;
}

void getJudgeData(){
cout<<"Please input 5 scores"<<endl;
cin>>num1>>num2>>num3>>num4>>num5;

if(num1<0 || num2<0 || num3<0 || num4<0 || num5<0){
        cout<<"Please input the right number from 1-10"<<endl;
        return;
    }else if (num1>10 || num2>10 || num3>10 || num4>10 || num5>10){
        cout<<"Please input the right number from 1-10"<<endl;
        return;
    }else {
        return;
    }
}



int findHighestScore(int num1,int num2,int num3,int num4,int num5){

    int highestScore=num1;
     if(highestScore<num2){
    highestScore=num2;
    }if(highestScore<num3){
    highestScore=num3;
    }if(highestScore<num4){
    highestScore=num4;
    }if(highestScore<num5){
    highestScore=num5;
    }
    return highestScore;
}
int findLowestScore(int num1,int num2,int num3,int num4,int num5){

    int lowestScore=num1;
     if(lowestScore>num2){
    lowestScore=num2;
    }if(lowestScore>num3){
    lowestScore=num3;
    }if(lowestScore>num4){
    lowestScore=num4;
    }if(lowestScore>num5){
    lowestScore=num5;
    }

  return lowestScore;
}

void calcScore(double num1, double num2, double num3, double num4, double num5){
    int highestScore= findHighestScore(num1, num2, num3, num4, num5);
    int lowestScore=findLowestScore(num1, num2, num3, num4, num5);
    int totalScore = num1+num2+num3+num4+num5;
    double finalScore = totalScore-highestScore-lowestScore;
    double printedScore = finalScore/3;
    cout<<"The highest score is "<<highestScore<<endl;
    cout<<"The lowest score is "<<lowestScore<<endl;
    cout<<"The final score is "<<printedScore<<endl;

}






//variable is a entity to start a data.
