#include <iostream>
#include <exception>
#include "Header.h"

using namespace std;


double ReadingCorrectValue()
{
	double value;
	while (true)
	{
		if (cin >> value)
		{
			break;
		}
		cout << "Unfortunately, you made a mistake\n";
		cout << "(The input value must be an integer)\n";
		cout << "Enter again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return value;
}

int ReadingCorrectSize()
{
	int size;
	while (true)
	{
		cin >> size;
		if (size <= 0)
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater than 0)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return size;
}

int ReadingCorrectHour()
{
	int hour;
	while (true)
	{
		cin >> hour;
		if ((hour < 0)||(hour >= 24))
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater or equal than 0 and lesser than 24)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return hour;
}


int ReadingCorrectMinute()
{
	int minute;
	while (true)
	{
		cin >> minute;
		if ((minute < 0) || (minute >= 60))
		{
			cout << "Unfortunately, you made a mistake\n";
			cout << "(The initial number must be an integer";
			cout << " greater or equal than 0 and lesser than 60)\n";
			cout << "Enter again: ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
		{
			break;
		}
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return minute;
}

const char* GetTextForEnum(int enumVal)
{
	return EnumStrings[enumVal];
}


//2.1.1.1 and 2.1.1.2
void Sort(double* values, int count)
{
	
		if (count < 0)
		{
			throw exception("Exception catched!");
		}
		double swap; 
		for (int i = 0; i < count; i++) 
		{ 
			for (int j = 0; j < count; j++) 
			{ 
				if (values[i] < values[j]) 
				{ 
					swap = values[i]; 
					values[i] = values[j]; 
					values[j] = swap; 
				} 
			} 
		} 
	

}

//2.1.1.1 and 2.1.1.2
void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;
	Sort(values, count);
	for (int i = 0; i < 5; i++)
	{
		cout << values[i] << " ";
	}
	cout << endl;
	try
	{
		Sort(values, -1);
	}
	catch (const exception& error)
	{
		cout << error.what() << " Error!" << endl;
	}
}


//2.2.3 and 2.2.4
void DemoRectangle()
{
	//2.2.3.1 and 2.2.4.1 and 2.2.4.2
	cout << "\nTask 2.2.3.1 and 2.2.4.1 and 2.2.4.2\n";
	Rectangle* rectangle1 = new Rectangle;
	rectangle1->Color = {"Red"};
	rectangle1->Length = 5;
	rectangle1->Width = 10;
	cout << "\n\nRectangle1";
	cout << "\nColor: " << rectangle1->Color;
	cout << "\nLength: " << rectangle1->Length;
	cout << "\nWidth: " << rectangle1->Width;
	cout << endl;
	Rectangle* pointerRectangle = rectangle1;
	cout << "\nAdress of First pointer: ";
	cout << rectangle1; 
	cout << "\nAdress of Second pointer: ";
	cout << pointerRectangle << endl << endl;

	//2.2.3.2
	cout << "\nTask 2.3.3.2\n";
	Rectangle* rectangle2 = new Rectangle;
	cout << "Enter a Color: ";
	cin >> (rectangle2->Color);
	cout << "Enter a Length: ";
	rectangle2->Length = ReadingCorrectSize();
	cout << "Enter a Width: ";
	rectangle2->Width = ReadingCorrectSize();

	//2.2.3.3
	cout << "\nTask 2.3.3.3\n";
	Rectangle* rectangle = new Rectangle[5];
	cout << "Enter a number of calls function: ";
	int numberCalls = ReadingCorrectSize();
	if (numberCalls > 5)
	{
		cout << "ERROR! Calls function more than 5";
		cout << "Return to main menu";
		return;
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "Enter a Color: ";
		cin >> (rectangle[i].Color);
		cout << "Enter a Length: ";
		rectangle[i].Length = ReadingCorrectSize();
		cout << "Enter a Width: ";
		rectangle[i].Width = ReadingCorrectSize();
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\n\nRectangle";
		cout << "\nColor: " << rectangle[i].Color;
		cout << "\nLength: " << rectangle[i].Length;
		cout << "\nWidth: " << rectangle[i].Width;
		cout << endl;
	}
} 

//2.2.3 and 2.2.4
void DemoFlight()
{
	// 2.2.3.1 and 2.2.4.1 and 2.2.4.3
	cout << "\nTask 2.2.3.1 and 2.2.4.1 and 2.2.4.2\n";
	Flight* flight1 = new Flight;
	flight1->PointOfDeparture = {"Tomsk"};
	flight1->Destination = {"Moscow"};
	flight1->FlightTime = 180;
	cout << "\n\nFlight";
	cout << "\nPoint Of Departure: " << flight1->PointOfDeparture;
	cout << "\nDestination: " << flight1->Destination;
	cout << "\nFlight Time: " << flight1->FlightTime;
	Flight* pointerFlight = flight1;
	cout << "\nAdress of First pointer: ";
	cout << flight1;
	cout << "\nAdress of Second pointer: ";
	cout << pointerFlight;

	// 2.2.3.2
	cout << "\nTask 2.3.3.2\n";
	Flight* flight2 = new Flight;
	cout << "\nEnter a Point Of Departure: ";
	cin >> flight2->PointOfDeparture;
	cout << "\nEnter a Destination: ";
	cin >> flight2->Destination;
	cout << "\nEnter a Flight Time: ";
	flight2->FlightTime = ReadingCorrectSize();

	// 2.3.3.3
	cout << "\nTask 2.3.3.3\n";
	Flight* flight = new Flight[5];
	cout << "Enter a number of calls function: ";
	int numberCalls = ReadingCorrectSize();
	if (numberCalls > 5)
	{
		cout << "ERROR! Calls function more than 5";
		cout << "Return to main menu";
		return;
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\nEnter a Point Of Departure: ";
		cin >> flight[i].PointOfDeparture;
		cout << "\nEnter a Destination: ";
		cin >> flight[i].Destination;
		cout << "\nEnter a Flight Time: ";
		flight[i].FlightTime = ReadingCorrectSize();
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\n\nFlight";
		cout << "\nPoint Of Departure: " << flight[i].PointOfDeparture;
		cout << "\nDestination: " << flight[i].Destination;
		cout << "\nFlight Time: " << flight[i].FlightTime;
	}
} 

//2.2.3 and 2.2.4
void DemoMovie()
{ 
	// 2.2.3.1 and 2.2.4.1 and 2.2.4.3
	cout << "\nTask 2.2.3.1 and 2.2.4.1 and 2.2.4.2\n";
	Movie* movie1 = new Movie;
	movie1->Title = {"Star Wars X"};
	movie1->Time = 145;
	movie1->YearOfRelease = 2025;
	movie1->Genre = {"Fantastic"};
	movie1->Rating = 7.7;
	cout << "\n\nMovie";
	cout << "\nTitle: " << movie1->Title;
	cout << "\nTime: " << movie1->Time;
	cout << "\nYearOfRelease: " << movie1->YearOfRelease;
	cout << "\nGenre: " << movie1->Genre;
	cout << "\nRating: " << movie1->Rating;
	Movie* pointerMovie = movie1;
	cout << "\nAdress of First pointer: ";
	cout << movie1; 
	cout << "\nAdress of Second pointer: ";
	cout << pointerMovie;

	// 2.2.3.2
	cout << "\nTask 2.3.3.2\n";
	Movie* movie2 = new Movie;
	cout << "\nEnter a Title: ";
	cin >> movie2->Title;
	cout << "\nEnter a Time: ";
	movie2->Time = ReadingCorrectSize();
	cout << "\nEnter a Year Of Release: ";
	movie2->YearOfRelease = ReadingCorrectSize();
	cout << "\nEnter a Genre: ";
	cin >> movie2->Genre;
	cout << "\nEnter a Rating: ";
	movie2->Rating = ReadingCorrectValue();

	// 2.3.3.3
	cout << "\nTask 2.3.3.3\n";
	Movie* movie = new Movie[5];
	cout << "Enter a number of calls function: ";
	int numberCalls = ReadingCorrectSize();
	if (numberCalls > 5)
	{
		cout << "ERROR! Calls function more than 5";
		cout << "Return to main menu";
		return;
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\nEnter a Title: ";
		cin >> movie[i].Title;
		cout << "\nEnter a Time: ";
		movie[i].Time = ReadingCorrectSize();
		cout << "\nEnter a Year Of Release: ";
		movie[i].YearOfRelease = ReadingCorrectSize();
		cout << "\nEnter a Genre: ";
		cin >> movie[i].Genre;
		cout << "\nEnter a Rating: ";
		movie[i].Rating = ReadingCorrectValue();
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\n\nMovie";
		cout << "\nTitle: " << movie[i].Title;
		cout << "\nTime: " << movie[i].Time;
		cout << "\nYearOfRelease: " << movie[i].YearOfRelease;
		cout << "\nGenre: " << movie[i].Genre;
		cout << "\nRating: " << movie[i].Rating;
	}
} 

//2.2.3 and 2.2.4
void DemoTime()
{ 
	// 2.2.3.1 and 2.2.4.1 and 2.2.4.3
	cout << "\nTask 2.2.3.1 and 2.2.4.1 and 2.2.4.2\n";
	Time* time1 = new Time;
	time1->Hour = 21;
	time1->Minute = 54;
	time1->Second = 45;
	cout << "\n\nTime";
	cout << "\nHour: " << time1->Hour;
	cout << "\nMinute: " << time1->Minute;
	cout << "\nSecond: " << time1->Second;
	Time* pointerTime = time1;
	cout << "\nAdress of First pointer: ";
	cout << time1;
	cout << "\nAdress of Second pointer: ";
	cout << pointerTime;

	// 2.2.3.2
	cout << "\nTask 2.3.3.2\n";
	Time* time2 = new Time;
	cout << "\nEnter a Hour: ";
	time2->Hour = ReadingCorrectHour();
	cout << "\nEnter a Minute: ";
	time2->Minute = ReadingCorrectMinute();
	cout << "\nEnter a Second: ";
	time2->Second = ReadingCorrectMinute();

	// 2.3.3.3
	cout << "\nTask 2.3.3.3\n";
	Time* time = new Time[5];
	cout << "Enter a number of calls function: ";
	int numberCalls = ReadingCorrectSize();
	if (numberCalls > 5)
	{
		cout << "ERROR! Calls function more than 5";
		cout << "Return to main menu";
		return;
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\nEnter a Hour: ";
		time[i].Hour = ReadingCorrectHour();
		cout << "\nEnter a Minute: ";
		time[i].Minute = ReadingCorrectMinute();
		cout << "\nEnter a Second: ";
		time[i].Second = ReadingCorrectMinute();
	}
	for (int i = 0; i < numberCalls; i++)
	{
		cout << "\n\nTime";
		cout << "\nHour: " << time[i].Hour;
		cout << "\nMinute: " << time[i].Minute;
		cout << "\nSecond: " << time[i].Second;
	}
}

//2.2.4.4
void WrongPointers()
{
	cout << "\nTask 2.2.4.4\n";
	Movie movie;
	Flight flight;
	Movie* pointerMovie = &movie;
	Flight* pointerFlight = &flight;
	cout << "\nPointer Movie: " << pointerMovie;
	cout << "\nPointer Flight: " << pointerFlight;
	//pointerMovie = &flight;
	//pointerFlight = &movie;
}


//2.2.5.1
void WriteRectangle(Rectangle& rectangle)
{
	cout << "\n\nColor: " << rectangle.Color;
	cout << "\nLength: " << rectangle.Length;
	cout << "\nWidth: " << rectangle.Width;
}

//2.2.5.2
void ReadRectangle(Rectangle& rectangle)
{
	cout << "\nEnter a Color: ";
	cin >> (rectangle.Color);
	cout << "Enter a Length: ";
	rectangle.Length = ReadingCorrectSize();
	cout << "Enter a Width: ";
	rectangle.Width = ReadingCorrectSize();
}

//2.2.5.3
void DemoReadAndWriteRectangles()
{
	Rectangle rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		ReadRectangle(rectangle[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		WriteRectangle(rectangle[i]);
	}
}

//2.2.5.4
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	string temporaryString = rectangle1.Color;
	rectangle1.Color = rectangle2.Color;
	rectangle2.Color = temporaryString;
	int temporaryInt = rectangle1.Length;
	rectangle1.Length = rectangle2.Length;
	rectangle2.Length = temporaryInt;
	temporaryInt = rectangle1.Width;
	rectangle1.Width = rectangle2.Width;
	rectangle2.Width = temporaryInt;
	WriteRectangle(rectangle1);
	WriteRectangle(rectangle2);
}

//2.2.5.5
void FindRectangle(Rectangle* rectangle, int count)
{
	int maximumLength = rectangle[0].Length;
	int index = 0;
	for (int i = 1; i < count; i++)
	{
		if (maximumLength < rectangle[i].Length)
		{
			maximumLength = rectangle[i].Length;
			index = i;
		}
	}
	cout << "The rectangle with the maximum length has the size: ";
	cout << rectangle[index].Length << "x" << rectangle[index].Width;
}

//2.2.5.6
void FindMaxRectangle(Rectangle* rectangle, int count)
{
	int maximumArea = rectangle[0].Length * rectangle[0].Width;
	int index = 0;
	for (int i = 1; i < count; i++)
	{
		if (maximumArea < (rectangle[i].Length * rectangle[i].Width))
		{
			maximumArea = rectangle[i].Length * rectangle[i].Width;
			index = i;
		}
	}
	cout << "The rectangle with the maximum area has the size: ";
	cout << rectangle[index].Length << "x" << rectangle[index].Width;
}


//2.2.6.1
void DemoDynamicFlight()
{
	Flight* pointer;
	Flight* flight = new Flight;
	pointer = flight;
	pointer->PointOfDeparture = { "Tomsk" };
	pointer->Destination = { "Moscow" };
	pointer->FlightTime = 180;
	cout << "\n\nFlight";
	cout << "\nPoint Of Departure: " << pointer->PointOfDeparture;
	cout << "\nDestination: " << pointer->Destination;
	cout << "\nFlight Time: " << pointer->FlightTime;
	delete pointer;
}

//2.2.6.3
void FindShortestFlight(Flight* flight, int count)
{
	int shortestTime = flight[0].FlightTime;
	int index = 0;
	for (int i = 1; i < count; i++)
	{
		if (shortestTime > flight[i].FlightTime)
		{
			shortestTime = flight[i].FlightTime;
			index = i;
		}
	}
	cout << "\n\nShortest Flight: " << index + 1 << endl;
	cout << "\nPoint Of Departure: " << flight[index].PointOfDeparture;
	cout << "\nDestination: " << flight[index].Destination;
	cout << "\nFlight Time: " << flight[index].FlightTime;
}

//2.2.6.2
void DemoDynamicFlights()
{
	Flight* flight = new Flight[4];
	flight[0].PointOfDeparture = { "Tomsk" };
	flight[0].Destination = { "Moscow" };
	flight[0].FlightTime = 180;
	flight[1].PointOfDeparture = { "Moscow" };
	flight[1].Destination = { "Berlin" };
	flight[1].FlightTime = 120;
	flight[2].PointOfDeparture = { "London" };
	flight[2].Destination = { "Paris" };
	flight[2].FlightTime = 140;
	flight[3].PointOfDeparture = { "Saint Petersburg" };
	flight[3].Destination = { "Novosibirsk" };
	flight[3].FlightTime = 240;
	for (int i = 0; i < 4; i++)
	{
		cout << "\n\nFlight: " << i + 1 << endl;
		cout << "\nPoint Of Departure: " << flight[i].PointOfDeparture;
		cout << "\nDestination: " << flight[i].Destination;
		cout << "\nFlight Time: " << flight[i].FlightTime;
	}

	//2.2.6.3
	FindShortestFlight(flight, 4);

	delete[] flight;
}


//2.2.7.1
Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* circle = new Circle();
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

//2.2.7.1
Circle* CopyCircle(Circle& circle)
{
	Circle* copiedCircle = new Circle;
	copiedCircle->X = circle.X;
	copiedCircle->Y = circle.Y;
	copiedCircle->Radius = circle.Radius;
	copiedCircle->Color = circle.Color;
	return copiedCircle;
}

//2.2.7.1
void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");
	Circle* copiedCircle1 = CopyCircle(*circle1);
	Circle* copiedCircle2 = CopyCircle(*circle2);
	Circle* copiedCircle3 = CopyCircle(*circle3);
}

//2.2.7.2
Rectangle* MakeRectangle(string color, float length, float width)
{
	Rectangle* rectangle = new Rectangle();
	rectangle->Color = color;
	rectangle->Width = width;
	rectangle->Length = length;
	return rectangle;
}

//2.2.7.2
Flight* MakeFlight(string pointOfDeparture, string destination, int flightTime)
{
	Flight* flight = new Flight();
	flight->PointOfDeparture = pointOfDeparture;
	flight->Destination = destination;
	flight->FlightTime = flightTime;
	return flight;
}

//2.2.7.2
Movie* MakeMovie(string title, string genre, int year, double rating, int time)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->Genre = genre;
	movie->YearOfRelease = year;
	movie->Rating = rating;
	movie->Time = time;
	return movie;
}

