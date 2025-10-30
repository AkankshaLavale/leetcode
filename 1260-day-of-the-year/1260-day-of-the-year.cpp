class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // check for leap year
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            daysInMonth[1] = 29;

        int dayNumber = 0;
        for (int i = 0; i < month - 1; i++) {
            dayNumber += daysInMonth[i];
        }
        dayNumber += day;

        return dayNumber;
    }
};
