#include<iostream>
#include<ctime>
#include<cstdlib>
int main()
{
    srand(time(NULL));
    int number, choice, score;
    do
    {
        std::cout<<"\n******************************\n";
        std::cout<<"*********Rolling Dice*********\n";
        std::cout<<"******************************\n";
        std::cout<<"Press 1 to Roll 4 sided dice\n";
        std::cout<<"Press 2 to Roll 6 sided dice\n";
        std::cout<<"Press 3 to Roll 8 sided dice\n";
        std::cout<<"Press 4 to Roll 10 sided dice\n";
        std::cout<<"Press 5 to Roll 12 sided dice\n";
        std::cout<<"Press 6 to Roll 20 sided dice\n";
        std::cout<<"Press 0 to exit\n";
        std::cin>>choice;
        if(choice==0)
        {
            std::cout<<"You have been exited successfully..........!";
            break;
        }
        switch (choice)
        {
         case 1: 
            score=rand()%4+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break;
         case 2: 
            score=rand()%6+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break;
        case 3: 
            score=rand()%8+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break;  
         case 4: 
            score=rand()%10+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break; 
         case 5: 
            score=rand()%12+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break;  
         case 6: 
            score=rand()%20+1;
            std::cout<<"Your score is \""<<score<<"\"";
            break;
         default:
            std::cout<<"******************************\n";
            std::cout<<"Please select a valid option !!!!!!!!";
            break;
        }
        std::cout<<"\n******************************\n";
    } while (true);  
    return 0;
}