//2.2.7.2
Time* MakeTime(int hour, int minute, int second)
{
	Time* time = new Time();
	time->Hour = hour;
	time->Minute = minute;
	time->Second = second;
	return time;
}

//2.2.7.3
Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copiedRectangle = new Rectangle();
	copiedRectangle->Color = rectangle.Color;
	copiedRectangle->Length = rectangle.Length;
	copiedRectangle->Width = rectangle.Width;
	return copiedRectangle;
}

//2.2.7.3
Flight* CopyFlight(Flight& flight)
{
	Flight* copiedFlight = new Flight();
	copiedFlight->PointOfDeparture = flight.PointOfDeparture;
	copiedFlight->Destination = flight.Destination;
	copiedFlight->FlightTime = flight.FlightTime;
	return copiedFlight;
}

//2.2.7.3
Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = new Movie();
	copiedMovie->Title = movie.Title;
	copiedMovie->Genre = movie.Genre;
	copiedMovie->YearOfRelease = movie.YearOfRelease;
	copiedMovie->Rating = movie.Rating;
	return copiedMovie;
}

//2.2.7.3
Time* CopyTime(Time& time)
{
	Time* copiedTime = new Time();
	copiedTime->Hour = time.Hour;
	copiedTime->Minute = time.Minute;
	copiedTime->Second = time.Second;
	return copiedTime;
}


