// Print all elements of an ArrayList

package Random;

import java.util.ArrayList;

class Solution{
  public void printElements(ArrayList<Integer> list){
    for(int i = 0; i < list.size(); i++){
      System.out.print(list.get(i) + " ");
    }
  }
}
