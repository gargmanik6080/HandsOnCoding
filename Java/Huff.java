public class Huff {
    //Unsorted Array
    int[] values={9,6,7,3,5,2,4,8,1};

    //Method implementing Bubble
    //sort
    void Bsort(){
        
        //infinite loop
        while(true){

            //Variable "j" being one index ahead of i

            //Variable "c" to keep the counter of the
            //number of times changes occour in the array

            int j=1,c=0;

    
            //goes throough the whole array
            //and swaps the lower value to
            //the front of array

            for(int i=0;i<values.length-1;++i){
                
                //discerning the loewr value   
                if(values[i]>values[j]){
                    
                    //variable "temp "to temporarily hold the
                    //value on index i then swap it back to
                    //index j
                    int temp=values[i];
                    values[i]=values[j];
                    values[j]=temp;

                    //change occoured
                    ++c;
                }
                //synchronizing it with the loop
                ++j;
            }
            //if no change occoured, break the loop
            if(c==0){
                break;
            }
        }
    }

    //prints the array
    void display(){
        for(int i:values){
            System.out.println(i);
        }
    }

    public static void main(String args[]){
        Huff obj=new Huff();
        obj.Bsort();
        obj.display();
    }
};