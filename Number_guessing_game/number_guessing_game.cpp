#include<iostream>
#include<cstdlib>
#include<ctime>
int main()
{
    srand(time(NULL));
    int rand_num=rand()%100+1;
    int user_guess,tries=0;
    do
    {
        tries++;
        std::cout<<"**************************************\n";
        std::cout<<"Guess a number between 1 and 100 : ";
        std::cin>>user_guess;
        if (user_guess==rand_num)
        {
            break;
        }
        else if (user_guess>rand_num)
        {
            std::cout<<"**************************************\n";
            std::cout<<"GO LOWER !!!!!\n";
        }
        else if(user_guess<rand_num)
        {        
            std::cout<<"**************************************\n";
            std::cout<<"GO HIGHER !!!!!\n";
        } 
    } while (true);
    std::cout<<"Hurray You Guessed it";
    std::cout<<"\nYou Guessed it in "<<tries<<" tries";
    std::cout<<"\n**************************************";
    return 0;
}