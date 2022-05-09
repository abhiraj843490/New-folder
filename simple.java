import java.sql.*;
public class simple {
	public static void main(String [] args) {
		
		 try
		    {
		      Class.forName("oracle.jdbc.driver.OracleDriver");
		      System.out.println("Driver loaded: \n");
		      //sun.jdbc.odbc.JdbcOdbcDriver
		      Connection cn = DriverManager.getConnection
		          ("jdbc:oracle:thin:@119.160.199.94:1521:mefgi",   //192.168.12.82 local host
		              "mef191160107001","mef191160107001");
		      System.out.println("Connection established: \n");
		      
		      Statement st = cn.createStatement();
		      ResultSet rs = st.executeQuery("Select * from STUDENT");
		        
		      while(rs.next()) {
		        System.out.println(rs.getString(1)+"\t"+ rs.getString(2)+"\t"+rs.getString(3)+"\t"+rs.getString(4)+"\t"+rs.getString(5));
		        
		      }
		      
		      //st.executeUpdate("UPDATE STUDENT SET NAME='abhiraj' where NAME='ABHI' ");
		      
		      st.executeUpdate("DELETE from STUDENT where cpi=4");
		      //st.executeUpdate("INSERT into STUDENT VALUES(191160107006, 'alsaif',7.2, 6734782134,'02-02-2002')");
		      
		      st.executeQuery("select distinct * from STUDENT");
		     // st.executeQuery("select * from STUDENT");
//		      while(rs.next()) {
//			        System.out.println(rs.getString(1)+"\t"+ rs.getString(2)+"\t"+rs.getString(3)+"\t"+rs.getString(4)+"\t"+rs.getString(5));
//			        
//			      }
		      
		      rs.close();
		      st.close();
		      cn.close();
		        
		    } 
		   
		      catch (Exception e) {
		          e.printStackTrace();
		      }

	}
}
