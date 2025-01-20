#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
#include "angularvelocitycalculator.h"

namespace UnitTest
{
    TEST_CLASS(AngularVelocityTest)
    {
    public:
        TEST_METHOD(TestAngularVelocity) {
            point_t points[] = {
                {0, 0, 0}, {1, 1, 1}, {2, 0, 2} // Datos de prueba: coordenadas y tiempo
            };
            float result = computeMaximumAngularVelocity(points, 3);
            Assert::IsTrue(result > 0); // Validar que la velocidad angular calculada es válida
        }

        TEST_METHOD(TestAngularVelocityWithInvalidPoints) {
            float result = computeMaximumAngularVelocity(nullptr, 0);
            Assert::AreEqual(result, 0.0f); // Validar que con entrada inválida devuelve 0
        };

    };
};
