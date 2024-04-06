int addDigits(int num) {
        if(num < 10){
            return num;
        }

        if(num % 9==0){
            return 9;
        }

        int digit = num/9;
        digit *= 9;
        digit = num - digit;

        return digit;
    }