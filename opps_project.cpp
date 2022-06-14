#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    ofstream outfile;
    cout << "\nWelcome to our program.\n\nSelect An Option:\n\n1.Psychometric Behaviour Test\n2.Average Life Expectancy\t\t";
    int n, score = 0, temp, num;
    string str, any;
    cin >> n;
    switch (n)
    {
    case 1:
        num = 0;
        cout << "\n\n\t\t\tGeneral Rules:\nYou have to select points from 1 to 5 as per your response to every statement.";
        cout << "\n\n1 - Strongly Disagree\n\n2 - Disagree\n\n3 - Ohk\n\n4 - Agree\n\n5 - Strongly Agree\n\n";
        cout << "Press any key to start answering the question :\t\t";
        cin >> any;
        cout << "\n\nLet's Begin :0)\n\n";
        outfile.open("Your_report.txt", ios::out);
        infile.open("positive_Question.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        k:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto k;
            }
            if (temp >= 3)
            {
                score += temp;
            }
            else
            {
                outfile << "You denied us for statement: " << str << ". But for improvemnt change this approach must try to do it."
                        << "\n\n";
                score -= temp;
            }
            cout << "\n\n";
        }
        infile.close();
        infile.open("negative_question.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        l:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto l;
            }
            if (temp >= 3)
            {
                outfile << "You acknowledged yes for statement: " << str << ". But for improvemnt you must try, not to do it."
                        << "\n\n";
                score -= temp;
            }
            else
            {
                score += 5 - (temp - 1);
            }
            cout << "\n\n";
        }
        infile.close();
        infile.open("neutral_question.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        m:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto m;
            }
            score += temp / 2;
            cout << "\n\n";
        }
        infile.close();
        if (score >= 75)
        {
            cout << "wohoo!! Your civil behaviour score is " << score << "\n\nYou are Resilliant and Tough for the situatuion.\n\nYou can lead yourself and possibly others as well to a happy life.";
        }
        else if (score < 75 && score >= 50)
        {
            cout << "Cheers!! Your civil behaviour score is " << score << "\n\nYou are far better than a lot here in order to achieve happiness and own target. \n\nYou are a good player.";
        }
        else if (score < 50 && score >= 20)
        {
            cout << "Yepp!! Your civil behaviour score is " << score << "\n\nYou are a person with more self inclined motives and that is not bad at all. \n\nBut you can think of helping others too.";
        }
        else
        {
            cout << "Ummm!! Your civil behaviour score is " << score << "\n\nProbably you are not a bad person and I am sure about this.\n\nBut you need to redefine some of the things in life and try for a new start.";
        }
        cout << "\n\nAlso one report analyzing your behaviour is made must visit and try to adapt the recommendation.\n\nGod bless you :0)\n\n";
        outfile.close();
        break;
    case 2:
        num = 0;
        cout << "\n\n\t\t\tGeneral Rules:\nYou have to select points from 1 to 5 as per your approach for given situatuon.";
        cout << "\n\n1 - No, Never Done\n\n2 - Yes, But Left now\n\n3 - Not, But Will Do\n\n4 - Yes, Oftenly\n\n5 - Yes, Regularly\n\n";
        cout << "Press any key to start answering the question :\t\t";
        cin >> any;
        cout << "\n\nLet's Begin :0)\n\n";
        outfile.open("Your_Health_report.txt", ios::out);
        infile.open("Positive_health.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        n:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto n;
            }
            if (temp >= 3)
            {
                score += temp;
            }
            else
            {
                outfile << "You noded to us for statement: " << str << " But we force you to adapt this in your lifestyle for longer life."
                        << "\n\n";
                score -= temp;
            }
            cout << "\n\n";
        }
        infile.close();
        infile.open("Negative_health.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        o:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto o;
            }
            if (temp >= 3)
            {
                outfile << "You acknowledged yes for statement: " << str << " But we force you to leave this from your lifestyle for longer life."
                        << "\n\n";
                score += temp;
            }
            else
            {
                score -= 5 - (temp - 1);
            }
            cout << "\n\n";
        }
        infile.close();
        infile.open("Neutral_health.txt", ios::app);
        while (getline(infile, str))
        {
            num++;
        p:
            cout << num << ".  " << str << "\t";
            cin >> temp;
            if (temp > 5)
            {
                cout << "\nOpps You entered out of range.\n\nPlease enter between 1 to 5.\n\n";
                goto p;
            }
            score += temp / 2;
            cout << "\n\n";
        }
        infile.close();
        cout << "\n\nYour Expected age is: " << score + 30;
        break;
    default:
        break;
    }
    outfile.close();
    cout << "\n\n";
    system("pause");
    return 0;
}