public class ConcatSample2 {
  static public void main(String args[]){
    String str1 = "文字列１";
    String str2 = "文字列２";
    String str = str1.concat(str2);
    System.out.println("String.concatによる文字列の連結 -> " + str);
  }
}