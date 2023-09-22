#include <bits/stdc++.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// function to greet the user according to time
void greetings()
{
    //current date  and time based on your system timezone
    time_t now = time(0);
    tm *time = localtime(&now);

    if (time-> tm_hour < 12)
    {
        cout<< "Good Morning Akshay"<<endl;
        string phrase = "Good Morning Akshay.. I hope you are doing well...";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout<< "Good Afternoon Akshay "<<endl;
        string phrase = "Good Afternoon Akshay";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24)
    {
        cout<< "Good Evening Akshay"<<endl;
        string phrase = "Good Evening Akshay";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}



int main()
{
    system("cls");

    cout << "  _____                         _        _____           _           " << endl;
    cout << " |_   _|__ _ __ _ __ ___  _ __| |_     |_   _|__   ___ | | __ _ ___ " << endl;
    cout << "   | |/ _ \\ '__| '__/ _ \\| '__| __|_____| |/ _ \\ / _ \\| |/ _` / __|" << endl;
    cout << "   | |  __/ |  | | | (_) | |  | ||_____| | (_) | (_) | | (_| \\__ \\" << endl;
    cout << "   |_|\\___|_|  |_|  \\___/|_|   \\__|    |_|\\___/ \\___/|_|\\__,_|___/" << endl;
    cout << "                                                                       " << endl;
    cout << "                           Personal Assistant                           " << endl;
    cout << endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout << "***********************************************************" << endl << endl;
        cout << "  ENTER THE PASSWORD TO CONFIRM YOU ARE MY MASTER AKSHAY  " << endl;
        cout << endl;
        cout << "**********************************************************" << endl << endl;
        string phrase = "ENTER THE PASSWORD TO CONFIRM YOU ARE MY MASTER AKSHAY";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password == "akshay")
        {
            cout<<"\n<**************************************************************************************************>\n\n";
            greetings();
            do{
                cout<<"\n<**********************************************************************************************>\n\n";
                cout<<endl<<"How can I help you Akshay....??"<<endl<<endl;

                string phrase = "How can I help you Akshay ?";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command == "hello" || command == "hi")
                {
                    cout<<"Hello Master Akshay..... I hope you are doing well..."<<endl;
                    string phrase = "Hello Master Akshay.. I hope you are doing well...";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command == "what is the time")
                {
                    datetime();
                }


                else if(command == "who are you" || command == "who is speaking")
                {
                    cout<<"I'm a personal assistant created by Master Akshay !!!"<<endl;
                    string phrase = "I'm a personal assistant to my boss Master Akshay !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command == "open notepad")
                {
                    cout<<"opening notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }


                else if(command =="open my linkedIn profile")
                {
                    cout<<"opening your linkedIN profile"<<endl;
                    string phrase = "opening Akshay's linkedIn profile";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://in.linkedin.com/in/akshay-a-r-8a0b65253?trk=public_profile_samename-profile");
                }


                else if(command == "open Microsoft Word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files (x86)\\Microsoft Office\\root\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command == "open Microsoft Paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command == "play music")
                {
                    cout<<"playing music now"<<endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://open.spotify.com/playlist/4nRDM69vmrfaqCKqi1aQmc?si=0ca9f596dec64103");

                }

                else if(command == "open google")
                {
                    cout<<"opening google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(command =="open youtube")
                {
                    cout<<"opening YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command == "close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","F:\\Akshay\\IMG_20200923_215034_246.jpg",NULL, NULL, SW_NORMAL);
                }


                else if(command =="open my resume")
                {
                    cout<<"opening your resume"<<endl;
                    string phrase = "opening your resume";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","file:///F:/AKSHAY%20AR_1BY20CS017_BMSITM.pdf",NULL, NULL, SW_NORMAL);
                }

                else if(command =="play movie")
                {
                    cout<<"playing movie"<<endl;
                    string phrase = "playing movie";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","F:\\www.5MovieRulz.sk - Yashoda (2022) Telugu HQ HDRip x264 AAC 700MB ESub.mkv",NULL, NULL, SW_NORMAL);
                }

                else if(command == "bye" || command == "exit")
                {
                    cout<<"Good Bye Akshay, see you soon!"<<endl;
                    string phrase = "Good Byeee Akshay, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }

                else if(command == "weather details")
                {
                    string apiKey = "611eaf316ddd9d4934b240fff0a6ad8a";
                    string city;

                    cout << "Please enter a city name: ";
                    string phrase = "Please enter a city name: ";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    cin >> city;

                    //string weatherDetails = getWeatherDetails(apiKey, city);
                    //cout << weatherDetails << endl;
                }

                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command.. please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  PERSONAL ASSISSTANT ########################################"<<endl<<endl;
                    cout << "**********************" << endl;
                    cout << "\033[1;31mIncorrect Password!\033[0m\n";
                    cout << "**********************" << endl << endl;
                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