//2.2.8.3 and 2.2.8.4
void DemoEnums()
{
	Color color(Purple);
	cout << color << endl;
	DayOfWeek dayOfWeek(Tuesday);
	cout << dayOfWeek << endl;
	Genre genre(Drama);
	cout << genre << endl;
	FormOfStudentEducation formOfStudentEducation(Evening);
	cout << formOfStudentEducation << endl;
	SmartphoneManufacturers smartphoneManufacturers(Apple);
	cout << smartphoneManufacturers << endl;
	SeasonOfYear seasonOfYear(Autumn);
	cout << seasonOfYear << endl;
	int colorArray[] = { Red, Orange, Yellow, Green, Cyan, Blue, Purple };
	int dayOfWeekArray[] = { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
	int genreArray[] = { Comedy, Drama, Thriller, Action, Horror, Blockbuster };
	int formOfStudentEducationArray[] = { FullTime, PartTime, Evening, Remote };
	int smartphoneManufacturersArray[] = { Apple, Samsung, Huawei, Xiaomi };
	int seasonOfYearArray[] = { Winter, Spring, Summer, Autumn };
}

//2.2.8.5
void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color" << endl;
			break;
		}

		case Orange:
		{
			cout << "Orange color" << endl;
			break;
		}

		case Yellow:
		{
			cout << "Yellow color" << endl;
			break;
		}

		case Green:
		{
			cout << "Green color" << endl;
			break;
		}

		case Cyan:
		{
			cout << "Cyan color" << endl;
			break;
		}

		case Blue:
		{
			cout << "Blue color" << endl;
			break;
		}

		case Purple:
		{
			cout << "Purple color" << endl;
			break;
		}
	}
}

