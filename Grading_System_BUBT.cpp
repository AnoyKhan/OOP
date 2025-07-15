#include <iostream>
using namespace std;
int main() {
    int total_sub;
    cout<<"Please Enter your total sub: "<<endl;
    cin>>total_sub;
    
    double store[total_sub];
    double sum_store;
    cout<<"Please Enter your marks: "<<endl;
    for(int i =0; i<total_sub; i++){
        double mark;
        cin>>mark;
        if(mark>=80 && mark <=100){
            store[i] +=  4.00;
        }else if(mark >=75 && mark<80){
            store[i] +=  3.75;
        }else if(mark >=70 && mark<75){
            store[i] +=  3.50;
        }else if(mark >=65 && mark<70){
            store[i] +=  3.25;
        }else if(mark >=60 && mark<65){
            store[i] +=  3.00;
        }else if(mark >=55 && mark<60){
            store[i] +=  2.75;
        }else if(mark >=50 && mark<55){
            store[i] +=  2.50;
        }else if(mark >=45 && mark<50){
            store[i] +=  2.25;
        }else if(mark >=40 && mark<45){
            store[i] +=  2.00;
        }else{
            cout<<"Faield";
        }
        
    }
    double credit[total_sub];
    double sum_credit;
    cout<<"Please enter your credit: "<<endl;
    
    for(int i=0; i<total_sub; i++){
        double E_credit;
        cin>>E_credit;
        credit[i] += E_credit;
    }
    for(double n: credit){
        sum_credit += n;
    }
    
    double g_c[total_sub];
    double mul_g_c;
    for(int i=0; i<total_sub; i++){
        g_c[i] = store[i] * credit[i];
    }
    for(double n: g_c){
        mul_g_c +=n;
    }
    cout<<"total credit hour: "<<sum_credit<<endl;
    cout<<"total g * c : "<<mul_g_c<<endl;
    double result;
    result = mul_g_c / sum_credit;
    cout<<"gpa: "<<result;

    return 0;
}



