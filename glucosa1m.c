#include <stdio.h>

// Configuraciones iniciales
#define TARGET_GLUCOSE 100  // Objetivo en mg/dL
#define INSULIN_SENSITIVITY 50  // Sensibilidad a la insulina (mg/dL por unidad)
#define MAX_BASAL 2.0  // Máximo basal permitido (U/h)
#define MAX_BOLUS 10.0 // Máximo bolo permitido (U)

// Función para calcular insulina basal
double calculate_basal(double current_glucose) {
    if (current_glucose > TARGET_GLUCOSE) {
        double correction = (current_glucose - TARGET_GLUCOSE) / INSULIN_SENSITIVITY;
        return correction > MAX_BASAL ? MAX_BASAL : correction;
    }
    return 0.0; // Sin insulina si la glucosa está en rango
}

// Función para calcular bolo de insulina
double calculate_bolus(double carb_intake, double carb_ratio) {
    double bolus = carb_intake / carb_ratio;
    return bolus > MAX_BOLUS ? MAX_BOLUS : bolus;
}

int main() {
    double current_glucose, carb_intake, carb_ratio;

    // Entrada del usuario
    printf("Ingrese nivel de glucosa actual (mg/dL): ");
    scanf("%lf", &current_glucose);
    printf("Ingrese la cantidad de carbohidratos consumidos (g): ");
    scanf("%lf", &carb_intake);
    printf("Ingrese su relacion insulina/carbohidratos (g/U): ");
    scanf("%lf", &carb_ratio);

    // Cálculos
    double basal = calculate_basal(current_glucose);
    double bolus = calculate_bolus(carb_intake, carb_ratio);

    // Resultados
    printf("Insulina basal recomendada: %.2f U/h\n", basal);
    printf("Bolo de insulina recomendado: %.2f U\n", bolus);

    return 0;
}