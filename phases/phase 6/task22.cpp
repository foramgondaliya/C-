#include <iostream>
#include <string>

using namespace std;

class Hotel {
private:
    string hotel_name;
    string hotel_type;
    int hotel_staff_size;
    int hotel_room_size;
    int hotel_establish_year;
    string hotel_country;
    string hotel_rating_type;
    string hotel_website;

public:

    string getHotelName() const {
        return hotel_name;
    }

    string getHotelType() const {
        return hotel_type;
    }

    int getHotelStaffSize() const {
        return hotel_staff_size;
    }

    int getHotelRoomSize() const {
        return hotel_room_size;
    }

    int getHotelEstablishYear() const {
        return hotel_establish_year;
    }

    string getHotelCountry() const {
        return hotel_country;
    }

    string getHotelRatingType() const {
        return hotel_rating_type;
    }

    string getHotelWebsite() const {
        return hotel_website;
    }

    void setHotelName(const string& name) {
        hotel_name = name;
    }

    void setHotelType(const string& type) {
        hotel_type = type;
    }

    void setHotelStaffSize(int size) {
        hotel_staff_size = size;
    }

    void setHotelRoomSize(int size) {
        hotel_room_size = size;
    }

    void setHotelEstablishYear(int year) {
        hotel_establish_year = year;
    }

    void setHotelCountry(const string& country) {
        hotel_country = country;
    }

    void setHotelRatingType(const string& ratingType) {
        hotel_rating_type = ratingType;
    }

    void setHotelWebsite(const string& website) {
        hotel_website = website;
    }
};

int main() {
    Hotel myHotel;

    myHotel.setHotelName("Grand Hotel");
    myHotel.setHotelType("Luxury");
    myHotel.setHotelStaffSize(100);
    myHotel.setHotelRoomSize(200);
    myHotel.setHotelEstablishYear(1990);
    myHotel.setHotelCountry("United States");
    myHotel.setHotelRatingType("5 stars");
    myHotel.setHotelWebsite("http://www.grandhotel.com");

    cout << "Hotel Name: " << myHotel.getHotelName() << endl;
    cout << "Hotel Type: " << myHotel.getHotelType() << endl;
    cout << "Hotel Staff Size: " << myHotel.getHotelStaffSize() << endl;
    cout << "Hotel Room Size: " << myHotel.getHotelRoomSize() << endl;
    cout << "Hotel Establish Year: " << myHotel.getHotelEstablishYear() << endl;
    cout << "Hotel Country: " << myHotel.getHotelCountry() << endl;
    cout << "Hotel Rating Type: " << myHotel.getHotelRatingType() << endl;
    cout << "Hotel Website: " << myHotel.getHotelWebsite() << endl;

    return 0;
}

