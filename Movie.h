#ifndef MOVIE_
#define MOVIE_

#include <iostream>
#include <string>

class Movie {
public:
    /// <summary>
    /// Constructs a Movie object with given title, year, director, and category.
    /// </summary>
    /// <param name="title">The title of the movie.</param>
    /// <param name="year">The year of production.</param>
    /// <param name="director">The director of the movie.</param>
    /// <param name="category">The category of the movie.</param>
    Movie(const std::string& title, int year, const std::string& director, const std::string& category);

    ~Movie();

    void printInfo() const;

    std::string getTitle() const;
    void setTitle(const std::string& title);

    int getYear() const;
    void setYear(int year);

    std::string getDirector() const;
    void setDirector(const std::string& director);

    std::string getCategory() const;
    void setCategory(const std::string& category);

private:
    std::string title;
    int year;
    std::string director;
    std::string category;
};

#endif // MOVIE_
