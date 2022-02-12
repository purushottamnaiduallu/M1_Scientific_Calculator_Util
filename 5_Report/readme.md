# M1_Scientific_Calculator_Util
This repository is used to create Scientific Calculator using C programming language

# Badges

* [![Unit Testing](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/unittestmain.yml/badge.svg)](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/unittestmain.yml)

* [![STATIC ANALYSIS](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/cppcheckmain.yml/badge.svg)](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/cppcheckmain.yml)

* [![Codacy Badge](https://app.codacy.com/project/badge/Grade/0568cc753f394717bcaa66fef29d83d1)](https://www.codacy.com/gh/purushottamnaiduallu/M1_Scientific_Calculator_Util/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=purushottamnaiduallu/M1_Scientific_Calculator_Util&amp;utm_campaign=Badge_Grade)

* [![Build](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/Build.yml/badge.svg)](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/actions/workflows/Build.yml)

* ![Codiga](https://api.codiga.io/project/31233/score/svg)

* ![Codiga](https://api.codiga.io/project/31233/status/svg)



## Folder Structure
Folder                   | Description
-------------------------| -----------------------------------------
`0_Certificates`         | Certificates earned during the course
`1_Requirements`         | Documents detailing requirements and research
`2_Architecture`         | Behavioural and Structural UML Diagrams(Both High Level and Low Level)
`3_Implemenatation `     | All code and documentation
`4_Test plan and output `| Documents with test plans and procedures and Output
`5_Report`               | Documentation of whole project
`6_ImagesAndVideos`      | Code Execution Images and Videos


# Certificates
## Github
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/6fd1a5d1b0c6d7b636dc8e653c40c58ad0d499c5/0_certificates/Github.png)

## Linux
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/6fd1a5d1b0c6d7b636dc8e653c40c58ad0d499c5/0_certificates/Linux.png)

## Sololearn
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/6fd1a5d1b0c6d7b636dc8e653c40c58ad0d499c5/0_certificates/Sololearn.png)

## Hackerearth 
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/5b57f7ebb0fba9f03c56643f84ec198bc9b65088/0_certificates/hackerearth.png)


# Description 
  This project is titled as "Scientific_Calculator" and developed by using C language . Scientific_Calculator is an utility that allows user to use Calculator, Memory conversions, Currency conversion , Unit conversion .

  # Requirements
  # High Level Requirements
  * Calculator
  * Memory conversion
  * Currency conversion
  * Unit conversion

  # Low Level Requirements 

  ## Calculator
  * Addition
  * Substraction
  * Multiplication
  * Division
  * Remainder
  * Square

  ## Memory conversion
  * Kilobytes to Megabytes
  * Megabytes to Kilobytes
  * Megabytes to Gigabytes
  * Gigabytes to Megabytes

  ## Currency conversion
  * Rupees to Dollar
  * Dollar to Rupees
  * Rupees to Euro
  * Euro to Rupees

  ## Unit conversion
  * Centimeters to Meters and Kilometers
  * Meters to Cenitimeters and Kilometers
  * Kilometers to Centimeters and Meters

  # Advantages
  * Easy and faster access
  * Can be used anywhere
  
  # Disadvantages
  * GUI is required
  * Limited functions

  # Cost and Features
  * Low Cost
  * Easier Access

  # SWOT ANALYSIS
  ## Strengths
  * It makes calculations and conversions easily.
  * We can access it from anywhere.
  * It is available for 24/7.

  ## Weaknesses
  * Poor graphical user interface.
  * Limited to some features.

  ## Opportunities
  * User friendly
  * It can be used for mutli purpose like calculations, conversions.

  ## Threats
  * Limited access

  # 4 W's and 1 H
  ## Who
  Anyone can use this.

  ## What
  It is a Scientific calculator utility to calculate and conversions.

  ## When
  It is available to user 24X7, 365 Days.
  
  ## Where
  It can be accessable from everywhere.

  ## How
  This utility was developed in C language to avoid complexity and to keep it simple


# Architecture
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/b6bcbde1ff9d22384fc8a6edd5f1bbe9cd527731/2_Architecture/Flow%20chart.png)

# High Level Design
* ![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/8c6969da330db8b48966744baae63a9411c91bee/2_Architecture/HLD.png)

# Low Level Design
* ![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/8d3ebd34ab91da5f9ad6fb9cea7baa322f42eb51/2_Architecture/LLD.png)


src/testcalc.c:118:test_div:PASS
# TestPlanAndOutput

* src/testcalc.c:119:test_sqr:PASS
* src/testcalc.c:123:test_g_m:PASS
* src/testcalc.c:120:test_k_m:PASS
* src/testcalc.c:125:test_d_r:PASS
* src/testcalc.c:121:test_m_k:PASS
* src/testcalc.c:127:test_e_r:PASS
* src/testcalc.c:122:test_m_g:PASS
* src/testcalc.c:124:test_r_d:PASS
* src/testcalc.c:130:test_m_km:PASS
* src/testcalc.c:126:test_r_e:PASS
* src/testcalc.c:128:test_cm_m:PASS
* src/testcalc.c:129:test_m_cm:PASS
* src/testcalc.c:131:test_km_m:PASS

 -----------------------
* 17 Tests 0 Failures 0 Ignored 
* OK
 -----------------------

## **********  Functions in Scientific Calculator  **********
* press
* 1 for Calculator
* 2 for Memory conversion
* 3 for Currency Conversion
* 4 for Unit Conversion

## **********  Functions in Calculator  ********** 
* press 
*  1 for Addition 
*  2 for Substraction 
*  3 for Multiplication 
*  4 for Division 
*  5 for Square 

## **********  Functions in Memory Conversion  ********** 
* Press
* 1 for Kilobytes to Megabytes
* 2 for Megabytes to Kilobytes
* 3 for Megabytes to Gigabytes
* 4 for Gigabytes to Megabytes

## **********  Functions in Currency Conversion  ********** 
* Press
* 1 for Rupees to Dollar
* 2 for Dollar to Rupees
* 3 for Rupees to Euro
* 4 for Euro to Rupees

## **********  Functions in Unit Conversion  ********** 
* Press
* 1 for Centimeters to Meters
* 2 for Meters to Cenitimeters
* 3 for Meters to Kilometers
* 4 for Kilometers to Meters

# Testcase
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/50dfeb69a40a8d15b3c6fe4aae710219d596f842/4_TestPlanAndOutput/Testcase.png)

# Sample input
![](https://github.com/purushottamnaiduallu/M1_Scientific_Calculator_Util/blob/50dfeb69a40a8d15b3c6fe4aae710219d596f842/4_TestPlanAndOutput/sample%20input.png)