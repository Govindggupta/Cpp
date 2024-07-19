// // string initialization
// int main() {
//     string str1 = "hello";
//     string str2 = "world";
//     cout << str1 + " " + str2 << endl;
//     cout << str1 << " " << str2 << endl;
// }

// // string input/output
// int main() {
//     string str;
//     cout << "Enter a string: ";
//     // cin >> str; // only one word
//     getline(cin, str); // more than one word
//     cout << str << endl;
// }

// // string length, concatenation, comparison
// int main() {
//     // length
//     string str = "hello world";
//     cout << "length of string: " << str.length() << endl;

//     // concatenation
//     string str1 = "hello";
//     string str2 = "world";
//     cout << str1 + " " + str2 << endl;
//     cout << str1.append(" everyone") << endl;

//     // comparison
//     string str3 = "Hello";
//     string str4 = "World";
//     if (str3 == str4) {
//         cout << "Strings are equal" << endl;
//     } else {
//         cout << "Strings are not equal" << endl;
//     }
//     // int result = str3.compare("Hello");
//     int result = str3.compare(str4);
//     cout << "Comparison result: " << result << endl;
// }

// // access characters in string
// int main() {
//     string str = "Hello";
//     str[0] = 'h';
//     cout << str;
// }

// // string modification
// int main() {
//     string str = "Hello World";

//     // insert
//     str.insert(6, "Beautiful "); // add on 6th position (starting from 0)
//     cout << "After insert: " << str << endl;

//     // erase
//     str.erase(6, 10); // from 6th position, erase 10 characters
//     cout << "After erase: " << str << endl;

//     // replace
//     str.replace(6, 5, "Everyone"); // from 6th position, erase 5 characters and insert "Everyone"
//     cout << "After replace: " << str << endl;
//     return 0;
// }
