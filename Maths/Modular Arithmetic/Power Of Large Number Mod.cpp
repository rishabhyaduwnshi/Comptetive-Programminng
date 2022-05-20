void findMod(string base, int power, int mod)
{
    long long number = 0;
    for(int i=0; i<base.length(); i++)
    {
        number = number*10+(base[i] - '0');
        number = number%mod;
    }

    long long answer = number%mod;
    for(int i=1;i<power;i++)
        answer = (answer*number)%mod;
    cout<<answer;
}

int main()
{
    string base = "987584345091051645734583954832576";
    int power = 3;
    int modValue = 11;
    findMod(base,power,modValue);
}
