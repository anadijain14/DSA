#include <iostream>
#include <vector>
using namespace std;

// Structure
struct College {
    string name;
    string city;
    string course;
    int fees;
    float rating;
};

// Function to display colleges
void showColleges(vector<College> colleges, string city, string course) {
    cout << "\n🎓 Recommended Colleges:\n";
    bool found = false;

    for (auto c : colleges) {
        if ((c.city == city || city == "Any") &&
            (c.course == course || course == "Any")) {

            cout << "----------------------------------\n";
            cout << "College Name : " << c.name << endl;
            cout << "City         : " << c.city << endl;
            cout << "Course       : " << c.course << endl;
            cout << "Fees         : ₹" << c.fees << " per year\n";
            cout << "Rating       : " << c.rating << " ⭐\n";
            found = true;
        }
    }

    if (!found) {
        cout << "❌ No colleges found for your selection.\n";
    }
}

int main() {
    vector<College> colleges = {
        {"IIT Indore", "Indore", "Engineering", 120000, 4.8},
        {"IIM Indore", "Indore", "Management", 200000, 4.7},
        {"DAVV", "Indore", "Engineering", 60000, 4.0},
        {"Delhi University", "Delhi", "Arts", 50000, 4.5},
        {"Amity University", "Noida", "Management", 150000, 4.2},
        {"Mumbai University", "Mumbai", "Commerce", 70000, 4.1},
        {"VIT Vellore", "Vellore", "Engineering", 180000, 4.6}
    };

    string name;
    char choice;

    cout << "=====================================\n";
    cout << "  College Recommendation System\n";
    cout << "=====================================\n";

    cout << "Enter your name: ";
    getline(cin, name);

    do {
        int cityChoice, courseChoice;
        string city, course;

        cout << "\nHello " << name << "! Let's find the best college for you.\n";

        // CITY
        cout << "\nSelect City:\n";
        cout << "1. Indore\n2. Delhi\n3. Noida\n4. Mumbai\n5. Vellore\n6. Any\nChoice: ";
        cin >> cityChoice;

        switch (cityChoice) {
            case 1: city = "Indore"; break;
            case 2: city = "Delhi"; break;
            case 3: city = "Noida"; break;
            case 4: city = "Mumbai"; break;
            case 5: city = "Vellore"; break;
            default: city = "Any";
        }

        // COURSE
        cout << "\nSelect Course:\n";
        cout << "1. Engineering\n2. Management\n3. Arts\n4. Commerce\n5. Any\nChoice: ";
        cin >> courseChoice;

        switch (courseChoice) {
            case 1: course = "Engineering"; break;
            case 2: course = "Management"; break;
            case 3: course = "Arts"; break;
            case 4: course = "Commerce"; break;
            default: course = "Any";
        }

        // SHOW RESULTS
        showColleges(colleges, city, course);

        // RUN AGAIN OPTION
        cout << "\nDo you want to search again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\n✅ Thank you for using the system, " << name << "!\n";

    return 0;
}