#include "basic_json_type.h"

#include "glaze/json.hpp"

#include <iostream>
#include <string>
#include <tuple>

using namespace std;

const string sample_json_file_path = "../../data/sample.json";


int main()
{
    cout << "-----------  Write JSON to string  -----------------"<< endl;

    test_struct_1 a{.i = 287, .d = 3.14, .hello = "Hello World", .arr = { 1, 2, 3 }, .map={{"one", 1}, {"two", 2}}};
    std::string json_covt = glz::write_json(a);

    cout << "Data: " << a << endl;
    cout << "JSON output: " << endl << json_covt << endl;

    cout << "-----------  Read JSON from file------------------"<< endl;

    test_struct_1 b;
    auto e = glz::read_file_json(b, sample_json_file_path, std::string{});

    cout << "Data: " << b << endl;



    return 0;
}