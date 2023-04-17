#include <iostream>

using namespace std;

enum Rating {G, PG, PG13, R, X};

struct Movie
{
   string movieTitle;
   int year;
   Rating movieRating;

};

string getRating(Rating rating)
{
   switch(rating)
   {
      case G: return "G";
      case PG: return "PG";
      case PG13: return "PG13";
      case R: return "R";
      case X: return "X";
      default: return "";
   
   }
}


int main()
{
   cout << "Favorite Movies!" << endl;  
   Movie favorite = {"Princess Bride", 1987, PG};
   cout << getRating(favorite.movieRating) << endl;

   return 0;


}