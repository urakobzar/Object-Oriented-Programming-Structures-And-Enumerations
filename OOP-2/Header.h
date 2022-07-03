#pragma once
#include <iostream>
#include <string>

using namespace std;

enum MainMenuItems
{
	FirstTask = 1,
	ThirdAndFourth = 2,
	Fifth = 3,
	Sixth = 4,
	Seventh = 5,
	Eighth = 6,
	Ninth = 7,
	Exit = 8
};

enum ThirdAndFourthItems
{
	RectangleItem = 1,
	FlightItem = 2,
	MovieItem = 3,
	TimeItem = 4,
	WrongPointersItem = 5,
};


/// @brief Функция корректного считывания значения
/// @return Результат считывания введённого значения
double ReadingCorrectValue();

/// @brief Функция корректного считывания размера
/// @return Результат считывания введённого значения
int ReadingCorrectSize();

/// @brief Функция корректного считывания количества часов (0-24)
/// @return Результат считывания введённого значения
int ReadingCorrectHour();

/// @brief Функция корректного считывания количества минут (0-60)
/// @return Результат считывания введённого значения
int ReadingCorrectMinute();

// Нужно для перевода значения Перечесление в символьный тип 
static const char* EnumStrings[] =
{ "Comedy", "Drama", "Thriller", "Action", "Horror", "Blockbuster" };

/// @brief Функция для перевода значения Перечесление в символьный тип
/// @param enumVal Элемент перечисления
/// @return Название перечисления в символьном типе
const char* GetTextForEnum(int enumVal);


// Структура Прямоугольник 
struct Rectangle
{
	// Вещественное поле Длина 
	float Length;
	// Вещественное поле Ширина 
	float Width;
	// Строковое поле Цвет 
	string Color;
};

// Структура Рейс 
struct Flight
{
	// Строковое поле Пункт Вылета 
	string PointOfDeparture;
	// Строковое поле Пункт назначения 
	string Destination;
	// Целочисленное поле Время полета в минутах 
	int FlightTime;
};

// Структура Фильм 
struct Movie
{
	// Строковое поле Название 
	string Title;
	// Целочисленное поле Продолжительность в минутах 
	int Time;
	// Целочисленное поле Год выпуска 
	int YearOfRelease;
	// Строковое поле Жанр 
	string Genre;
	// Вещественное поле Рейтинг 
	float Rating;
};

// Структура Время 
struct Time
{
	// Целочисленное поле Часы (от 0 до 23) 
	int Hour;
	// Целочисленное поле Минуты (от 0 до 60) 
	int Minute;
	// Целочисленное поле Секунды (от 0 до 60) 
	int Second;
};

// Контакт(в телефонной книжке на смартфоне)
struct Contact
{
	// Имя контакта
	string Name;
	// Электронная почта контакта
	string Email;
	// Номер контакта
	int Number;
};

// Песня(в плеере)
struct Song
{
	// Название песни
	string Title;
	// Автор песни
	string Author;
	// Продолжительность в секундах
	int Time;
};

// Дисциплина(как запись в зачетной книжке)
struct Discipline
{
	// Название дисциплины
	string Title;
	// Имя преподавателя
	string Name;
	// Оценка за дисциплину
	int Mark;
};

// Структура круг
struct Circle
{
	// X-координата центра круга 
	double X;
	// Y-координата центра круга 
	double Y;
	// Радиус
	double Radius;
	// Цвет 
	string Color;
};

//2.2.9
struct Movie1
{
	string Title;
	int Time;
	int YearOfRelease;
	enum Genre Genre;
	float Rating;
};


//2.2.8.1
enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Cyan,
	Blue,
	Purple
};

//2.2.8.1
enum DayOfWeek
{
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

//2.2.8.1
enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};

//2.2.8.2
enum FormOfStudentEducation
{
	FullTime,
	PartTime,
	Evening,
	Remote
};

//2.2.8.2
enum SmartphoneManufacturers
{
	Apple,
	Samsung,
	Huawei,
	Xiaomi
};

//2.2.8.2
enum SeasonOfYear
{
	Winter,
	Spring,
	Summer,
	Autumn
};


//2.1.1.1 and 2.1.1.2
void Sort(double* values, int count);

//2.1.1.1 and 2.1.1.2
void DemoSort();

//2.2.3 and 2.2.4
void DemoRectangle();

//2.2.3 and 2.2.4
void DemoFlight();

//2.2.3 and 2.2.4
void DemoMovie();

//2.2.3 and 2.2.4
void DemoTime();

//2.2.4.4
void WrongPointers();


//2.2.5.1
void WriteRectangle(Rectangle& rectangle);

//2.2.5.2
void ReadRectangle(Rectangle& rectangle);

//2.2.5.3
void DemoReadAndWriteRectangles();

//2.2.5.4
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

//2.2.5.5
void FindRectangle(Rectangle* rectangle, int count);

//2.2.5.6
void FindMaxRectangle(Rectangle* rectangle, int count);


//2.2.6.1
void DemoDynamicFlight();

//2.2.6.3
void FindShortestFlight(Flight* flight, int count);

//2.2.6.2
void DemoDynamicFlights();


//2.2.7.1
Circle* MakeCircle(double x, double y, double radius, string color);

//2.2.7.1
Circle* CopyCircle(Circle& circle);

//2.2.7.1
void DemoCircle();

//2.2.7.2
Rectangle* MakeRectangle(string color, float length, float width);

//2.2.7.2
Flight* MakeFlight(string pointOfDeparture, string destination, int flightTime);

//2.2.7.2
Movie* MakeMovie(string title, string genre, int year, double rating, int time);

//2.2.7.2
Time* MakeTime(int hour, int minute, int second);

//2.2.7.3
Rectangle* CopyRectangle(Rectangle& rectangle);

//2.2.7.3
Flight* CopyFlight(Flight& flight);

//2.2.7.3
Movie* CopyMovie(Movie& movie);

//2.2.7.3
Time* CopyTime(Time& time);


//2.2.8.3 and 2.2.8.4
void DemoEnums();

//2.2.8.5
void WriteColor(Color color);

//2.2.8.6
Color ReadColor();

//2.2.8.7
int CountRed(Color* color, int count);

//2.2.8.8
int CountColor(Color* color, int count, Color findedColor);


//2.2.9.3
Movie1* MakeMovieWithGenre(string title, enum Genre genre, int year, double rating, int time);

//2.2.9.4
int CountMoviesByGenre(Movie1* movie, int count, Genre findGenre);

//2.2.9.5
Movie1* FindBestGenreMovie(Movie1* movie, int count, Genre findGenre);

//2.2.9.2 and 2.2.9.3
void DemoMovieWithGenre();