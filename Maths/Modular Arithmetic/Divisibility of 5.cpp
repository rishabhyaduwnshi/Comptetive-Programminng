int divisibleBy5(string N)
    {
        int length = N.length();
        int number = 0;
        
        number = number*10+N[length-1]-'0';
        
        if(number == 5 || number == 0 )
            return 1;
        else
            return 0;
    }
