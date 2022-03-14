#include <iostream>

class Movie{
    string rating;
public:
    string director;
    string title;
    Movie(string aDirector, string aTitle, string aRating){
        director = aDirector;
        title = aTitle;
        setRating(aRating);
    }
    void setRating(string aRating){
        rating = aRating;
        if (aRating == "PG" || aRating == "PG" || aRating == "R", aRating == "FV"){
            rating = aRating;
        } else{
            rating = "NR";
        }
    }
    string getRating(){
        return rating;
    }
};

void setting(){
    Movie movie("BArry G", "Teken", "FV");
    cout<<"Movie director "<<movie.director<<endl;
    //movie.setRating("R");
    cout<<"Rating "<<movie.getRating()<<endl;
}