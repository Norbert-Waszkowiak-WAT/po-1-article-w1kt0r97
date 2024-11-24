#ifndef UNTITLED1_CHAPTER_H
#define UNTITLED1_CHAPTER_H
#include <iostream>
#include <string>
#include "author.cpp"
#include "article.cpp"
class Chapter{
    private:
        std::string title;
        Author author;
        int chapterNumber;
    public:
        Chapter()
        : title(""), author(Author()), chapterNumber(1){};

        Chapter(std::string chapterTitle, Author chapterAuthor, int number)
        : title(chapterTitle), author(chapterAuthor), chapterNumber(number){};

        Chapter(const Chapter &other)
        : title(other.title), author(other.author), chapterNumber(other.chapterNumber){};

        Chapter(Article &article)
        : title(article.getTitle()), author(article.getAuthor()), chapterNumber(1){};

        int getChapterNumber(){
            return chapterNumber;
        };
        Author getAuthor(){
            return author;
        };
        std::string getTitle(){
            return title;
        };
        void displayInfo(){
            std::cout<<"Chapter "<< chapterNumber<< ": " << title<<" by "<<author.getName()<<" "<<author.getSurname()<< std::endl;
        };
};
#endif