
/**
 * Returns the maximum value among the three
 * given integer values.
 */
int max(int x, int y, int z);

/**
 * Returns the minimum value among the three
 * given integer values.
 */
int min(int x, int y, int z);

/**
 * Returns a gray-scaled RGB value of the three
 * given RGB values using the average technique.
 *
 */
int toGrayScaleAverage(int r, int g, int b);

/**
 * Returns a gray-scaled RGB value of the three
 * given RGB values using the lightness technique.
 *
 */
 int toGrayScaleLightness(int r, int g, int b);

/**
 * Returns a gray-scaled RGB value of the three
 * given RGB values using the luminosity technique.
 */
 int toGrayScaleLuminosity(int r, int g, int b);

/**
 * Returns a red value to it's sepia form.
 */
int toSepiaRed(int r, int g, int b);

/**
 * Returns a green value to it's sepia form.
 */
int toSepiaGreen(int r, int g, int b);

/**
 * Returns a blue value to it's sepia form.
 */
int toSepiaBlue(int r, int g, int b);
