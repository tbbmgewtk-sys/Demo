#include <iostream>

#include "time_helper/time_utils.h"
#include "kmean_helper/kmean.h"

// You can change header file to:
// #include "time_utils.h"
// #include "kmean.h"

// Uncomment to use these and comment 2 rows above.

using namespace std;

int main() {
    // TODO
    cout << "Check Time Library" << endl;
    cout << is_valid_time(0, 30, 11) << endl;
    int hour = 0, minute = 20, second = 45;
    get_next_time(hour, minute, second, 1, 10, 35);
    cout << hour << " " << minute << " " << second << endl;
    get_previous_time(hour, minute, second, 1, 10, 35);
    cout << hour << " " << minute << " " << second << endl;
    int dhour = 0, dminute = 0, dsecond = 0;
    get_segment_time(23, 10, 30, 0, 10, 0, dhour, dminute, dsecond);
    cout << dhour << " " << dminute << " " << dsecond << endl;
    hour = 23; minute = 10; second = 0;
    cout << convert_24_to_12(hour, minute, second) << endl;
    cout << convert_time_to_second(0, 30, 10) << endl;
    convert_second_to_time(1810, hour, minute, second);
    cout << hour << " " << minute << " " << second << endl;
    
    cout << "Check Kmean Library" << endl;
    const int num_data_points = 6;
    double data_points[num_data_points] = {1.0, 3.0, 10.0, 12.0, 22.0, 19.0};
    const int k = 3;
    double centroids[k] = {0.0, 0.0, 0.0};
    kmean(data_points, num_data_points, k, centroids);
    for(int i = 0; i < k; i++) {
        cout << centroids[i] << " ";
    }
    cout << endl;
    // END TODO
    return 0;
}