public class ReverseString {
    
    public static void main(String[] args){

        String originalStr = "Hello";
        String reversedStr = "";

        for(int i = originalStr.length() - 1  ;  i >= 0; i-- ){    

            reversedStr = reversedStr + originalStr.charAt(i);
        }

        System.out.println("Original String : " + originalStr);
        System.out.println("Reversed String : " + reversedStr);

    }
    
} 