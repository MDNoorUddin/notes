All notes for programming contests

1. Upper bound of sieve algorithm is 10^7.
  
2.All Even digit palindromes will necessarily be divisible by 11.
  
3.A number is Fibonacci if and only if one or both of (5*n2 + 4) or (5*n2 – 4) is a perfect square.
  
4.Hardy Ramanujam theorem states that the number of prime factors of n will approximately be log(log(n)) for most natural numbers         
    n.
    
5.In mathematics, Rosser’s Theorem states that the nth prime number is greater than the product of n and natural logarithm of n
   for all n greater than 1.
   
6.Fermat’s little theorem

    Fermat’s little theorem states that if p is a prime number, then for any integer a, the number a p – a is an integer multiple  
     of p.

    Here p is a prime number
    a^p ≡ a (mod p).
    
    #Special Case: If a is not divisible by p, Fermat’s little theorem is equivalent to the statement that a p-1-1 is an integer 
    multiple of p.

    a^p-1 ≡ 1 (mod p)
    OR
    a^p-1 % p = 1
    Here a is not divisible by p. 
    
    Use of Fermat’s little theorem


    If we know m is prime, then we can also use Fermats’s little theorem to find the inverse.

    a^m-1 ≡ 1 (mod m)
    If we multiply both sides with a-1, we get

    a^-1 ≡ a ^m-2 (mod m)
 7.Euclid Euler Theorem
 
 
    #According to Euclid Euler Theorem, a perfect number which is even, can be represented in the form (2^n - 1)*(2^n / 2) ))   
    where n is a prime number and 2^n - 1 is a Mersenne prime number. It is a product of a power of 2 with a Mersenne prime 
    number. This theorem establishes a connection between a Mersenne prime and an even perfect number.
 
 
8.Euclid’s lemma


    We are given two numbers x and y. We know that a number p divides their product. Can we say for sure that p also divides one  
    of   them?

    The answer is no. For example, consider x = 15, y = 6 and p = 9. p divides the product 15*6, but doesn’t divide any of them.

    What if p is prime?
    Euclid’s lemma states that if a prime p divides the product of two numbers (x*y), it must divide at least one of those 
    numbers.
 
 9.Primarility Test
    
     Instead of checking till n, we can check till √n because a larger factor of n must be a multiple of smaller factor that has been already checked.

    The algorithm can be improved further by observing that all primes are of the form 6k ± 1, with the exception of 2 and 3. 
    
    This is because all integers can be expressed as (6k + i) for some integer k and for i = -1, 0, 1, 2, 3, or 4; 
    2 divides (6k + 0), (6k + 2), (6k + 4); and 3 divides (6k + 3). 
    So a more efficient method is to test if n is divisible by 2 or 3, then to check through all the numbers of form 6k ± 1. (Source: wikipedia) 
    bool isPrime(int n) 
    { 
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
         // 6k+-1//
  
    return true; 
  } 
 
 
