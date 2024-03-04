#include "Movie.h"
#include <iostream>

Movie::Movie(const std::string& title, int year, const std::string& director, const std::string& category)
    : title(title), year(year), director(director), category(category) {
    std::cout << "Creating a Movie object: " << title << std::endl;
}

Movie::~Movie() {
    std::cout << "Destroying the Movie object: " << title << std::endl;
}

void Movie::printInfo() const {
    std::cout << "Title: " << title << std::endl;
    std::cout << "Year: " << year << std::endl;
    std::cout << "Director: " << director << std::endl;
    std::cout << "Category: " << category << std::endl;
}

std::string Movie::getTitle() const {
    return title;
}

void Movie::setTitle(const std::string& title_) {
    title = title_;
}

int Movie::getYear() const {
    return year;
}

void Movie::setYear(int year_)
{
    year = year_;
}

std::string Movie::getDirector() const {
    return director;
}

void Movie::setDirector(const std::string& director_) {
    director = director_;
}

std::string Movie::getCategory() const {
    return category;
}

void Movie::setCategory(const std::string& category_) {
    category = category_;
}
