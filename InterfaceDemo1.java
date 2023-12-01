

interface circle
{
    float PI = 3.14f;

    public float Area (float Radius);
    public float Circumfarance (float Radius);
}

class PPA implements circle
{
    public float Area (float Radius)
    {
        return PI * Radius * Radius;
    }
    
    public float Circumfarance(float Radius)
    {
        return  2 *PI * Radius;
    }

}


