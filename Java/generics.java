public class generics<tmp> {
    tmp obj;
    public generics(tmp obj) {
        this.obj=obj;
    }
    public void disp(){
        System.out.println(obj);
    }
    public static void main(String[] args) {
        generics o1 = new generics<>(true);
        generics o2 = new generics<>(12.12121212);
        o1.disp();
        o2.disp();
    }
}
