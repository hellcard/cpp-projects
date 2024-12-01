#include <iostream>
#include <string>

class user{
    protected:
        std::string name, claster, email;
        int lvl, exp;
    public:
        // init
        user(std::string set_name, std::string set_email, std::string set_claster, int set_lvl, int set_exp) //: name(set_name), claster(set_claster), email(set_email), lvl(set_lvl), exp(set_exp) - does not work - bit-field has non-integral type.
        {
            name = set_name;
            claster = set_claster;
            email = set_email;
            lvl = set_lvl;
            exp = set_exp;
            std::cout<<"Initialization user with fields:\nname: "<<name<<"\nclaster: "<<claster<<"\nemail: "<<email<<"\nlevel: "<<lvl<<"\nexp: "<<exp<<std::endl;
        }

        // set all fields
        void set_fields(std::string set_name, std::string set_email, std::string set_claster)
        {
            name = set_name;
            email = set_email;
            claster = set_claster;
            std::cout<<"This fields was changed:\nname: "<<name<<"\nclaster: "<<claster<<"\nemail: "<<email<<std::endl;
        }

        // getters
        std::string getName(){ return name; }
        std::string getClaster(){ return claster; }
        std::string getEmail(){ return email; }
        int getLvl(){ return lvl; }
        int getExp(){ return exp; }

        // setters
        void setName(std::string set_name) { name = set_name; }
        void setClaster(std::string set_claster) { claster = set_claster; }
        void setEmail(std::string set_email) { email = set_email; }

};
void print_menu(std::string username){
    std::cout<<"\t\tmenu @"<<username<<":\n\t---set new...---\n\t1. set new username\n\t2. set new claster\n\t3. set new email\n\t4. set all new fields\n\t---get...---\n\t5. get username\n\t6. get claster\n\t7. get email\n\t8. get level\n\t9. get exp\n\t---exit---\n\t10. exit\n\t\t---\n"<<std::endl;
}
int main(){
    int choice;

    // fields
    std::string username, claster, email;
    int level, exp;

    std::cout<<"Creating your character..."<<std::endl;

    std::cout<<"\tEnter your username: ";    std::cin>>username;    std::cout<<std::endl;
    std::cout<<"\tEnter your claster: ";     std::cin>>claster;     std::cout<<std::endl;
    std::cout<<"\tEnter your email: ";       std::cin>>email;       std::cout<<std::endl;
    std::cout<<"\tEnter your level: ";       std::cin>>level;       std::cout<<std::endl;
    std::cout<<"\tEnter your experience: ";  std::cin>>exp;         std::cout<<std::endl;



    user you(username, email, claster, level, exp);
    std::cout<<"Welcome, "<<you.getName()<<" :) "<<std::endl<<std::endl;

    while(true){
        std::cout<<"\t\t---"<<std::endl;
        print_menu(you.getName());
        std::cout<<"Your choice: ";
        std::cin>>choice;
        std::cout<<std::endl;
        switch(choice){
            case 1:
                std::cout<<"Enter new username: "; std::cin>>username; you.setName(username); std::cout<<std::endl; break;
            case 2:
                std::cout<<"Enter new claster: "; std::cin>>claster; you.setClaster(claster); std::cout<<std::endl; break;
            case 3:
                std::cout<<"Enter new email: "; std::cin>>email; you.setEmail(email); std::cout<<::std::endl; break;
            case 4:
                std::cout<<"Enter new username: "; std::cin>>username; you.setName(username); std::cout<<std::endl;
                std::cout<<"Enter new claster: "; std::cin>>claster; you.setClaster(claster); std::cout<<std::endl;
                std::cout<<"Enter new email: "; std::cin>>email; you.setEmail(email); std::cout<<std::endl;
                break;
            case 5:
                std::cout<<"Your username: "<<you.getName()<<std::endl; break;
            case 6:
                std::cout<<"Your claster: "<<you.getClaster()<<std::endl; break;
            case 7:
                std::cout<<"Your email: "<<you.getEmail()<<std::endl; break;
            case 8:
                std::cout<<"Your level: "<<you.getLvl()<<std::endl; break;
            case 9:
                std::cout<<"Your exp: "<<you.getExp()<<std::endl; break;
            default:
                std::cout<<"No such choice"<<std::endl;
                break;
        }
        if(choice==10){
            std::cout<<"Goodbye, "<<you.getName()<<" :) "<<std::endl; break;
        }
    }
    std::cout<<"\t\t---"<<std::endl;
    return 0;
}