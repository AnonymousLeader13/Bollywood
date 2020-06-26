#include<bits/stdc++.h>

using namespace std;
string getMovie() {
		string movies[]= {"FALTU", "KABIR SINGH", "TANHAJI", "DABANGG", "CHHAPAAK",
		 "WAR", "HOUSEFULL", "KESARI", "CHHICHHORE", "BADLA", "ANDHADHUNDH",
		  "BADHAI HO", "URI", "GULLY BOY", "MISSION MANGAL", "DREAM GIRL", "KALANK",
		  "THE ZOYA FACTOR", "DE DE PYAAR DE", "GOOD NEWWZ", "PATI PATNI AUR WOH",
		  "BALA", "LUKA CHUPPI", "MALAAL", "PANGA", "LOVE AAJ KAL", "MALANG",
		  "LAL SINGH CHADDHA", "BHOOT", "JAWAANI JAANEMAN", "PK"};
		srand(time(0));

        int movieIndex = rand() % 31;
		//cout<< movieIndex;

		string movie = movies [movieIndex];
		return movie;
	}

int main(){

    cout<< "WELCOME TO BOLLYWOOD, let's check your knowledge\n\n\n'only use capital letters'\n\n";
    system("pause");

    string movie = getMovie();
    //cout<< movie;
    system("cls");
    //cout<< movie;


		//string movie = "FALTU";
		char bollywood[] = {'B', 'O', 'L', 'L', 'Y', 'W', 'O', 'O', 'D'};
		int ind_for_bolly= 0;
		set <char, greater <char> > characters_entered;
		set <char, greater <char> > characters_of_movies;
		for(int i =0; i<movie.length(); i++){
			if(movie[i] != 'A' && movie[i] != 'E' && movie[i] != 'I' && movie[i] != 'O' && movie[i] != 'U' && movie[i] != ' ' )
			{
				characters_of_movies.insert(movie[i]);
			}

		}

		int size_of_bollywood = sizeof(bollywood)/sizeof(bollywood[0]);
		while(ind_for_bolly < size_of_bollywood && characters_entered != characters_of_movies )
		{

			for(int i =0; i<ind_for_bolly; i++) {
				cout<< "X ";
			}
			for(int i=ind_for_bolly; i<size_of_bollywood; i++) {
				cout << bollywood[i] << " ";
			}		// printing bollywood

			cout<<"\n";
			for(int i =0; i<movie.length(); i++) 	//printing movie name
			{
				if(movie[i] == 'A' || movie[i] == 'E' || movie[i] == 'I' || movie[i] == 'O' || movie[i] == 'U' )
				{
					cout<< movie[i] << " ";
				}
				else if(characters_entered.count(movie[i]))
				{
				    //s.find(key) != s.end()
					cout<<movie[i] << " ";
				}
				else if(movie[i] == ' ') {
					cout<<"/ ";
				}
				else {
					cout << "_ ";
				}
			}

			char ch;
			cin>>ch;
			if(!characters_of_movies.count(ch)) {
						//changing bollywood
				if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' )
				ind_for_bolly++;
			}
			else {		//
				if(ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U' && characters_of_movies.count(ch))
				{
					characters_entered.insert(ch);
				}
			}
			cout<<"\n";

			system("cls");
		}
		if(characters_entered == characters_of_movies) {
			cout<<"CONGRATULATIONS, YOU RIGHTLY GUESSED THE MOVIE " << movie<< " :D ";
		}
		else if(ind_for_bolly >= movie.length()) {
			cout<<"Sorry, Try Again. The movie was..... " << movie;
		}

		 //cin.ignore();
		 cout<<"\n";
		 system("pause");
		 return 0;
}
