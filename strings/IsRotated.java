public class IsRotated{
    

    public static boolean isRotated(String str1, String str2){
        return (str1.length() == str2.length()) &&
                ((str1 + str2).indexOf(str2) != -1);
    }
    public static void main(String[] args) {
        String str1 = "AACD";
        String str2 = "ACDA";
        if(isRotated(str1, str2)){
            System.out.println("String is rotated");
        }
        else{
            System.out.println("String is not rotated");
        }
    }


}