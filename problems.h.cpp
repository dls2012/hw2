//Problem 1
int floorFunction(float num) {
    int intPart = 0;
    float temp = num;

    // Extract integer part without casting
    if (num >= 0) {
        while (temp >= 1) {
            temp -= 1;
            intPart += 1;
        }
    } else {
        while (temp <= -1) {
            temp += 1;
            intPart -= 1;
        }
    }

    // Check if num is negative and has a fractional part
    if (num < 0 && temp != 0) {
        return intPart - 1;
    } else {
        return intPart;
    }
}
int ceilingFunction(float num) {
    int intPart = 0;
    float temp = num;
    if (num >= 0) {
        while (temp >= 1) {
            temp -= 1;
            intPart += 1;
        }
    } else {
        while (temp <= -1) {
            temp += 1;
            intPart -= 1;
        }
    }

    if (num > 0 && temp != 0) {
        return intPart + 1;
    } else {
        return intPart;
    }
}

//Problem2
void swap_values(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

//Problem3
int multiply(int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
    }
    else if (y == 1) {
        return x; // Base case: multiplying x by 1 returns x
    }
    else {
        return x + multiply(x, y - 1); // Add x to the result from recursion
    }
}

//Problem4
int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    // using recursion returning the last digit + sum of digits of the remaining number
    return (n % 10) + digitSum(n / 10);
}

//Problem5
void decimalToBinary(int n) {
    if (n == 0) {
        return;
    }
    // using recursion divide n by 2 and call the function recursively
    decimalToBinary(n / 2);

    std::cout << (n % 2);
}

//Problem6
template <typename T>
T midValue(T char1, T char2, T char3) {
    if ((char1 >= char2 && char1 <= char3) || (char1 <= char2 && char1 >= char3)) {
        return char1;
    } else if ((char2 >= char1 && char2 <= char3) || (char2 <= char1 && char2 >= char3)) {
        return char2;
    } else {
        return char3;
    }
}