//2.2.8.6
Color ReadColor()
{
	cout << "\nPlease enter a number between 0 and 6: \n";
	cout << "\nRed: 0";
	cout << "\nOrange: 1";
	cout << "\nYellow: 2";
	cout << "\nGreen: 3";
	cout << "\nCyan: 4";
	cout << "\nBlue: 5";
	cout << "\nPurple: 6";
	cout << "\nMake your choice: ";
	int menuNumber = ReadingCorrectValue();
	switch (menuNumber)
	{
		case Red:
		{
			return Red;
			break;
		}

		case Orange:
		{
			return Orange;
			break;
		}

		case Yellow:
		{
			return Yellow;
			break;
		}

		case Green:
		{
			return Green;
			break;
		}

		case Cyan:
		{
			return Cyan;
			break;
		}

		case Blue:
		{
			return Blue;
			break;
		}

		case Purple:
		{
			return Purple;
			break;
		}
	}
}

//2.2.8.7
int CountRed(Color* color, int count)
{
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == Red)
		{
			counter++;
		}
	}
	return counter;
}

//2.2.8.8
int CountColor(Color* color, int count, Color findedColor)
{
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if (color[i] == findedColor)
		{
			counter++;
		}
	}
	return counter;
}


//2.2.9.3
Movie1* MakeMovieWithGenre(string title, enum Genre genre, int year, double rating, int time)
{
	Movie1* movie = new Movie1();
	movie->Title = title;
	movie->Genre = genre;
	movie->YearOfRelease = year;
	movie->Rating = rating;
	movie->Time = time;
	return movie;
}

