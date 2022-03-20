#include <iostream>
#include <cmath>

using namespace std;

/*
    check prime function
    check all the number smaller than a and see it divisible or not
    if can b edivisible than -> prime
 */
int prime(unsigned long int a)
{
    if (a == 2)
    {
        return true;
    }
    else
    {
        for (unsigned long int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

/*
    find the smallest factor function
    find the smallest factor by checjing through numbers smaller than b
    and that the factor doesn't equal to 1
*/
int coprime(int b)
{
    for (int i = 2; i < b; i++)
    {
        if (b % i == 0)
        {
            return i;
        }
    }
}
int main()
{
    unsigned long int N, L, S;
    unsigned int p, q, e, d, k = 1, m, c, D;

    for (int j = 0; j < 3; j++)
    {
        cout << "* ---------- ";
    }
    cout << "*" << endl;
    cout << "Question 1&2: " << endl;

    /*
        Q1-check p,q are both prime num
        call <prime> to make sure they are different prime number
        if not keep input till it reaches condition
    */
    cout << "Please input p and q sequentially: ";
    while (cin >> p >> q)
    {
        if ((prime(p) && prime(q)) && p != q)
        {
            break;
        }
        else
        {
            cout << "*You need to input two different prime number!! " << endl;
            cout << "Please input p and q sequentially: ";
        }
    }

    /*
        Q2-compute e and d
        call <prime> to make sure L isn't prime number
        so that e and d both won't be 1
        if Lis prime number than k+1 till it reaches condition

        call <coprime> to find e , the smallest factor of L
        divide L with e to find d
    */
    while (1)
    {
        L = k * (p - 1) * (q - 1) + 1;
        if (prime(L))
        {
            k++;
        }
        else
        {
            break;
        }
    }
    e = coprime(L);
    d = L / e;
    N = p * q;
    cout << "En/Decrypting key(N): " << N << endl;
    cout << "Encrypting key(e): " << e << endl;
    cout << "Decrypting key(d): " << d << endl;
    cout << "[*]Positive integer(k): " << k << endl;

    for (int j = 0; j < 3; j++)
    {
        cout << "* ---------- ";
    }
    cout << "*" << endl;
    cout << "Qusetion 3:" << endl;

    /*
        Q3-encrypt m
        compute c = (m power e)(mod N)
    */
    cout << "Please input the message you want to encrypt: ";
    cin >> m;
    S = pow(m, e);
    c = S % N;
    cout << "En/Decrypting key(N): " << N << endl;
    cout << "Encrypting key(e): " << e << endl;
    cout << "Encrpted message(c): " << c << endl;

    for (int j = 0; j < 3; j++)
    {
        cout << "* ---------- ";
    }
    cout << "*" << endl;
    cout << "Question 4: " << endl;

    /*
        Q4-check private key correct or not , decrypt message
        keep input d' and output the result of decryption
        till it's equal to the private key d
        and output final result m
    */
    cout << "Please input the decrypting key (d'): ";
    cin >> D;
    while (D != d)
    {
        S = pow(c, D);
        m = S % N;
        cout << "Original message(m): " << m << endl;
        cout << "You get the incorrect decrypting keys , please re-enter d'= ";
        cin >> D;
    }

    S = pow(c, d);
    m = S % N;
    cout << "Original message(m): " << m << endl;

    return 0;
}