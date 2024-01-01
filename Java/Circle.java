// import java.io.*;
// import java.util.*;

public class Circle {

    private float radius;
    private final float pi = (float)3.1415;
    int [] IntArr ;
    public Circle(float rad)
    {
        radius = rad;
    }
    public float area()
    {
        float rsq = radius * radius;
        return pi*rsq;
    }
    public float circumference() {
        return 2*pi*radius;
    }
}
