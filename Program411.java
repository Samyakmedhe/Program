// Customised Database Management System


class node
{
    private static int Counter = 1;

    public int Rno;
    public String Name;
    public String City;
    public int Marks;

    public node next;

    public node(String B, String C, int D)
    {
        Rno = Counter;
        Counter++;

        Name = B;
        City = C;
        Marks = D;
        next = null;
    }

}

class DBMS
{
    private node first;

    public DBMS()
    {
        first = null;
        System.out.println("DBMS intailised Successfully...");
        System.out.println("Student table gets created Succefuuly...");

    }

    public void InsertIntoTable( String Name , String City, int Marks)
    {
        node newn = new node(Name,City,Marks);

        if(first == null)
        {
            first = newn;
        }
        else
        { 
            node temp = first;
            while(temp.next != null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        System.out.println("one Record gets insureted succesfully...");
    }

   
    public void SelectStarFrom()
    {
        System.out.println("Data form student table is : ");

        node temp = first;

        System.out.println("-------------------------------------------------------------------");
        while(temp != null)
        {
            System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            temp = temp.next;
        }
        System.out.println("-------------------------------------------------------------------");
    }

     // select * from student where City = '';
    public void SelectStarFromWhereCity(String str)
    {
        System.out.println("Data form student table Where City is : "+str);

        node temp = first;

        System.out.println("-------------------------------------------------------------------");
        while(temp != null)
        {
            if(str.equals(temp.City))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;
        }
        System.out.println("-------------------------------------------------------------------");
    }


    public void SelectCount()
    {
        node temp = first;
        int iCnt = 0;
        while(temp != null)
        {
            temp = temp.next;
            iCnt++;
        }

        System.out.println("Number of records in the Table : "+iCnt);
    }

    public void SelectSum()
    {
        node temp = first;

        int iSum = 0;
        while (temp != null)
        {
            iSum = iSum + temp.Marks;
            temp = temp.next;
        }

         System.out.println("Sumation of marks : "+iSum);
    }

    public void SelectAvg()
    {
        node temp = first;

        int iSum = 0 , iCnt = 0;
        while (temp != null)
        {
            
            iSum = iSum + temp.Marks;
            temp = temp.next;
            iCnt++;
        }

         System.out.println("Sumation of marks : "+(float)((float)iSum/(float)iCnt));
    }

    public void SelectMax()
    {
        node temp = first;

        int iMax = 0 , iCnt = 0;
        if(temp != null)
        {
            iMax = temp.Marks;
        }

        while (temp != null)
        {
           if(temp.Marks > iMax)
           {
                iMax = temp.Marks;
           }  
           temp = temp.next;
          
        }

         System.out.println("Maximum of marks Column is : "+iMax);
    }
    public void SelectMin()
    {
        node temp = first;

        int iMin = 0 , iCnt = 0;
        if(temp != null)
        {
            iMin = temp.Marks;
        }
        while (temp != null)
        {
            if(temp.Marks < iMin)
            {
                iMin = temp.Marks;
            }  
           temp = temp.next;
          
        }

         System.out.println("Minimum of marks Column is : "+iMin);
    }

    public void SelectStarFromName(String str)
    {
        node temp = first;

        System.out.println("Information of all students with the Name : ");
        while(temp != null)
        {
            if(str.equals(temp.Name))
            {
                System.out.println(temp.Rno+"\t"+temp.Name+"\t"+temp.City+"\t"+temp.Marks);
            }
            temp = temp.next;

        }
    }

    public void UpdateCity(int no , String str )
    {
        node temp = first;

        while (temp != null)
        {
            if(temp.Rno == no)
            {
                temp.City = str;
                break;
            }
            temp = temp.next;
        }
        System.out.println("Record gets Updated...");

    }
    
    public void DeleteFrom(int no)
    {
        node temp = first;

        if(temp == no)
        {
            return;
        }

        if(temp.Rno == no)
        {
            first = first.next;
            return ;
        }
        else
        {
            while(temp.next != null)
            {
                if(temp.next.Rno == no)
                {
                    temp.next = temp.next.next;
                    break;
                }
                temp = temp.next;
            }
        }
    }

}


class Program411
{
    public static void main (String Arg[])
    {
        DBMS obj = new DBMS();

        obj.InsertIntoTable("Amit","Pune",89);
        obj.InsertIntoTable("Poja","Mumbai",95);
        obj.InsertIntoTable("Gauri","Pune",90);
         obj.InsertIntoTable("Amit","Nagars",81);
        obj.InsertIntoTable("Rahul","Satara",80);
        obj.InsertIntoTable("Neta","Pune",78);

        obj.SelectStarFrom();

        obj.SelectStarFromWhereCity("Pune");
        obj.SelectCount();

        obj.SelectSum();
        obj.SelectAvg();
        obj.SelectMax();
        obj.SelectMin();

        obj.SelectStarFromName("Amit");
        obj.UpdateCity(3,"Nashik");
        obj.SelectStarFrom();
        obj.DeleteFrom(5);
        obj.SelectStarFrom();

        obj.InsertIntoTable("Rukmini","Kolhapur",77);
         obj.SelectStarFrom();

    }
}


/*
Supported Querise

1 : insert into students value('Amit',' Pune',78);
2 : Select * from Students ;
3 : select * from student where City = '____';
4 : select Count(marks) from Students;
5 : select Sum(marks) from Students;
6 : select Avg(marks) from Students;
7 : select Max(marks) from Students;
8 : select Min(marks) from Students;
9 : select * from student where name = '____';
10 :  Update student set City = "____" where Rno = ___;
11 : delete from students where Rno = ___;

*/