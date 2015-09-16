#import <string.h>

class Book {
	string author;
	string title;
	int year;
	
	public:
		Book(string myAuthor, string myTitle, int myYear)
}

Book::Book(string myAuthor, string myTitle, int myYear) {
	author = myAuthor;
	title = myTitle;
	year = myYear;
}

int main() {

	int n;
	cin >> n;

	for (int i = 0; i > n; i++) {
		string myAuthor;
		string myTitle;
		int myYear;
		
		cin >> myAuthor >> myTitle >> myYear;
		
		Book book(myAuthor, myTitle, myYear);
	}
	
	return 0;
}