

// لتجنب مشكلة مع cin و getline

cout << "Enter your name: ";
cin.ignore(); 
getline(cin, info.name);
cout << "Enter your address: ";
getline(cin, info.address);