//2.2.9.4
int CountMoviesByGenre(Movie1* movie, int count, Genre findGenre)
{
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if (movie[i].Genre == findGenre)
		{
			counter++;
		}
	}
	return counter;
}

//2.2.9.5
Movie1* FindBestGenreMovie(Movie1* movie, int count, Genre findGenre)
{
	Movie1* pointer = nullptr;
	int maxRating = -1;
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if ((movie[i].Genre == findGenre) && (maxRating < movie[i].Rating))
		{
			maxRating = movie[i].Rating;
			pointer = &movie[i];
		}
	}
	return pointer;
}

//2.2.9.2 and 2.2.9.3
void DemoMovieWithGenre()
{
	//2.2.9.2
	cout << "\n\nTask 2.2.9.2\n";
	Movie1 movie;
	movie.Title = "Star Wars X";
	movie.Time = 230;
	movie.YearOfRelease = 2025;
	movie.Genre = Action;
	movie.Rating;

	//2.2.9.3
	cout << "\n\nTask 2.2.9.3\n";
	Movie1* movie1 = MakeMovieWithGenre("Star Wars XI", Action, 2030, 6.5, 240);
	delete movie1;

	//2.2.9.4
	cout << "\n\nTask 2.2.9.4\n\n";
	Movie1* movies = new Movie1[10];
	movies[0] = *MakeMovieWithGenre("Star Wars XII", Action, 2032, 5.5, 222);
	movies[1] = *MakeMovieWithGenre("Star Wars XIII", Drama, 2034, 6.5, 225);
	movies[2] = *MakeMovieWithGenre("Star Wars XIV", Blockbuster, 2030, 7.5, 230);
	movies[3] = *MakeMovieWithGenre("Star Wars XV", Action, 2036, 6.5, 235);
	movies[4] = *MakeMovieWithGenre("Star Wars XVI", Blockbuster, 2030, 8.5, 200);
	movies[5] = *MakeMovieWithGenre("Star Wars XVII", Action, 2038, 9.5, 210);
	movies[6] = *MakeMovieWithGenre("Star Wars XVIII", Drama, 2040, 1.5, 190);
	movies[7] = *MakeMovieWithGenre("Star Wars XIX", Horror, 2042, 2.5, 300);
	movies[8] = *MakeMovieWithGenre("Star Wars XX", Blockbuster, 2044, 3.5, 122);
	movies[9] = *MakeMovieWithGenre("Star Wars XXI", Action, 2046, 4.5, 250);
	for (int i = 0; i < 10; i++)
	{
		cout << "\n\nMovie " << i + 1;
		cout << "\nTitle: " << movies[i].Title;
		cout << "\nTime: " << movies[i].Time;
		cout << "\nYearOfRelease: " << movies[i].YearOfRelease;
		cout << "\nGenre: " << GetTextForEnum(movies[i].Genre);
		cout << "\nRating: " << movies[i].Rating;
	}
	cout << "\n\n\nNumber of Action films: " << CountMoviesByGenre(movies, 10, Action);

	//2.2.9.5
	cout << "\n\nTask 2.2.9.5\n";
	Movie1* pointer = FindBestGenreMovie(movies, 10, Action);
	if (pointer == nullptr)
	{
		cout << "Film with this Genre not exist";
	}
	else
	{
		cout << "\n\nFilm with the best Rating in this Genre:\n";
		cout << "\nTitle: " << pointer->Title;
		cout << "\nTime: " << pointer->Time;
		cout << "\nYearOfRelease: " << pointer->YearOfRelease;
		cout << "\nGenre: " << GetTextForEnum(pointer->Genre);
		cout << "\nRating: " << pointer->Rating;
	}
	delete[] movies;
}


