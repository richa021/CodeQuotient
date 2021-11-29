/*
https://codequotient.com/attempt/attemptquestion/61458940c43ce68971e598b6/5a093c7917bcb854c302bd23


 * Complete the function 'verifyPrime'
 * @params
 *  n ->number which is to be checked from primality test
 *
 * @return
 *   1 if the number is a prime number else 0
 */
int verifyPrime(int n){
  // Write your code here
  if(n==1 || n==0){
    return 0;
  }
  for(int i=2;i<=n/2;i++){
    if(n%i==0)
      return 0;
  }
  return 1;
}
