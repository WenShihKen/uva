import java.util.Scanner;
import java.util.Arrays;
import java.math.BigInteger;
 
public class bignumber{
 
 public static void main(String[] args) {
  Scanner input = new Scanner(System.in);
   
  while(input.hasNext()){
   int N = input.nextInt();
   BigInteger[] numbers = new BigInteger[N];
    
   for(int i = 0; i < N; ++i){
    numbers[i] = input.nextBigInteger();
   }
    
   Arrays.sort(numbers);
    
   for(BigInteger i: numbers){
    System.out.println(i);
   }
  }
 }
 
}