int main()
{
	while (true)
	{
		cout << "\n\n\t||MAIN MENU||\n\n";
		cout << "\nPlease enter a number between 1 and 8: \n";
		cout << "\nBlock 2.2.1: 1";
		cout << "\nBlocks 2.2.3 and 2.2.4: 2";
		cout << "\nBlock 2.2.5: 3";
		cout << "\nBlock 2.2.6: 4";
		cout << "\nBlock 2.2.7: 5";
		cout << "\nBlock 2.2.8: 6";
		cout << "\nBlock 2.2.9: 7";
		cout << "\nExit program: 8";
		cout << "\nMake your choice: ";
		int menuNumber = ReadingCorrectSize();
		cout << endl << endl << endl;
		switch (menuNumber)
		{
			case FirstTask:
			{
				//2.2.1.1 and 2.2.1.2
				cout << "\n\nTasks 2.2.1.1 and 2.2.1.2\n";
				DemoSort();
				break;
			}

			case ThirdAndFourth:
			{
				cout << "\nPlease enter a number between 1 and 5: \n";
				cout << "\nBlock Rectangle: 1";
				cout << "\nBlock Flight: 2";
				cout << "\nBlock Movie: 3";
				cout << "\nBlock Time: 4";
				cout << "\nBlock Wrong Pointers: 5";
				cout << "\nMake your choice: ";
				int localNumber = ReadingCorrectSize();

				//2.2.3 and 2.2.4
				switch (localNumber)
				{
					case RectangleItem:
					{
						DemoRectangle();
						break;
					}

					case FlightItem:
					{
						DemoFlight();
						break;
					}

					case MovieItem:
					{
						DemoMovie();
						break;
					}

					case TimeItem:
					{
						DemoTime();
						break;
					}

					case WrongPointersItem:
					{
						//2.2.4.4
						WrongPointers();
						break;
					}
				}
				break;
			}

			case Fifth:
			{
				//2.2.5.1
				cout << "\n\nTask 2.2.5.1\n";
				Rectangle rectangle3;
				rectangle3.Color = { "Red" };
				rectangle3.Length = 5;
				rectangle3.Width = 10;
				WriteRectangle(rectangle3);

				//2.2.5.2
				cout << "\n\nTask 2.2.5.2\n";
				Rectangle rectangle4;
				ReadRectangle(rectangle4);

				//2.2.5.3
				cout << "\n\nTask 2.2.5.3\n";
				DemoReadAndWriteRectangles();

				//2.2.5.4
				cout << "\n\nTask 2.2.5.4\n";
				Rectangle rectangle1;
				ReadRectangle(rectangle1);
				Rectangle rectangle2;
				ReadRectangle(rectangle2);
				WriteRectangle(rectangle1);
				WriteRectangle(rectangle2);
				Exchange(rectangle1, rectangle2);

				//2.2.5.5
				cout << "\n\nTask 2.2.5.5\n";
				cout << "Enter the number of rectangles: ";
				int count = ReadingCorrectValue();
				Rectangle* rectangles = new Rectangle[count];
				for (int i = 0; i < count; i++)
				{
					cout << "Enter a Length: ";
					rectangles[i].Length = ReadingCorrectSize();
					cout << "Enter a Width: ";
					rectangles[i].Width = ReadingCorrectSize();
				}
				FindRectangle(rectangles, count);

				//2.2.5.6
				cout << "\n\nTask 2.2.5.6\n";
				cout << "Enter the number of rectangles: ";
				count = ReadingCorrectValue();
				Rectangle* rectangles1 = new Rectangle[count];
				for (int i = 0; i < count; i++)
				{
					cout << "Enter a Length: ";
					rectangles1[i].Length = ReadingCorrectSize();
					cout << "Enter a Width: ";
					rectangles1[i].Width = ReadingCorrectSize();
				}
				FindMaxRectangle(rectangles1, count);
				break;
			}

			case Sixth:
			{
				//2.2.6.1
				cout << "\n\nTask 2.2.6.1\n";
				DemoDynamicFlight();

				//2.2.6.2 and 2.2.6.3
				cout << "\n\nTasks 2.2.6.2 and 2.2.6.3\n";
				DemoDynamicFlights();
				break;
			}

			case Seventh:
			{
				//2.2.7.1
				cout << "\n\nTask 2.2.7.1\n";
				DemoCircle();

				//2.2.7.2 and 2.2.7.3
				cout << "\n\nTasks 2.2.7.2 and 2.2.7.3\n";
				Rectangle* rectangle = MakeRectangle("Red", 7.0, 7.5);
				Flight* flight = MakeFlight("Tomsk", "Moscow", 240);
				Movie* movie = MakeMovie("Star Wars X", "Fantastic", 2025, 7.5, 225);
				Time* time = MakeTime(22, 15, 45);
				Rectangle* copiedRectangle = CopyRectangle(*rectangle);
				Flight* copiedFlight = CopyFlight(*flight);
				Movie* copiedMovie = CopyMovie(*movie);
				Time* copiedTime = CopyTime(*time);
				break;
			}

			case Eighth:
			{
				//2.2.8.3 and 2.2.8.4
				cout << "\n\nTasks 2.2.8.3 and 2.2.8.4\n";
				DemoEnums();

				//2.2.8.5
				cout << "\n\nTask 2.2.8.5\n";
				WriteColor(Red);

				//2.2.8.6
				cout << "\n\nTask 2.2.8.6\n";
				WriteColor(ReadColor());

				//2.2.8.7
				cout << "\n\nTask 2.2.8.7\n";
				int count = 6;
				Color color[] = { Red, Blue, Yellow, Red, Yellow, Green };
				cout << "Number of Red: " << CountRed(color, count);

				//2.2.8.8
				cout << "\n\nTask 2.2.8.8\n";
				cout << "\nNumber of Purple: " << CountColor(color, count, Purple);
				break;
			}

			case Ninth:
			{
				//2.2.9
				cout << "\n\nTask 2.2.9\n";
				DemoMovieWithGenre();
				break;
			}

			case Exit:
			{
				cout << endl;
				system("pause");
				return 0;
			}

			default:
			{
				cout << "You made a mistake. Try again";
				break;
			}
		}
	}	
}

