/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication4;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;

/**
 *
 * @author pawe
 */
public class JavaApplication4Test {
    
    public JavaApplication4Test() {
    }
    
    @BeforeClass
    public static void setUpClass() {
    }
    
    @AfterClass
    public static void tearDownClass() {
    }
    
    @Before
    public void setUp() {
    }
    
    @After
    public void tearDown() {
    }

    /**
     * Test of getSide method, of class JavaApplication4.
     */
    @Test
    public void testGetSide() {
        System.out.println("getSide");
        JavaApplication4 instance = new JavaApplication4();
        double expResult = 0.0;
        double result = instance.getSide();
        assertEquals(expResult, result, 0.0);
        
    }

    /**
     * Test of setSide method, of class JavaApplication4.
     */
    @Test
    public void testSetSide() {
        System.out.println("setSide");
        double side = 0.0;
        JavaApplication4 instance = new JavaApplication4();
        instance.setSide(side);
        
    }

    /**
     * Test of getJavaApplication4 method, of class JavaApplication4.
     */
    @Test
    public void testGetJavaApplication4() {
        System.out.println("getJavaApplication4");
        JavaApplication4 instance = new JavaApplication4();
        double expResult = 0.0;
        double result = instance.getJavaApplication4();
        assertEquals(expResult, result, 0.0);
        // TODO review the generated test code and remove the default call to fail.
    }
    
}
