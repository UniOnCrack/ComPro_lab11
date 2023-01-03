#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <fstream>

using namespace std;

float mean(float num1, float sum1){
    return sum1/num1;
}

float sounbaingbane(float num2, float sum2, float mean_all){
    return sqrt((sum2/num2)-pow(mean_all,2));
}


int main(){
    ifstream score;
    score.open("score.txt");
    string textline;
    int i = 0;
    float x,y;
    while(getline(score, textline)){
		x += atof(textline.c_str());
        y += pow(atof(textline.c_str()),2);
        i++;
	}

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean(i, x) << endl;
    cout << "Standard deviation = " << sounbaingbane(i, y, mean(i, x));
}