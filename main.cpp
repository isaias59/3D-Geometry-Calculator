// name: Isaias Cruz
// date: 10/12/2022
// description: exam 1, geometry caclulator

#include <iostream>

#include <iomanip>

using namespace std;

int main()

{

    cout << " \n";
    cout << "\t  *********         *             * * *         * * * * * **        *         *          ****\n";
    cout << "\t *       **       * ***         *     ****    *            ***     * *      *    *     ********\n";
    cout << "\t***********     *   *****     *        ***** *              ***   *  **   ************ **    **\n";
    cout << "\t*       ***   *     *******   *        ***** *              ***  *   ***  *          *     **\n";
    cout << "\t*       *** *       ********* *        ***** *              *** *    **** *          *    **\n";
    cout << "\t*       **      *   *****       *     ****    *            ***  *    ***  *          *    **\n";
    cout << "\t*********          **             * * *         * * * * * **       * **   ************\n";
    cout << "\t                                                                                          **\n";
    cout << "\t3D geometry shapes are objects that have three dimensions, which are length, width, and height.\n";
    cout << "\tSurface areaand volume are calculated for any three - dimensional geometrical shape.\n";
    cout << "\tThe surface area of any given object is the area or region occupied by the surface of the object.\n";
    cout << "\tWhereas volume is the amount of space available in an object.\n";
    cout << " \n";
    cout << "\tCMPR120 - Exam#1A 3D Geometry Shapes Calculator by Isaias Cruz\n";
    cout << "\t====================================================================================================\n";
    cout << "\t\tA.Sphere\n";
    cout << "\t\tB.Spherocylinder\n";
    cout << "\t\tC.Cone\n";
    cout << "\t\tD.Tetrahedron\n";
    cout << "\t\tE.Hexahedron\n";
    cout << "\t\tF.Octahedron\n";
    cout << "\t\tG.Dodecahedron\n";
    cout << "\t\tH.Icosahedron\n";
    cout << "\t\tI.Cuboid\n";
    cout << "\t\tJ.Triangular prism\n";
    cout << "\t----------------------------------------------------------------------------------------------------\n";
    cout << "\t\tK.Find randomized smallest and largest shape\n";
    cout << "\t\tL.Find interactive smallest and largest shape\n";
    cout << "\t----------------------------------------------------------------------------------------------------\n";
    cout << "\t\tQ.Quit\n";
    cout << "\t====================================================================================================\n";

    cout << "\tChoose yout option: \n\t";

    char choice;

    int significantFigures;

    srand(time(0));

    const double PI = 3.141592653589793238;

    double sphereVolume = 0.0;

    double sphereSurfaceArea = 0.0;

    double spheroCylinderVolume = 0.0;

    double spheroCylinderSurfaceArea = 0.0;

    double coneVolume = 0.0;

    double coneSurfaceArea = 0.0;

    double tetrahedronVolume = 0.0;

    double tetrahedronSurfaceArea = 0.0;

    double hexahedronVolume = 0.0;

    double hexahedronSurfaceArea = 0.0 ;

    double octahedronVolume = 0.0;

    double octahedronSurfaceArea = 0.0;

    double dodecahedronVolume = 0.0;

    double dodecahedronSurfaceArea = 0.0;

    double icosahedronVolume = 0.0;

    double icosahedronSurfaceArea = 0.0;

    double cuboidVolume = 0.0;

    double cuboidSurfaceArea = 0.0;

    double triangularPrismVolume = 0.0;

    double triangularPrismSurfaceArea = 0.0;

    cin >> choice;

   
    if (choice == 'Q' || choice == 'q')
    
        return 0;

    // sphere
    else if (choice == 'A' || choice == 'a')

    {
        cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";
       
        cin >> significantFigures;
     
        if (significantFigures < 1 || significantFigures > 10)
        {
            cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
          
            significantFigures = 2;
        }
        cout << showpoint << setprecision(significantFigures) << fixed;

        cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";

        double sphereRadius = 0.0;

        cout << "\n\tEnter a positive numeric value for the radius (r) of a sphere: \n\t";

        cin >> sphereRadius;

        if (sphereRadius <= 0.0)
        {
            cout << "\tERROR: input value cannot be zero or negative. Program terminated\n.";
            return -1;
        }


        sphereVolume = 4 * PI * pow(sphereRadius, 3) / 3;
        
        sphereSurfaceArea = 4 * PI * pow(sphereRadius, 2);

        cout << "\n\tSphere Output:";
        
        cout << "\n\t\tvolume       (V): " << setw(10) << right << sphereVolume;
        
        cout << "\n\t\tsurface area (S): " << setw(10) << right << sphereSurfaceArea;
        
        cout << '\n';
    }

    //spherocylinder
    else if (choice == 'B' || choice == 'b')

    {
        cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

        cin >> significantFigures;

        if (significantFigures < 1 || significantFigures > 10)
        {
            cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
           
            significantFigures = 2;
        }
        cout << showpoint << setprecision(significantFigures) << fixed;

        cout << "\n\t2) A spherocylinder is made up of two hemispheres connected by a cylinder.\n";

        double spheroCylinderRadius = 0.0;

        cout << "\n\tEnter a positive numeric value for the radius (r) of the spherocylinder: ";

        cin >> spheroCylinderRadius;

        if (spheroCylinderRadius <= 0.0)
        {
            cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
           
            return -2;
        }

        double spheroCylinderLength = 0.0;

        cout << "\n\tEnter a positive numeric value for the length (l) of the spherocylinder: ";

        cin >> spheroCylinderLength;

        if (spheroCylinderLength <= 0.0)
        {
            cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

            return -3;
        }

     

        spheroCylinderVolume = PI * pow(spheroCylinderRadius, 2) * (4.0 / 3 * spheroCylinderRadius + spheroCylinderLength);

        spheroCylinderSurfaceArea = 2 * PI * spheroCylinderRadius * (2 * spheroCylinderRadius + spheroCylinderLength);

        cout << "\n\tSpherocylinder Output:";
        cout << "\n\t\tradius       (r): " << setw(10) << right << spheroCylinderRadius;
        cout << "\n\t\tlength       (l): " << setw(10) << right << spheroCylinderLength;
        cout << "\n\t\tvolume       (V): " << setw(10) << right << spheroCylinderVolume;
        cout << "\n\t\tsurface area (S): " << setw(10) << right << spheroCylinderSurfaceArea;
        cout << '\n';
    }

    //cone 
    else if (choice == 'C' || choice == 'c')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t3) A cone is a solid shape which tapers from a circular base to a point.\n\n";

    double coneRadius = 0.0;

    cout << "\n\tEnter a positive numeric value for the radius (r) of the cone: ";

    cin >> coneRadius;

    if (coneRadius <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
       
        return -4;
    }

    double coneHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of the cone: ";

    cin >> coneHeight;

    if (coneHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -5;
    }


    coneVolume = PI * pow(coneRadius, 2) * ( coneHeight / 3);

    coneSurfaceArea = PI * coneRadius * (coneRadius + sqrt(pow(coneHeight, 2) + pow(coneRadius, 2)));

    cout << "\n\tCone Output:";
    cout << "\n\t\tradius       (r): " << setw(10) << right << coneRadius;
    cout << "\n\t\theight       (h): " << setw(10) << right << coneHeight;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << coneVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << coneSurfaceArea;
    cout << '\n';
    }

    // tetrahedron 
    
    else if (choice == 'D' || choice == 'd')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";

        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t4) A regular tetrahedron is a solid triangular pyramid.\n";

    double tetrahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of the tetrahedron: \n\t";

    cin >> tetrahedronEdge;

    if (tetrahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -6;
    }
    tetrahedronVolume = pow(tetrahedronEdge, 3) / (6 * sqrt(2));

    tetrahedronSurfaceArea = sqrt(3) * pow(tetrahedronEdge, 2);

 
    cout << "\n\tTetrahedron  Output:";
    cout << "\n\t\tlength of edge (a): " << setw(10) << right << tetrahedronEdge;
    cout << "\n\t\tvolume         (V): " << setw(10) << right << tetrahedronVolume;
    cout << "\n\t\tsurface area   (S): " << setw(10) << right << tetrahedronSurfaceArea;
    cout << '\n';
    }