/*Теоретические вопросы
1. Что такое исключение ?
	• механизм языков программирования, предназначенный для описания реакции программы
		на ошибки времени выполнения и другие возможные проблемы, которые могут возникнуть
			при выполнении программы и приводят к невозможности дальнейшей отработки программой её базового алгоритма.

2. Что такое структура ?
	•  Простейший пользовательский типы данных, который группируут несколько отдельных переменных вместе. 

3. Что такое перечисление ?
	• Перечисление — это список именованных целочисленных констант. 
		Тип перечисления — это спецификация списка имён, принадлежащих конкретному перечислению.

4. Что такое абстрагирование ?
	• Абстрагирование – это способ выделить набор значимых характеристик объекта, исключая из рассмотрения незначимые. 
		Соответственно, абстракция – это набор всех таких характеристик.

5. Что такое состояние структуры ?
	• То, что описывается с помощью полей структуры

6. Что такое функция - конструктор ?
	• Функции-конструкторы - такие функции, которые: 
		а) на вход принимают значения для всех полей структуры; 
		б) в теле функции создают объект структуры и присваивают значения всем его полям; 
		в) возвращают указатель на созданный объект. Объект обязательно создается динамически.

7. Что такое функция копирования ?
	• Функция, позволяющая создать новый объект структуру, скопировав значения всех её полей из уже созданного.

8. Какие преимущества может дать использование перечислений в качестве полей по сравнению со строками ?
	• Перечисления позволяют жестко ограничить область допустимых значений для поля структуры, 
		исключая варианты неправильного ввода данных.

*/