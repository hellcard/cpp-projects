#include <iostream>
#include <string>
float addition(float a, float b) {
    return a+b;
}
float substraction(float a, float b){
    return a-b;
}
float multiplication(float a, float b){
    return a*b;
}
float division(float a, float b){
    return a/b;
}
bool print_res(float res, float* a, std::string* choice);
int main(){
    float a, b, res, operation;
    std::string choice;
    bool check;

    std::cout<<"Enter a: ";
    std::cin>>a;

    while(true){
        std::cout<<std::endl<<"Enter b: ";
        std::cin>>b;
        std::cout<<std::endl;

        // operations table
        std::cout<<"Operations:\n1. addition (+)\n2. substraction (-)\n3. multiplication (*)\n4. division (/)\n\nEnter your operation (1-4): ";
        std::cin>>operation;
        std::cout<<std::endl;

        // addition
        if(operation == 1){
            res = addition(a,b);
            check = print_res(res, &a, &choice);
            if(check){
                continue;
            }
            else{
                break;
            }
        }

        // substraction
        if(operation == 2){
            res = substraction(a,b);
            check = print_res(res, &a, &choice);
            if(check){
                continue;
            }
            else{
                break;
            }
        }

        // multiplication
        if(operation == 3){
            res = multiplication(a,b);
            check = print_res(res, &a, &choice);
            if(check){
                continue;
            }
            else{
                break;
            }
        }
        if(operation == 4){
            res = division(a,b);
            check = print_res(res, &a, &choice);
            if(check){
                continue;
            }
            else{
                break;
            }
        }
    }
}
bool print_res(float res, float* a, std::string* choice){
    std::cout<<"Result: "<<res<<"\n\nContinue? (y/n)"<<std::endl;
    std::cin>>*choice;
    if(*choice == "y"){
        *a = res;
        return true;
    }
    else{
        return false;
    }
}