// hexahedron
    
    else if (choice == 'E' || choice == 'e')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";

        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t5) A regular hexahedron is a solid figure with six plane faces.\n";

    double hexahedronlength = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of a hexahedron: \n\t";

    cin >> hexahedronlength; 

    if (hexahedronlength <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -7;
    }

    hexahedronVolume = pow(hexahedronlength, 3);

    hexahedronSurfaceArea = 6 * pow(hexahedronlength, 2);

    cout << "\n\tHexahedron  Output:";
    cout << "\n\t\tlength       (a): " << setw(10) << right << hexahedronlength;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << hexahedronVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << hexahedronSurfaceArea;
    cout << '\n';
    }

    //-Octahedron

    else if (choice == 'F' || choice == 'f')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t6) An octahedron is a solid shape that has eight equal triangular faces.\n";

    double octahedronEdge= 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of an octahedron: \n\t";

    cin >> octahedronEdge;

    if (octahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -8;
    }



    octahedronVolume = sqrt(2) / 3 * pow(octahedronEdge, 3);

    octahedronSurfaceArea = 2 * sqrt(3) * pow(octahedronEdge, 2);

    cout << "\n\tOctahedron Output:";
    cout << "\n\t    Length of Edge        (a): " << setw(10) << right << octahedronEdge;
    cout << "\n\t    volume                (V): " << setw(10) << right << octahedronVolume;
    cout << "\n\t    surface area          (S): " << setw(10) << right << octahedronSurfaceArea;
    cout << '\n';
    }

    //dodecahedron 

    else if (choice == 'G' || choice == 'g')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t7) A dodecahedron is a solid that has twelve equal pentagonal faces.\n";

    double dodecahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of a dodecahedron: \n\t";

    cin >> dodecahedronEdge;

    if (dodecahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -9;
    }


    dodecahedronVolume = (15 + (sqrt(5) * 7)) / 4 * pow(dodecahedronEdge, 3);

    dodecahedronSurfaceArea = sqrt((sqrt(5) * 10) + 25) * 3 * pow(dodecahedronEdge, 2);

    cout << "\n\tDodecahedron  Output:";
    
    cout << "\n\t   length of edge (a): " << setw(10) << right << dodecahedronEdge;
    cout << "\n\t   volume         (V): " << setw(10) << right << dodecahedronVolume;
    cout << "\n\t   surface area   (S): " << setw(10) << right << dodecahedronSurfaceArea;
    cout << '\n';
    }

    //Icosahedron

    else if (choice == 'H' || choice == 'h')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t8) An icosahedron is a solid shape that has twenty equilateral triangular faces.\n";

    double icosahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge of an icosahedron: \n\t";

    cin >> icosahedronEdge;

    if (icosahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -10;
    }

   

    icosahedronVolume = (5 * (sqrt(5) + 3)) / 12 * pow(icosahedronEdge, 3); 

    icosahedronSurfaceArea = 5 * sqrt(3) * pow(icosahedronEdge, 2);

    cout << "\n\tIcosahedron  Output:";
    cout << "\n\t    Length of the edge (a): " << setw(10) << right << icosahedronEdge;
    cout << "\n\t    volume             (V): " << setw(10) << right << icosahedronVolume;
    cout << "\n\t    surface area       (S): " << setw(10) << right << icosahedronSurfaceArea;
    cout << '\n';
    }

    //Cuboid

    else if (choice == 'I' || choice == 'i')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t9) A cuboid is a solid shape that has six rectangular faces at right angles to each other.\n";

    double cuboidlength= 0.0;

    cout << "\n\tEnter a positive numeric value for the length (l) of a cuboid: \n\t";

    cin >> cuboidlength;

    if (cuboidlength <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -11;
    }

    double cuboidWidth = 0.0;

    cout << "\n\tEnter a positive numeric value for the width (w) of a cuboid \n\t";

    cin >> cuboidWidth;

    if (cuboidWidth <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -12;
    }

    double cuboidHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of a cuboid \n\t";

    cin >> cuboidHeight;

    if (cuboidHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -13;
    }

    cuboidVolume = cuboidWidth * cuboidlength * cuboidHeight;

    cuboidSurfaceArea = (2 * cuboidlength * cuboidWidth) + (2 * cuboidlength * cuboidHeight) + (2 * cuboidHeight * cuboidWidth);

    cout << "\n\tCuboid Output:";
    cout << "\n\t\theight       (h): " << setw(10) << right << cuboidHeight;
    cout << "\n\t\twidth        (w): " << setw(10) << right << cuboidWidth;
    cout << "\n\t\tlength       (l): " << setw(10) << right << cuboidlength;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << cuboidVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << cuboidSurfaceArea;
    cout << '\n';
    }

    // Triangular Prism

    else if (choice == 'J' || choice == 'j')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    cout << "\n\t10) A triangular prism is a solid shape with two identical faces in the shape of a triangle connected by three";
    cout << "\n\trectangular faces\n";
        

    double baseA = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (a) of a Triangular prism: ";

    cin >> baseA;

    if (baseA <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -14;
    }

    double baseB = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (b) of a Triangular prism: ";

    cin >> baseB;

    if (baseB <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -15;
    }

    double baseC = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (c) of a Triangular prism: ";

    cin >> baseC;

    if (baseC <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -16;
    }


    double triangularPrismHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of a Triangular prism: ";

    cin >> triangularPrismHeight;

    if (triangularPrismHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -17;
    }
    //===========================================

    // validating length sides of Triangular Prism
    if ((baseB + baseC) < baseA)

    {
        cout << "\n\n\tInvalid input: make sure(b+c)>a"; 

        return -18;
    }

    if ((baseA + baseC) < baseB)

    {
        cout << "\n\n\tInvalid input: make sure(a+c)>b";

        return -19;
    }

    if ((baseA + baseB) < baseC)

    {
        cout << "\n\n\tInvalid input: make sure(a+b)>c";

        return -20;
    }

    triangularPrismVolume = (1.0/4) * triangularPrismHeight * sqrt((baseA + baseB + baseC) * (baseB + baseC - baseA) * (baseC + baseA - baseB) * (baseA + baseB - baseC));

    triangularPrismSurfaceArea = (baseA* triangularPrismHeight) + (baseB * triangularPrismHeight) + (baseC * triangularPrismHeight) + ((1.0 / 2) * sqrt((2 * pow((baseA * baseB), 2)) + (2 * pow((baseA * baseC), 2)) + (2 * pow((baseB * baseC), 2)) - (pow(baseA, 4)) - (pow(baseB, 4)) - (pow(baseC, 4))));

    cout << "\n\tTriangular Prism Output:";
    cout << "\n\t\tbase a       (r): " << setw(10) << right << baseA;
    cout << "\n\t\tbase b       (l): " << setw(10) << right << baseB;
    cout << "\n\t\tbase c       (V): " << setw(10) << right << baseC;
    cout << "\n\t\theight       (h)  " << setw(10) << right << triangularPrismHeight;
    cout << "\n\t\tvolume       (v): " << setw(10) << right << triangularPrismVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << triangularPrismSurfaceArea;
    cout << '\n';
    }

    // Randomizing the input for the calculator

    else if (choice == 'K' || choice == 'k')

    {

        cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

        cin >> significantFigures;

        if (significantFigures < 1 || significantFigures > 10)
        {
            cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
            significantFigures = 2;
        }
        cout << showpoint << setprecision(significantFigures) << fixed;

        cout << "\n\tRandomized Volume and Surface Area\n";

        cout << "\t===============================================\n";

        cout << "\n\tshape " << "\t\t surface area" << "\t\tvolume";

        cout << "\n\t------------------------------------------------";

        // random sphere start
        double sphereRadius = rand() % 1000 * .01; 

        sphereVolume = 4 * PI * pow(sphereRadius, 3) / 3;

        sphereSurfaceArea = 4 * PI * pow(sphereRadius, 2);

        cout << "\n\tSphere" << "\t\t   " << setw(20) << right << sphereSurfaceArea << "\t\t" << setw(20) << right << sphereVolume;


        //Random Spherocylinder start
        double spheroCylinderRadius = rand() % 1000 * .01;

        double spheroCylinderLength = rand() % 1000 * .01;

        spheroCylinderVolume = PI * pow(spheroCylinderRadius, 2) * (4.0 / 3 * spheroCylinderRadius + spheroCylinderLength);

        spheroCylinderSurfaceArea = 2 * PI * spheroCylinderRadius * (2 * spheroCylinderRadius + spheroCylinderLength);

        cout << "\n\tSpherocylinder  " << "   " << setw(20) << right << spheroCylinderSurfaceArea << "\t\t" << setw(20) << right << spheroCylinderVolume;


        // Random cone start
        double coneRadius = rand() % 1000 * .01; 

        double coneHeight = rand() % 1000 * .01;

        coneVolume = PI * pow(coneRadius, 2) * (coneHeight / 3);

        coneSurfaceArea = PI * coneRadius * (coneRadius + sqrt(pow(coneHeight, 2) + pow(coneRadius, 2)));

        cout << "\n\tCone " << "\t\t   " << setw(20) << right << coneSurfaceArea << "\t\t" << setw(20) << right << coneVolume; 



        // Random tetrahedron start
        double tetrahedronEdge = rand() % 1000 * .01; 

        tetrahedronVolume = pow(tetrahedronEdge, 3) / (6 * sqrt(2));

        tetrahedronSurfaceArea = sqrt(3) * pow(tetrahedronEdge, 2);

        cout << "\n\tTetrahedron     " << "   " << setw(20) << right << tetrahedronSurfaceArea << "\t\t" << setw(20) << right << tetrahedronVolume; 


        // Random hexahedron start
        double hexahedronlength = rand() % 1000 * .01; 

        hexahedronVolume = pow(hexahedronlength, 3);

        hexahedronSurfaceArea = 6 * pow(hexahedronlength, 2);

        cout << "\n\tHexahedron      " << "   " << setw(20) << right << hexahedronSurfaceArea << "\t\t" << setw(20) << right << hexahedronVolume; 

        
        
        
        //Random octahedron start
        
        double octahedronEdge = rand() % 1000 * .01;

        octahedronVolume = sqrt(2) / 3 * pow(octahedronEdge, 3);

        octahedronSurfaceArea = 2 * sqrt(3) * pow(octahedronEdge, 2);

        cout << "\n\tOctahedron      " << "   " << setw(20) << right << octahedronSurfaceArea << "\t\t" << setw(20) << right << octahedronVolume; //octa end 



        // Random dodecahedron start

        double dodecahedronEdge = rand() % 1000 * .01; 

        dodecahedronVolume = (15 + (sqrt(5) * 7)) / 4 * pow(dodecahedronEdge, 3);

        dodecahedronSurfaceArea = sqrt((sqrt(5) * 10) + 25) * 3 * pow(dodecahedronEdge, 2);

        cout << "\n\tDodecahedron    " << "   " << setw(20) << right << dodecahedronSurfaceArea << "\t\t" << setw(20) << right << dodecahedronVolume; //doda end 


        
        
        // Random icosahedron start
        
        double icosahedronEdge = rand() % 1000 * .01; 

        icosahedronVolume = (5 * (sqrt(5) + 3)) / 12 * pow(icosahedronEdge, 3);

        icosahedronSurfaceArea = 5 * sqrt(3) * pow(icosahedronEdge, 2);

        cout << "\n\tIcosahedron     " << "   " << setw(20) << right << icosahedronSurfaceArea << "\t\t" << setw(20) << right << icosahedronVolume; //icosa end



        // Random cuboid start 

        double cuboidWidth = rand() % 1000 * .01; 

        double cuboidlength = rand() % 1000 * .01;

        double cuboidHeight = rand() % 1000 * .01;

        cuboidVolume = cuboidWidth * cuboidlength * cuboidHeight;

        cuboidSurfaceArea = (2 * cuboidlength * cuboidWidth) + (2 * cuboidlength * cuboidHeight) + (2 * cuboidHeight * cuboidWidth);

        cout << "\n\tCuboid          " << "   " << setw(20) << right << cuboidSurfaceArea << "\t\t" << setw(20) << right << cuboidVolume; //cuboid end 




        // Random triangularprism start
        double triangularPrismHeight = rand() % 1000 * .01; 
        double baseA = rand() % 1000 * .01;

        double baseB = rand() % 1000 * .01;

        double baseC = rand() % 1000 * .01;

     

        triangularPrismVolume = (1.0 / 4) * triangularPrismHeight * sqrt((baseA + baseB + baseC) * (baseB + baseC - baseA) * (baseC + baseA - baseB) * (baseA + baseB - baseC));

        triangularPrismSurfaceArea = (baseA * triangularPrismHeight) + (baseB * triangularPrismHeight) + (baseC * triangularPrismHeight) + ((1.0 / 2) * sqrt((2 * pow((baseA * baseB), 2)) + (2 * pow((baseA * baseC), 2)) + (2 * pow((baseB * baseC), 2)) - (pow(baseA, 4)) - (pow(baseB, 4)) - (pow(baseC, 4))));

        cout << "\n\tTriangular Prism" << "   " << setw(20) << right << triangularPrismSurfaceArea << "\t\t" << setw(20) << right << triangularPrismVolume;

        //------------------------------------------------------------------------------------------------------------------------------
        //------------------------------------------------------------------------------------------------------------------------------

        // Starting to display the biggest random shape

        //Random sphere biggest or smallest

        if ((sphereVolume > triangularPrismVolume) && (sphereVolume > cuboidVolume) && (sphereVolume > spheroCylinderVolume) && (sphereVolume > coneVolume) && (sphereVolume > tetrahedronVolume) && (sphereVolume > octahedronVolume) && (sphereVolume > dodecahedronVolume) && (sphereVolume > icosahedronVolume) && (sphereVolume > hexahedronVolume))

        {
            cout << "\n\n\t+Sphere is the biggest shape.";
        }

        else if ((sphereVolume < triangularPrismVolume) && (sphereVolume < cuboidVolume) && (sphereVolume < spheroCylinderVolume) && (sphereVolume < coneVolume) && (sphereVolume < tetrahedronVolume) && (sphereVolume < octahedronVolume) && (sphereVolume < dodecahedronVolume) && (sphereVolume < icosahedronVolume) && (sphereVolume < hexahedronVolume))

        {
            cout << "\n\n\t-Sphere is the smallest shape";
        }



        //----------------------------------------------------------------------------------------------------------------
       // Random Triaingular Prism biggest or smallest
        if ((triangularPrismVolume > sphereVolume) && (triangularPrismVolume > cuboidVolume) && (triangularPrismVolume > spheroCylinderVolume) && (triangularPrismVolume > coneVolume) && (triangularPrismVolume > tetrahedronVolume) && (triangularPrismVolume > octahedronVolume) && (triangularPrismVolume > dodecahedronVolume) && (triangularPrismVolume > icosahedronVolume) && (triangularPrismVolume > hexahedronVolume))

        {
            cout << "\n\n\t+Triangular Prism is the biggest shape.";
        }

        else if ((triangularPrismVolume < sphereVolume) && (triangularPrismVolume < cuboidVolume) && (triangularPrismVolume < spheroCylinderVolume) && (triangularPrismVolume < coneVolume) && (triangularPrismVolume < tetrahedronVolume) && (triangularPrismVolume < octahedronVolume) && (triangularPrismVolume < dodecahedronVolume) && (triangularPrismVolume < icosahedronVolume) && (triangularPrismVolume < hexahedronVolume))

        {
            cout << "\n\n\t-TriangularPrismVolume is the smallest shape";

        }


        //------------------------------------------------------------------------------------------------------------------------------------
      // Random Cuboid smallest or biggest
        if ((cuboidVolume > sphereVolume) && (cuboidVolume > triangularPrismVolume) && (cuboidVolume > spheroCylinderVolume) && (cuboidVolume > coneVolume) && (cuboidVolume > tetrahedronVolume) && (cuboidVolume > octahedronVolume) && (cuboidVolume > dodecahedronVolume) && (cuboidVolume > icosahedronVolume) && (cuboidVolume > hexahedronVolume))

        {
           
            cout << "\n\n\t+Cuboid is the biggest shape";

        }

        else if ((cuboidVolume < sphereVolume) && (cuboidVolume < triangularPrismVolume) && (cuboidVolume < spheroCylinderVolume) && (cuboidVolume < coneVolume) && (cuboidVolume < tetrahedronVolume) && (cuboidVolume < octahedronVolume) && (cuboidVolume < dodecahedronVolume) && (cuboidVolume < icosahedronVolume) && (cuboidVolume < hexahedronVolume))

        {
            cout << "\n\n\t-Cuboid is the smallest shape.";

        }


        //-------------------------------------------------------------------------------------------------------------------------
       // Random Spherocyrical biggest or smallest
        
        if ((spheroCylinderVolume > sphereVolume) && (spheroCylinderVolume > triangularPrismVolume) && (spheroCylinderVolume > cuboidVolume) && (spheroCylinderVolume > coneVolume) && (spheroCylinderVolume > tetrahedronVolume) && (spheroCylinderVolume > octahedronVolume) && (spheroCylinderVolume > dodecahedronVolume) && (spheroCylinderVolume > icosahedronVolume) && (spheroCylinderVolume > hexahedronVolume))

        {
           
            cout << "\n\n\t+Spherocylinder is the biggest shape.";

        }

        else if ((spheroCylinderVolume < sphereVolume) && (spheroCylinderVolume < triangularPrismVolume) && (spheroCylinderVolume < cuboidVolume) && (spheroCylinderVolume < coneVolume) && (spheroCylinderVolume < tetrahedronVolume) && (spheroCylinderVolume < octahedronVolume) && (spheroCylinderVolume < dodecahedronVolume) && (spheroCylinderVolume < icosahedronVolume) && (spheroCylinderVolume < hexahedronVolume))

        {
           
            cout << "\n\n\t-Spherocylinder is the smallest shape";

        }
         //-----------------------------------------------------------------------------------------------
        // Random Cone biggest or smallest

        if ((coneVolume > sphereVolume) && (coneVolume > triangularPrismVolume) && (coneVolume > cuboidVolume) && (coneVolume > spheroCylinderVolume) && (coneVolume > tetrahedronVolume) && (coneVolume > octahedronVolume) && (coneVolume > dodecahedronVolume) && (coneVolume > icosahedronVolume) && (coneVolume > hexahedronVolume))

        {
         

            cout << "\n\n\t+Cone is the biggest shape.";

        }

        else if ((coneVolume < sphereVolume) && (coneVolume < triangularPrismVolume) && (coneVolume < cuboidVolume) && (coneVolume < spheroCylinderVolume) && (coneVolume < tetrahedronVolume) && (coneVolume < octahedronVolume) && (coneVolume < dodecahedronVolume) && (coneVolume < icosahedronVolume) && (coneVolume < hexahedronVolume))

        {
          
            cout << "\n\n\t-Cone is the smallest shape.";

        }

        //------------------------------------------------------------------------
        // Random tetrahedron biggest or smallest 


        if ((tetrahedronVolume > sphereVolume) && (tetrahedronVolume > triangularPrismVolume) && (tetrahedronVolume > cuboidVolume) && (tetrahedronVolume > spheroCylinderVolume) && (tetrahedronVolume > coneVolume) && (tetrahedronVolume > octahedronVolume) && (tetrahedronVolume > dodecahedronVolume) && (tetrahedronVolume > icosahedronVolume) && (tetrahedronVolume > hexahedronVolume))

        {


            cout << "\n\n\t+Tetrahedron is the biggest shape.";

        }

        else if ((tetrahedronVolume < sphereVolume) && (tetrahedronVolume < triangularPrismVolume) && (tetrahedronVolume < cuboidVolume) && (tetrahedronVolume < spheroCylinderVolume) && (tetrahedronVolume < coneVolume) && (tetrahedronVolume < octahedronVolume) && (tetrahedronVolume < dodecahedronVolume) && (tetrahedronVolume < icosahedronVolume) && (tetrahedronVolume < hexahedronVolume))

        {
          
            cout << "\n\n\t-Tetrahedron is the smallest shape.";

        }


        //------------------------------------------------------------------------------------------------------------
        // Random Hexahedron biggest or smallest


        if ((hexahedronVolume > sphereVolume) && (hexahedronVolume > triangularPrismVolume) && (hexahedronVolume > cuboidVolume) && (hexahedronVolume > spheroCylinderVolume) && (hexahedronVolume > coneVolume) && (hexahedronVolume > octahedronVolume) && (hexahedronVolume > dodecahedronVolume) && (hexahedronVolume > icosahedronVolume) && (hexahedronVolume > tetrahedronVolume))

        {
       
            cout << "\n\n\t+Hexahedron is the biggest shape.";

        }

        else if((hexahedronVolume < sphereVolume) && (hexahedronVolume < triangularPrismVolume) && (hexahedronVolume < cuboidVolume) && (hexahedronVolume < spheroCylinderVolume) && (hexahedronVolume < coneVolume) && (hexahedronVolume < octahedronVolume) && (hexahedronVolume < dodecahedronVolume) && (hexahedronVolume < icosahedronVolume) && (hexahedronVolume < tetrahedronVolume)) 

        {
         
            cout << "\n\n\t-Hexahedron is the smallest shape.";

        }

        //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        // Random Octahedron biggest or smallest
        if ((octahedronVolume > sphereVolume) && (octahedronVolume > triangularPrismVolume) && (octahedronVolume > cuboidVolume) && (octahedronVolume > spheroCylinderVolume) && (octahedronVolume > coneVolume) && (octahedronVolume > hexahedronVolume) && (octahedronVolume > dodecahedronVolume) && (octahedronVolume > icosahedronVolume) && (octahedronVolume > tetrahedronVolume))

        {

            cout << "\n\n\t+Octahedron is the biggest shape.";

        }

        else   if ((octahedronVolume < sphereVolume) && (octahedronVolume < triangularPrismVolume) && (octahedronVolume < cuboidVolume) && (octahedronVolume < spheroCylinderVolume) && (octahedronVolume < coneVolume) && (octahedronVolume < hexahedronVolume) && (octahedronVolume < dodecahedronVolume) && (octahedronVolume < icosahedronVolume) && (octahedronVolume < tetrahedronVolume))

        {          
            cout << "\n\n\t-Octahedron is the smallest shape.";

        }
        //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        // Random Dodecahedron biggest or smallest 
        if ((dodecahedronVolume > sphereVolume) && (dodecahedronVolume > triangularPrismVolume) && (dodecahedronVolume > cuboidVolume) && (dodecahedronVolume > spheroCylinderVolume) && (dodecahedronVolume > coneVolume) && (dodecahedronVolume > hexahedronVolume) && (dodecahedronVolume > octahedronVolume) && (dodecahedronVolume > icosahedronVolume) && (dodecahedronVolume > tetrahedronVolume))

        {
    
            cout << "\n\n\t+Dodecahedron is the biggest shape.";

        }

        else if ((dodecahedronVolume < sphereVolume) && (dodecahedronVolume < triangularPrismVolume) && (dodecahedronVolume < cuboidVolume) && (dodecahedronVolume < spheroCylinderVolume) && (dodecahedronVolume < coneVolume) && (dodecahedronVolume < hexahedronVolume) && (dodecahedronVolume < octahedronVolume) && (dodecahedronVolume < icosahedronVolume) && (dodecahedronVolume < tetrahedronVolume))

        {

            cout << "\n\n\t-Dodecahedron is the smallest shape.";

        }

        //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        // Random Icosahedron biggest or smallest
        if ((icosahedronVolume > sphereVolume) && (icosahedronVolume > triangularPrismVolume) && (icosahedronVolume > cuboidVolume) && (icosahedronVolume > spheroCylinderVolume) && (icosahedronVolume > coneVolume) && (icosahedronVolume > hexahedronVolume) && (icosahedronVolume > octahedronVolume) && (icosahedronVolume > dodecahedronVolume) && (icosahedronVolume > tetrahedronVolume))

        {
        

            cout << "\n\n\t+Icosahedron is the biggest shape.";

        }

        else if ((icosahedronVolume < sphereVolume) && (icosahedronVolume < triangularPrismVolume) && (icosahedronVolume < cuboidVolume) && (icosahedronVolume < spheroCylinderVolume) && (icosahedronVolume < coneVolume) && (icosahedronVolume < hexahedronVolume) && (icosahedronVolume < octahedronVolume) && (icosahedronVolume < dodecahedronVolume) && (icosahedronVolume < tetrahedronVolume))

        {
           
            cout << "\n\n\t-Icosahedron is the smallest shape.";

        }
        
        //---------------------------------------------------------------------------------------------------------------------------------------------------------------
        // Repeat of previous smallest/biggest shape except that this is when the tringular prism size reuirements are not met.
        if (   ( (baseB + baseC) < baseA || (baseA + baseC) < baseB || (baseA + baseB) < baseC )    )

        {
            //====================================================================
            //Random sphere biggest or smallest
            if ( (sphereVolume > cuboidVolume) && (sphereVolume > spheroCylinderVolume) && (sphereVolume > coneVolume) && (sphereVolume > tetrahedronVolume) && (sphereVolume > octahedronVolume) && (sphereVolume > dodecahedronVolume) && (sphereVolume > icosahedronVolume) && (sphereVolume > hexahedronVolume))

            {
                cout << "\n\n\t+Sphere is the biggest shape.";
            }

            else if ((sphereVolume < cuboidVolume) && (sphereVolume < spheroCylinderVolume) && (sphereVolume < coneVolume) && (sphereVolume < tetrahedronVolume) && (sphereVolume < octahedronVolume) && (sphereVolume < dodecahedronVolume) && (sphereVolume < icosahedronVolume) && (sphereVolume < hexahedronVolume))

            {
                cout << "\n\n\t-Sphere is the smallest shape";
            }

            //===================================================================
            //Random cuboid biggest or smallest

            if ((cuboidVolume > sphereVolume) && (cuboidVolume > spheroCylinderVolume) && (cuboidVolume > coneVolume) && (cuboidVolume > tetrahedronVolume) && (cuboidVolume > octahedronVolume) && (cuboidVolume > dodecahedronVolume) && (cuboidVolume > icosahedronVolume) && (cuboidVolume > hexahedronVolume))

            {

                cout << "\n\n\t+Cuboid is the biggest shape";

            }

            else if ((cuboidVolume < sphereVolume) && (cuboidVolume < spheroCylinderVolume) && (cuboidVolume < coneVolume) && (cuboidVolume < tetrahedronVolume) && (cuboidVolume < octahedronVolume) && (cuboidVolume < dodecahedronVolume) && (cuboidVolume < icosahedronVolume) && (cuboidVolume < hexahedronVolume))

            {
                cout << "\n\n\t-Cuboid is the smallest shape.";

            }
            //====================================================================
            // Ramdom Spherocylinder biggest or smallest 
            if ((spheroCylinderVolume > sphereVolume) && (spheroCylinderVolume > cuboidVolume) && (spheroCylinderVolume > coneVolume) && (spheroCylinderVolume > tetrahedronVolume) && (spheroCylinderVolume > octahedronVolume) && (spheroCylinderVolume > dodecahedronVolume) && (spheroCylinderVolume > icosahedronVolume) && (spheroCylinderVolume > hexahedronVolume))

            {

                cout << "\n\n\t+Spherocylinder is the biggest shape.";

            }

            else if ((spheroCylinderVolume < sphereVolume) && (spheroCylinderVolume < cuboidVolume) && (spheroCylinderVolume < coneVolume) && (spheroCylinderVolume < tetrahedronVolume) && (spheroCylinderVolume < octahedronVolume) && (spheroCylinderVolume < dodecahedronVolume) && (spheroCylinderVolume < icosahedronVolume) && (spheroCylinderVolume < hexahedronVolume))

            {

                cout << "\n\n\t-Spherocylinder is the smallest shape";

            }
            //=====================================================================================================
            // Random Cone biggest or smallest

            if ((coneVolume > sphereVolume) && (coneVolume > cuboidVolume) && (coneVolume > spheroCylinderVolume) && (coneVolume > tetrahedronVolume) && (coneVolume > octahedronVolume) && (coneVolume > dodecahedronVolume) && (coneVolume > icosahedronVolume) && (coneVolume > hexahedronVolume))

            {
                cout << "\n\n\t+Cone is the biggest shape.";

            }

            else if ((coneVolume < sphereVolume) && (coneVolume < cuboidVolume) && (coneVolume < spheroCylinderVolume) && (coneVolume < tetrahedronVolume) && (coneVolume < octahedronVolume) && (coneVolume < dodecahedronVolume) && (coneVolume < icosahedronVolume) && (coneVolume < hexahedronVolume))

            {

                cout << "\n\n\t-Cone is the smallest shape.";

            }

            //====================================================================================================================================
            //Random  Tetrahedron biggest or smallest 
            if ((tetrahedronVolume > sphereVolume) && (tetrahedronVolume > cuboidVolume) && (tetrahedronVolume > spheroCylinderVolume) && (tetrahedronVolume > coneVolume) && (tetrahedronVolume > octahedronVolume) && (tetrahedronVolume > dodecahedronVolume) && (tetrahedronVolume > icosahedronVolume) && (tetrahedronVolume > hexahedronVolume))

            {
                cout << "\n\n\t+Tetrahedron is the biggest shape.";

            }

            else if ((tetrahedronVolume < sphereVolume) && (tetrahedronVolume < cuboidVolume) && (tetrahedronVolume < spheroCylinderVolume) && (tetrahedronVolume < coneVolume) && (tetrahedronVolume < octahedronVolume) && (tetrahedronVolume < dodecahedronVolume) && (tetrahedronVolume < icosahedronVolume) && (tetrahedronVolume < hexahedronVolume))

            {

                cout << "\n\n\t-Tetrahedron is the smallest shape.";

            }

            //====================================================================================================================================
            //Random Hexahedron biggest or smallest 

            if ((hexahedronVolume > sphereVolume) && (hexahedronVolume > cuboidVolume) && (hexahedronVolume > spheroCylinderVolume) && (hexahedronVolume > coneVolume) && (hexahedronVolume > octahedronVolume) && (hexahedronVolume > dodecahedronVolume) && (hexahedronVolume > icosahedronVolume) && (hexahedronVolume > tetrahedronVolume))

            {

                cout << "\n\n\t+Hexahedron is the biggest shape.";

            }

            else if ((hexahedronVolume < sphereVolume) && (hexahedronVolume < cuboidVolume) && (hexahedronVolume < spheroCylinderVolume) && (hexahedronVolume < coneVolume) && (hexahedronVolume < octahedronVolume) && (hexahedronVolume < dodecahedronVolume) && (hexahedronVolume < icosahedronVolume) && (hexahedronVolume < tetrahedronVolume))

            {

                cout << "\n\n\t-Hexahedron is the smallest shape.";

            }
         
            //====================================================================================================================================
            //Random Octahedron biggest or smallest

            if ((octahedronVolume > sphereVolume) && (octahedronVolume > cuboidVolume) && (octahedronVolume > spheroCylinderVolume) && (octahedronVolume > coneVolume) && (octahedronVolume > hexahedronVolume) && (octahedronVolume > dodecahedronVolume) && (octahedronVolume > icosahedronVolume) && (octahedronVolume > tetrahedronVolume))

            {
                cout << "\n\n\t+Octahedron is the biggest shape.";
            }

            else   if ((octahedronVolume < sphereVolume) && (octahedronVolume < cuboidVolume) && (octahedronVolume < spheroCylinderVolume) && (octahedronVolume < coneVolume) && (octahedronVolume < hexahedronVolume) && (octahedronVolume < dodecahedronVolume) && (octahedronVolume < icosahedronVolume) && (octahedronVolume < tetrahedronVolume))

            {
                cout << "\n\n\t-Octahedron is the smallest shape.";
            }

            //====================================================================================================================================
            //Random dodecahedron biggest or smalles

            if ((dodecahedronVolume > sphereVolume) && (dodecahedronVolume > cuboidVolume) && (dodecahedronVolume > spheroCylinderVolume) && (dodecahedronVolume > coneVolume) && (dodecahedronVolume > hexahedronVolume) && (dodecahedronVolume > octahedronVolume) && (dodecahedronVolume > icosahedronVolume) && (dodecahedronVolume > tetrahedronVolume))

            {
                cout << "\n\n\t+Dodecahedron is the biggest shape.";
            }

            else if ((dodecahedronVolume < sphereVolume) && (dodecahedronVolume < cuboidVolume) && (dodecahedronVolume < spheroCylinderVolume) && (dodecahedronVolume < coneVolume) && (dodecahedronVolume < hexahedronVolume) && (dodecahedronVolume < octahedronVolume) && (dodecahedronVolume < icosahedronVolume) && (dodecahedronVolume < tetrahedronVolume))

            {
                cout << "\n\n\t-Dodecahedron is the smallest shape.";
            }

            //====================================================================================================================================
            //Random Icosahedron biggest or smallest

            if ((icosahedronVolume > sphereVolume) && (icosahedronVolume > cuboidVolume) && (icosahedronVolume > spheroCylinderVolume) && (icosahedronVolume > coneVolume) && (icosahedronVolume > hexahedronVolume) && (icosahedronVolume > octahedronVolume) && (icosahedronVolume > dodecahedronVolume) && (icosahedronVolume > tetrahedronVolume))

            {
                cout << "\n\n\t+Icosahedron is the biggest shape.";
            }

            else if ((icosahedronVolume < sphereVolume) && (icosahedronVolume < cuboidVolume) && (icosahedronVolume < spheroCylinderVolume) && (icosahedronVolume < coneVolume) && (icosahedronVolume < hexahedronVolume) && (icosahedronVolume < octahedronVolume) && (icosahedronVolume < dodecahedronVolume) && (icosahedronVolume < tetrahedronVolume))

            {
                cout << "\n\n\t-Icosahedron is the smallest shape.";
            }

        }


    }

    else if (choice == 'L' || choice == 'l')

    {
    cout << "\n\tSpecify a number (1...10) of significant figures needed in formating floating-point or double value Output: \n\t";

    cin >> significantFigures;

    if (significantFigures < 1 || significantFigures > 10)
    {
        cout << "\tERROR: Input significant number must be in range (1...10). Therefore, it will be defaulted to 2.\n";
        significantFigures = 2;
    }
    cout << showpoint << setprecision(significantFigures) << fixed;

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

    // sphere manual input 

    cout << "\n\t1) A sphere is a round object and has a surface with every point on its surface equidistant from its center.\n";

    double sphereRadius = 0.0;

    cout << "\n\tEnter a positive numeric value for the radius (r) of a sphere: \n\t";

    cin >> sphereRadius;

    if (sphereRadius <= 0.0)
    {
        cout << "\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -21;
    }


    sphereVolume = 4 * PI * pow(sphereRadius, 3) / 3;

    sphereSurfaceArea = 4 * PI * pow(sphereRadius, 2);

    cout << "\n\tSphere Output:";

    cout << "\n\t\tvolume       (V): " << setw(10) << right << sphereVolume;

    cout << "\n\t\tsurface area (S): " << setw(10) << right << sphereSurfaceArea;

    cout << '\n';

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

    // spherocylinder manual input

    cout << "\n\t2) A spherocylinder is made up of two hemispheres connected by a cylinder.\n";

    double spheroCylinderRadius = 0.0;

    cout << "\n\tEnter a positive numeric value for the radius (r) of the spherocylinder: ";

    cin >> spheroCylinderRadius;

    if (spheroCylinderRadius <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -22;
    }

    double spheroCylinderLength = 0.0;

    cout << "\n\tEnter a positive numeric value for the length (l) of the spherocylinder: ";

    cin >> spheroCylinderLength;

    if (spheroCylinderLength <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -23;
    }

    spheroCylinderVolume = PI * pow(spheroCylinderRadius, 2) * (4.0 / 3 * spheroCylinderRadius + spheroCylinderLength);

    spheroCylinderSurfaceArea = 2 * PI * spheroCylinderRadius * (2 * spheroCylinderRadius + spheroCylinderLength);

    cout << "\n\tSpherocylinder Output:";
    cout << "\n\t\tradius       (r): " << setw(10) << right << spheroCylinderRadius;
    cout << "\n\t\tlength       (l): " << setw(10) << right << spheroCylinderLength;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << spheroCylinderVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << spheroCylinderSurfaceArea;
    cout << '\n';

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

   // cone manual input

    cout << "\n\t3) A cone is a solid shape which tapers from a circular base to a point.\n\n";

    double coneRadius = 0.0;

    cout << "\n\tEnter a positive numeric value for the radius (r) of the cone: ";

    cin >> coneRadius;

    if (coneRadius <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -24;
    }

    double coneHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of the cone: ";

    cin >> coneHeight;

    if (coneHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -25;
    }


    coneVolume = PI * pow(coneRadius, 2) * (coneHeight / 3);

    coneSurfaceArea = PI * coneRadius * (coneRadius + sqrt(pow(coneHeight, 2) + pow(coneRadius, 2)));

    cout << "\n\tCone Output:";
    cout << "\n\t\tradius       (r): " << setw(10) << right << coneRadius;
    cout << "\n\t\theight       (h): " << setw(10) << right << coneHeight;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << coneVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << coneSurfaceArea;
    cout << '\n';


    //-----------------------------------------------------------------------------------------------------------------------------------------------------

   // tetrahedron manual input

    cout << "\n\t4) A regular tetrahedron is a solid triangular pyramid.\n";

    double tetrahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of the tetrahedron: \n\t";

    cin >> tetrahedronEdge;

    if (tetrahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -26;
    }



    tetrahedronVolume = pow(tetrahedronEdge, 3) / (6 * sqrt(2));

    tetrahedronSurfaceArea = sqrt(3) * pow(tetrahedronEdge, 2);


    cout << "\n\tTetrahedron  Output:";
    cout << "\n\t\tlength of edge (a): " << setw(10) << right << tetrahedronEdge;
    cout << "\n\t\tvolume         (V): " << setw(10) << right << tetrahedronVolume;
    cout << "\n\t\tsurface area   (S): " << setw(10) << right << tetrahedronSurfaceArea;
    cout << '\n';


    //-----------------------------------------------------------------------------------------------------------------------------------------------------

 // hexahedron  manual input

    cout << "\n\t5) A regular hexahedron is a solid figure with six plane faces.\n";

    double hexahedronlength = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of a hexahedron: \n\t";

    cin >> hexahedronlength;

    if (hexahedronlength <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -27;
    }



    hexahedronVolume = pow(hexahedronlength, 3);

    hexahedronSurfaceArea = 6 * pow(hexahedronlength, 2);

    cout << "\n\tHexahedron  Output:";
    cout << "\n\t\tlength       (a): " << setw(10) << right << hexahedronlength;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << hexahedronVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << hexahedronSurfaceArea;
    cout << '\n';


    //-----------------------------------------------------------------------------------------------------------------------------------------------------

 // octahedron manual input

    cout << "\n\t6) An octahedron is a solid shape that has eight equal triangular faces.\n";

    double octahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of an octahedron: \n\t";

    cin >> octahedronEdge;

    if (octahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -28;
    }



    octahedronVolume = sqrt(2) / 3 * pow(octahedronEdge, 3);

    octahedronSurfaceArea = 2 * sqrt(3) * pow(octahedronEdge, 2);

    cout << "\n\tOctahedron Output:";
    cout << "\n\t    Length of Edge        (a): " << setw(10) << right << octahedronEdge;
    cout << "\n\t    volume                (V): " << setw(10) << right << octahedronVolume;
    cout << "\n\t    surface area          (S): " << setw(10) << right << octahedronSurfaceArea;
    cout << '\n';

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

// dodehedron manual input

    cout << "\n\t7) A dodecahedron is a solid that has twelve equal pentagonal faces.\n";

    double dodecahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge length (a) of a dodecahedron: \n\t";

    cin >> dodecahedronEdge;

    if (dodecahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -29;
    }


    dodecahedronVolume = (15 + (sqrt(5) * 7)) / 4 * pow(dodecahedronEdge, 3);

    dodecahedronSurfaceArea = sqrt((sqrt(5) * 10) + 25) * 3 * pow(dodecahedronEdge, 2);

    cout << "\n\tDodecahedron  Output:";

    cout << "\n\t   length of edge (a): " << setw(10) << right << dodecahedronEdge;
    cout << "\n\t   volume         (V): " << setw(10) << right << dodecahedronVolume;
    cout << "\n\t   surface area   (S): " << setw(10) << right << dodecahedronSurfaceArea;
    cout << '\n';

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

// icosahedron manual input

    cout << "\n\t8) An icosahedron is a solid shape that has twenty equilateral triangular faces.\n";

    double icosahedronEdge = 0.0;

    cout << "\n\tEnter a positive numeric value for the edge of an icosahedron: \n\t";

    cin >> icosahedronEdge;

    if (icosahedronEdge <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -30;
    }



    icosahedronVolume = (5 * (sqrt(5) + 3)) / 12 * pow(icosahedronEdge, 3);

    icosahedronSurfaceArea = 5 * sqrt(3) * pow(icosahedronEdge, 2);

    cout << "\n\tIcosahedron  Output:";
    cout << "\n\t    Length of the edge (a): " << setw(10) << right << icosahedronEdge;
    cout << "\n\t    volume             (V): " << setw(10) << right << icosahedronVolume;
    cout << "\n\t    surface area       (S): " << setw(10) << right << icosahedronSurfaceArea;
    cout << '\n';


    //-----------------------------------------------------------------------------------------------------------------------------------------------------

// cuboid manual input

    cout << "\n\t9) A cuboid is a solid shape that has six rectangular faces at right angles to each other.\n";

    double cuboidlength = 0.0;

    cout << "\n\tEnter a positive numeric value for the length (l) of a cuboid: \n\t";

    cin >> cuboidlength;

    if (cuboidlength <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -31;
    }

    double cuboidWidth = 0.0;

    cout << "\n\tEnter a positive numeric value for the width (w) of a cuboid \n\t";

    cin >> cuboidWidth;

    if (cuboidWidth <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -32;
    }

    double cuboidHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of a cuboid \n\t";

    cin >> cuboidHeight;

    if (cuboidHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -33;
    }

    cuboidVolume = cuboidWidth * cuboidlength * cuboidHeight;

    cuboidSurfaceArea = (2 * cuboidlength * cuboidWidth) + (2 * cuboidlength * cuboidHeight) + (2 * cuboidHeight * cuboidWidth);

    cout << "\n\tCuboid Output:";
    cout << "\n\t\theight       (h): " << setw(10) << right << cuboidHeight;
    cout << "\n\t\twidth        (w): " << setw(10) << right << cuboidWidth;
    cout << "\n\t\tlength       (l): " << setw(10) << right << cuboidlength;
    cout << "\n\t\tvolume       (V): " << setw(10) << right << cuboidVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << cuboidSurfaceArea;
    cout << '\n';

    //-----------------------------------------------------------------------------------------------------------------------------------------------------

// Triangular Prism manual prism
    cout << "\n\t10) A triangular prism is a solid shape with two identical faces in the shape of a triangle connected by three";
    cout << "\n\trectangular faces\n";


    double baseA = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (a) of a Triangular prism: ";

    cin >> baseA;

    if (baseA <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";
        return -34;
    }

    double baseB = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (b) of a Triangular prism: ";

    cin >> baseB;

    if (baseB <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -35;
    }

    double baseC = 0.0;

    cout << "\n\tEnter a positive numeric value for the base side length (c) of a Triangular prism: ";

    cin >> baseC;

    if (baseC <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -36;
    }


    double triangularPrismHeight = 0.0;

    cout << "\n\tEnter a positive numeric value for the height (h) of a Triangular prism: ";

    cin >> triangularPrismHeight;

    if (triangularPrismHeight <= 0.0)
    {
        cout << "\n\tERROR: input value cannot be zero or negative. Program terminated\n.";

        return -37;
    }
    // validating tri prism sides part 1
    if ((baseB + baseC) < baseA)

    {

        cout << "\n\t Invalid Output. Make sure (base B + base C) > base A";

        return -38;
    }
    // validating tri prism sides part 2

    if ((baseA + baseC) < baseB)

    {

        cout << "\n\t Invalid Output. Make sure (base A + base C) > base B";
        return -39;

    }
    // validating tri prism sides part 3

    if ((baseA + baseB) < baseC)

    {
        cout << "\n\t Invalid Output. Make sure (base B + base A) > base C";
        return -40;
    }




    triangularPrismVolume = (1.0 / 4) * triangularPrismHeight * sqrt((baseA + baseB + baseC) * (baseB + baseC - baseA) * (baseC + baseA - baseB) * (baseA + baseB - baseC));

    triangularPrismSurfaceArea = (baseA * triangularPrismHeight) + (baseB * triangularPrismHeight) + (baseC * triangularPrismHeight) + ((1.0 / 2) * sqrt((2 * pow((baseA * baseB), 2)) + (2 * pow((baseA * baseC), 2)) + (2 * pow((baseB * baseC), 2)) - (pow(baseA, 4)) - (pow(baseB, 4)) - (pow(baseC, 4))));

    cout << "\n\tTriangular Prism Output:";
    cout << "\n\t\tbase a       (r): " << setw(10) << right << baseA;
    cout << "\n\t\tbase b       (l): " << setw(10) << right << baseB;
    cout << "\n\t\tbase c       (V): " << setw(10) << right << baseC;
    cout << "\n\t\theight       (h)  " << setw(10) << right << triangularPrismHeight;
    cout << "\n\t\tvolume       (v): " << setw(10) << right << triangularPrismVolume;
    cout << "\n\t\tsurface area (S): " << setw(10) << right << triangularPrismSurfaceArea;
    cout << '\n';

    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //------------------------------------------------------------------------------------------------------------------------------------------------------
  
    // Sphere manual input biggest or smallest
    if ((sphereVolume > triangularPrismVolume) && (sphereVolume > cuboidVolume) && (sphereVolume > spheroCylinderVolume) && (sphereVolume > coneVolume) && (sphereVolume > tetrahedronVolume) && (sphereVolume > octahedronVolume) && (sphereVolume > dodecahedronVolume) && (sphereVolume > icosahedronVolume) && (sphereVolume > hexahedronVolume))

    {

        cout << "\n\n\t+Sphere is the biggest shape.";

    }

    else if ((sphereVolume < triangularPrismVolume) && (sphereVolume < cuboidVolume) && (sphereVolume < spheroCylinderVolume) && (sphereVolume < coneVolume) && (sphereVolume < tetrahedronVolume) && (sphereVolume < octahedronVolume) && (sphereVolume < dodecahedronVolume) && (sphereVolume < icosahedronVolume) && (sphereVolume < hexahedronVolume))

    {

        cout << "\n\n\t-Sphere is the smallest shape";
    }



    //----------------------------------------------------------------------------------------------------------------
    // Triangular prism manual input biggest or smallest
    if ((triangularPrismVolume > sphereVolume) && (triangularPrismVolume > cuboidVolume) && (triangularPrismVolume > spheroCylinderVolume) && (triangularPrismVolume > coneVolume) && (triangularPrismVolume > tetrahedronVolume) && (triangularPrismVolume > octahedronVolume) && (triangularPrismVolume > dodecahedronVolume) && (triangularPrismVolume > icosahedronVolume) && (triangularPrismVolume > hexahedronVolume))

    {


        cout << "\n\n\t+Triangular Prism is the biggest shape.";

    }

    else if ((triangularPrismVolume < sphereVolume) && (triangularPrismVolume < cuboidVolume) && (triangularPrismVolume < spheroCylinderVolume) && (triangularPrismVolume < coneVolume) && (triangularPrismVolume < tetrahedronVolume) && (triangularPrismVolume < octahedronVolume) && (triangularPrismVolume < dodecahedronVolume) && (triangularPrismVolume < icosahedronVolume) && (triangularPrismVolume < hexahedronVolume))

    {
        cout << "\n\n\t-TriangularPrismVolume is the smallest shape";

    }


    //------------------------------------------------------------------------------------------------------------------------------------
    // Cuboid manual input biggest or smallest 
    if ((cuboidVolume > sphereVolume) && (cuboidVolume > triangularPrismVolume) && (cuboidVolume > spheroCylinderVolume) && (cuboidVolume > coneVolume) && (cuboidVolume > tetrahedronVolume) && (cuboidVolume > octahedronVolume) && (cuboidVolume > dodecahedronVolume) && (cuboidVolume > icosahedronVolume) && (cuboidVolume > hexahedronVolume))

    {

        cout << "\n\n\t+Cuboid is the biggest shape";

    }

    else if ((cuboidVolume < sphereVolume) && (cuboidVolume < triangularPrismVolume) && (cuboidVolume < spheroCylinderVolume) && (cuboidVolume < coneVolume) && (cuboidVolume < tetrahedronVolume) && (cuboidVolume < octahedronVolume) && (cuboidVolume < dodecahedronVolume) && (cuboidVolume < icosahedronVolume) && (cuboidVolume < hexahedronVolume))

    {
        cout << "\n\n\t-Cuboid is the smallest shape.";

    }


    //-------------------------------------------------------------------------------------------------------------------------
 // Spherocylinder manual input biggest or smallest 
    if ((spheroCylinderVolume > sphereVolume) && (spheroCylinderVolume > triangularPrismVolume) && (spheroCylinderVolume > cuboidVolume) && (spheroCylinderVolume > coneVolume) && (spheroCylinderVolume > tetrahedronVolume) && (spheroCylinderVolume > octahedronVolume) && (spheroCylinderVolume > dodecahedronVolume) && (spheroCylinderVolume > icosahedronVolume) && (spheroCylinderVolume > hexahedronVolume))

    {
        cout << "\n\n\t+Spherocylinder is the biggest shape.";

    }

    else if ((spheroCylinderVolume < sphereVolume) && (spheroCylinderVolume < triangularPrismVolume) && (spheroCylinderVolume < cuboidVolume) && (spheroCylinderVolume < coneVolume) && (spheroCylinderVolume < tetrahedronVolume) && (spheroCylinderVolume < octahedronVolume) && (spheroCylinderVolume < dodecahedronVolume) && (spheroCylinderVolume < icosahedronVolume) && (spheroCylinderVolume < hexahedronVolume))

    {
        cout << "\n\n\t-Spherocylinder is the smallest shape";

    }
    //-----------------------------------------------------------------------------------------------
    // Cone manual input biggest or smallest
    if ((coneVolume > sphereVolume) && (coneVolume > triangularPrismVolume) && (coneVolume > cuboidVolume) && (coneVolume > spheroCylinderVolume) && (coneVolume > tetrahedronVolume) && (coneVolume > octahedronVolume) && (coneVolume > dodecahedronVolume) && (coneVolume > icosahedronVolume) && (coneVolume > hexahedronVolume))

    {

        cout << "\n\n\t+Cone is the biggest shape.";

    }

    else if ((coneVolume < sphereVolume) && (coneVolume < triangularPrismVolume) && (coneVolume < cuboidVolume) && (coneVolume < spheroCylinderVolume) && (coneVolume < tetrahedronVolume) && (coneVolume < octahedronVolume) && (coneVolume < dodecahedronVolume) && (coneVolume < icosahedronVolume) && (coneVolume < hexahedronVolume))

    {
        cout << "\n\n\t-Cone is the smallest shape.";

    }

    //------------------------------------------------------------------------

    // Tetrahedron manual input biggest or smallest

    if ((tetrahedronVolume > sphereVolume) && (tetrahedronVolume > triangularPrismVolume) && (tetrahedronVolume > cuboidVolume) && (tetrahedronVolume > spheroCylinderVolume) && (tetrahedronVolume > coneVolume) && (tetrahedronVolume > octahedronVolume) && (tetrahedronVolume > dodecahedronVolume) && (tetrahedronVolume > icosahedronVolume) && (tetrahedronVolume > hexahedronVolume))

    {

        cout << "\n\n\t+Tetrahedron is the biggest shape.";

    }

    else if ((tetrahedronVolume < sphereVolume) && (tetrahedronVolume < triangularPrismVolume) && (tetrahedronVolume < cuboidVolume) && (tetrahedronVolume < spheroCylinderVolume) && (tetrahedronVolume < coneVolume) && (tetrahedronVolume < octahedronVolume) && (tetrahedronVolume < dodecahedronVolume) && (tetrahedronVolume < icosahedronVolume) && (tetrahedronVolume < hexahedronVolume))

    {
        cout << "\n\n\t-Tetrahedron is the smallest shape.";

    }


    //------------------------------------------------------------------------------------------------------------
    // Hexahedron manual input biggest or smallest

    if ((hexahedronVolume > sphereVolume) && (hexahedronVolume > triangularPrismVolume) && (hexahedronVolume > cuboidVolume) && (hexahedronVolume > spheroCylinderVolume) && (hexahedronVolume > coneVolume) && (hexahedronVolume > octahedronVolume) && (hexahedronVolume > dodecahedronVolume) && (hexahedronVolume > icosahedronVolume) && (hexahedronVolume > tetrahedronVolume))

    {
        cout << "\n\n\t+Hexahedron is the biggest shape.";

    }

    else if ((hexahedronVolume < sphereVolume) && (hexahedronVolume < triangularPrismVolume) && (hexahedronVolume < cuboidVolume) && (hexahedronVolume < spheroCylinderVolume) && (hexahedronVolume < coneVolume) && (hexahedronVolume < octahedronVolume) && (hexahedronVolume < dodecahedronVolume) && (hexahedronVolume < icosahedronVolume) && (hexahedronVolume < tetrahedronVolume))

    {
      
        cout << "\n\n\t-Hexahedron is the smallest shape.";

    }

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Octahedron manual input biggest or smallest
    if ((octahedronVolume > sphereVolume) && (octahedronVolume > triangularPrismVolume) && (octahedronVolume > cuboidVolume) && (octahedronVolume > spheroCylinderVolume) && (octahedronVolume > coneVolume) && (octahedronVolume > hexahedronVolume) && (octahedronVolume > dodecahedronVolume) && (octahedronVolume > icosahedronVolume) && (octahedronVolume > tetrahedronVolume))

    {

        cout << "\n\n\t+Octahedron is the biggest shape.";

    }

    else   if ((octahedronVolume < sphereVolume) && (octahedronVolume < triangularPrismVolume) && (octahedronVolume < cuboidVolume) && (octahedronVolume < spheroCylinderVolume) && (octahedronVolume < coneVolume) && (octahedronVolume < hexahedronVolume) && (octahedronVolume < dodecahedronVolume) && (octahedronVolume < icosahedronVolume) && (octahedronVolume < tetrahedronVolume))

    {
      
        cout << "\n\n\t-Octahedron is the smallest shape.";

    }
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // Dodecahedron manual input biggest or smallest
    if ((dodecahedronVolume > sphereVolume) && (dodecahedronVolume > triangularPrismVolume) && (dodecahedronVolume > cuboidVolume) && (dodecahedronVolume > spheroCylinderVolume) && (dodecahedronVolume > coneVolume) && (dodecahedronVolume > hexahedronVolume) && (dodecahedronVolume > octahedronVolume) && (dodecahedronVolume > icosahedronVolume) && (dodecahedronVolume > tetrahedronVolume))

    {
    


        cout << "\n\n\t+Dodecahedron is the biggest shape.";

    }

    else if ((dodecahedronVolume < sphereVolume) && (dodecahedronVolume < triangularPrismVolume) && (dodecahedronVolume < cuboidVolume) && (dodecahedronVolume < spheroCylinderVolume) && (dodecahedronVolume < coneVolume) && (dodecahedronVolume < hexahedronVolume) && (dodecahedronVolume < octahedronVolume) && (dodecahedronVolume < icosahedronVolume) && (dodecahedronVolume < tetrahedronVolume))

    {
     
        cout << "\n\n\t-Dodecahedron is the smallest shape.";

    }

    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Icosahedron manual input biggest or smallest
    if ((icosahedronVolume > sphereVolume) && (icosahedronVolume > triangularPrismVolume) && (icosahedronVolume > cuboidVolume) && (icosahedronVolume > spheroCylinderVolume) && (icosahedronVolume > coneVolume) && (icosahedronVolume > hexahedronVolume) && (icosahedronVolume > octahedronVolume) && (icosahedronVolume > dodecahedronVolume) && (icosahedronVolume > tetrahedronVolume))

    {
     
        cout << "\n\n\t+Icosahedron is the biggest shape.";

    }

    else if ((icosahedronVolume < sphereVolume) && (icosahedronVolume < triangularPrismVolume) && (icosahedronVolume < cuboidVolume) && (icosahedronVolume < spheroCylinderVolume) && (icosahedronVolume < coneVolume) && (icosahedronVolume < hexahedronVolume) && (icosahedronVolume < octahedronVolume) && (icosahedronVolume < dodecahedronVolume) && (icosahedronVolume < tetrahedronVolume))

    {
     
        cout << "\n\n\t-Icosahedron is the smallest shape.";

    }

    }
    return 123456;

    }


  // double radius =  rand () % 1000 *.01 for getting random variable from machine







