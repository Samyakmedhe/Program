
class Employee
{

    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount , int A, String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    
    void display()
    {
         System.out.println("Emplyee name : "+this.Name);
        System.out.println("Emplyee Age : "+this.Age);
        System.out.println("Emplyee salary : "+this.Salary);
         System.out.println("Emplyee Addres : "+this.Address);
    }
}
class FinalizeDemo1
{
    public static void main (String arg[])
    {
        Employee eobj = new Employee("Amit",78000,28,"Karve Road pune");
        eobj.display();

        String str = "Marvelous";

        System.out.println(eobj.getClass());   
         System.out.println(str.getClass());   
    }   
}