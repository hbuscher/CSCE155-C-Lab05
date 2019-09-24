#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#include "colorUtils.h"

int main(int argc, char **argv) {

  int r, g, b;
  int x = 10, y = 20, z = 30;
  int result;
  int numPassed = 0;
  int numFailed = 0;

  printf("TESTING: max(%d,%d,%d): ", x, y, z);
  result = max(x, y, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, y);
  result = max(x, z, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, x, z);
  result = max(y, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", y, z, x);
  result = max(y, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, y);
  result = max(z, x, y);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, y, x);
  result = max(z, y, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, x, z);
  result = max(x, x, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", x, z, x);
  result = max(x, z, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, x, x);
  result = max(z, x, x);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("TESTING: max(%d,%d,%d): ", z, z, z);
  result = max(z, z, z);
  if(result != 30) {
    printf("FAILED: max returned %d, expected 30\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 255, g = 0, b = 0;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): ", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  if(result != 85) {
    printf("FAILED: toGrayScaleAverage returned %d, expected 85\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 39, b = 40;
  printf("TESTING: toGrayScaleAverage(%d,%d,%d): ", r, g, b);
  result = toGrayScaleAverage(r, g, b);
  if(result != 59) {
    printf("FAILED: toGrayScaleAverage returned %d, expected 85\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  //TODO: add your test cases here

  printf("TESTING: min(%d,%d,%d): ", x, y, z);
  result = min(x, y, z);
  if(result != 10) {
    printf("FAILED: min returned %d, expected 10\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 20, g = 10, b = 100;
  printf("TESTING: toGrayScaleLightness(%d,%d,%d): ", r, g, b);
  result = toGrayScaleLightness(r, g, b);
  if(result != 55) {
    printf("FAILED: toGrayScaleLightness returned %d, expected 55\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 100, b = 100;
  printf("TESTING: toGrayScaleLuminosity(%d,%d,%d): ", r, g, b);
  result = toGrayScaleLuminosity(r, g, b);
  if(result != 100) {
    printf("FAILED: toGrayScaleLuminosity returned %d, expected 100\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 0, b = 0;
  printf("TESTING: toSepiaRed(%d,%d,%d): ", r, g, b);
  result = toSepiaRed(r, g, b);
  if(result != 39) {
    printf("FAILED: toSepiaRed returned %d, expected 39\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 0, b = 0;
  printf("TESTING: toSepiaGreen(%d,%d,%d): ", r, g, b);
  result = toSepiaGreen(r, g, b);
  if(result != 35) {
    printf("FAILED: toSepiaGreen returned %d, expected 35\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  r = 100, g = 0, b = 0;
  printf("TESTING: toSepiaBlue(%d,%d,%d): ", r, g, b);
  result = toSepiaBlue(r, g, b);
  if(result != 27) {
    printf("FAILED: toSepiaBlue returned %d, expected 27\n", result);
    numFailed++;
  } else {
    printf("PASSED\n");
    numPassed++;
  }

  printf("Number Test Cases Passed: %6d\n", numPassed);
  printf("Number Test Cases Failed: %6d\n", numFailed);
  printf("Percent Passed:           %6.2f\n", 100.0 * numPassed / (numPassed + numFailed));

  return 0;

}
