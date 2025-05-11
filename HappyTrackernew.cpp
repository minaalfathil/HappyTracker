#include <iostream>
#include <string>
using namespace std;
string moodmeter;
int moodscore=0;
void positive(){
    cin>>moodmeter;
    if (moodmeter =="yes"){
        moodscore++;
    }
    else if (moodmeter == "no") {
        moodscore--;
    }
}
void negative(){
    cin>>moodmeter;
    if (moodmeter =="no"){
        moodscore++;
    }
    else if (moodmeter == "yes") {
        moodscore--;
    } 
}
int main() {

 cout<< "Welcome to Happy Tracker!"<<endl;
 cout << "you will be asked questions and you will be given reccomendations. (answer Only in yes/no)"<< endl;
 cout << "shall we start?"<<endl;
 cin>>moodmeter;

 while (moodmeter == "yes"){


        if (moodmeter == "no") {
            break;
        }


    cout<< "Did you wake up feeling well-rested today?"<<endl;
    positive();

    cout<<"Have you laughed or smiled today?"<<endl;
    positive();

    cout<<"Do you feel motivated to do something today?"<<endl;
    positive();

    cout<<"Are you feeling connected to someone (friend, family)?"<<endl;
    positive();

    cout<<"Do you feel proud of something you did recently?"<<endl;
    positive();

    cout<<"Have you had trouble focusing today?"<<endl;
    negative();

    cout<<"Do you feel like you're just going through the motions?"<<endl;
    negative();

    cout<<"Are you unsure how you feel right now?"<<endl;
    negative();

    cout<<"Do you feel stressed or overwhelmed?"<<endl;
    negative();

    cout<<"Have you been avoiding things you normally enjoy?"<<endl;
    negative();

    cout<<"Do you feel more tired than usual, even with rest?"<<endl;
    negative();

    cout<<"Are you feeling isolated or alone?"<<endl;
    negative();

    if (moodscore>=-12 && moodscore<=-4){
        cout<< "Your score is: "<< moodscore<<"/12"<<endl;
        cout<<"Seems like you're having a tough day."<<endl;
        cout<<"Recommendations: "<< endl;
        cout<<"Talk to someone you trust, even for a few minutes."<<endl;
        cout<<"Try writing down what's on your mind."<<endl;
        cout<<"Be kind to yourself:rest, hydrate, or just take a break"<<endl;
        cout<<" If this feeling lasts, consider reaching out to a counselor or support service."<<endl;
    }
    else if (moodscore>=-3 && moodscore<=4){
        cout<< "Your score is: "<< moodscore<<"/12"<<endl;
        cout<<"You're feeling okay—not bad, not great."<<endl;
        cout<<"Recommendations: "<< endl;
        cout<<"Take a short walk or get some fresh air."<<endl;
        cout<<"Do something small that makes you happy (music, hobby, snack)."<<endl;
        cout<<"Check in with yourself again later, your mood might shift."<<endl;
    
    }
    else if (moodscore>=5 && moodscore<=12){
        cout<< "Your score is: "<< moodscore<<"/12"<<endl;
        cout<<"You're in a great mood today!"<<endl;
        cout<<"Recommendations: "<< endl;
        cout<<"Keep the momentum going, do something you enjoy!"<<endl;
        cout<<"Spread that good energy: call a friend or help someone."<<endl;
        cout<<"Challenge yourself today—you’re in the right mindset for it."<<endl;
    
    }
 cout << "\nWould you like to try again? (yes/no): ";
        cin >> moodmeter;
        if (moodmeter == "no") {
            break;
        }
        moodscore = 0; 
}
cout << "Thanks for using Happy Tracker. Goodbye!" << endl;
 return 0;
}
