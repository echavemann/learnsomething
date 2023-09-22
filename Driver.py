import cppimport.import_hook
import PricingUtil
import unittest

class TestGetAreaRectangle(unittest.TestCase):
    def runTest(self):
        util = PricingUtil.PricingUtil()
        self.assertAlmostEqual(util.calcVal(1, 0.1, 3), 3, 3, "doesn't match")
        self.assertAlmostEqual(util.getVal(), 3, 3, "doesn't match")
        self.assertAlmostEqual(util.calcVal(30, 0.1, 3), 90, 3, "doesn't match")
        self.assertAlmostEqual(util.getVal(), 90, 3, "doesn't match")

if __name__ == "__main__":
    print("Nice work on creating the util! Make sure to check the unit tests!")
    unittest.main()