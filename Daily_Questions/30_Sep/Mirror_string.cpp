// Since in mirror string the characters should also be symmetric.

// So, the algorithm to solve the problem goes like: 

// → First check the characters of the string to see if they are symmetric; if not, return "no"; otherwise, continue.

// → If the characters are symmetric, check if the string is a palindrome or if the string reverse is equal to the original string.

 

#include <bits/stdc++.h> 

bool isReflectionEqual(string &s)

{

    // Write your code here.

    for(int i=0; i<s.size(); i++){

        if(s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'F' || s[i] == 'G' || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'N' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'Z'){

            return false;

        }

    }

    string res = s;

    reverse(s.begin(),s.end());

    if(s == res){

        return true;

    }

    else{

        return false;

    }

}