public class Main{
    public static void main(String[] args){
        Inventory inventory=new Inventory();
        //Fruit fruit=new Fruit("Apple",20,"Fuji");
        //Weapon weapon=new Weapon("Sword",2,75,"Mele");

        inventory.addItem("Apple",20,"Fuji");
        inventory.addItem("Sword",2,75,"Mele");
        inventory.displayInventory();
    }
}
