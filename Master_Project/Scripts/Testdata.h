std::vector<float> g_image1 = {
		0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.519829, 0.539128, 0.581807, 0.580185, 0.567056, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.530087, 0.60417, 0.604071, 0.606768, 0.609317, 0.605816, 0.605816, 0.609083, 0.611431, 0.596919, 0.557612, 0.557612,
		0.557612, 0.557612, 0.595068, -0.2121, -0.679131, -0.210034, -0.194718, -0.161066, -0.346105, 0.0682683, 0.222329, 0.543212, 0.557612, 0.557612,
		0.557612, 0.557612, 0.465053, -0.297478, -0.111296, -0.487564, -0.614264, -0.792747, -0.685311, 0.249474, -0.484166, 0.466543, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.557139, 0.542001, 0.537775, 0.431042, 0.607061, -0.564585, -0.433321, 0.567343, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.541966, 0.566128, 0.240536, -0.882326, 0.437283, 0.562569, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.555888, 0.481171, 0.609263, -0.575384, -0.183615, 0.569151, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.557612, 0.49393, 0.583354, 0.283704, -0.868298, 0.48674, 0.560597, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.539753, 0.523453, 0.589588, -0.847519, -0.210268, 0.570676, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.513502, 0.608408, -0.347849, -0.432287, 0.573993, 0.559467, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.589561, 0.407162, -0.901922, -0.028479, 0.555822, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612,
		0.557612, 0.557612, 0.557612, 0.557612, 0.574717, -0.768255, -0.79634, 0.46988, 0.560959, 0.557612, 0.557612, 0.557612, 0.557612, 0.557612
};

std::vector<float> g_kernel1 = {
		0.0166548, 0.0585552, -0.0162799, -0.0262839, -0.062736,
		0.0368124, -0.0456487, 0.0400907, -0.0784256, -0.153796,
		0.035173, -0.0551154, -0.0248591, -0.120216, -0.0620121,
		0.0241546, -0.0355598, 0.0395773, -0.00663589, 0.00340162,
		-0.0244452, 0.00923805, -0.0490462, -0.0586812, 0.0364413
};

std::vector<float> g_image2 = {
		0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301384, 0.300445, 0.301806, 0.30187, 0.30129, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.304295, 0.310718, 0.318389, 0.316259, 0.312374, 0.309584, 0.309858, 0.308818, 0.309372, 0.303614, 0.301159, 0.301159,
		0.301159, 0.301159, 0.310662, 0.304241, 0.312461, 0.314147, 0.320466, 0.323863, 0.325275, 0.320527, 0.319593, 0.312614, 0.301159, 0.301159,
		0.301159, 0.301159, 0.298631, 0.299725, 0.300534, 0.300477, 0.300033, 0.298472, 0.303078, 0.310319, 0.314525, 0.304066, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301122, 0.300482, 0.301295, 0.302896, 0.317206, 0.304025, 0.320265, 0.30001, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301579, 0.309368, 0.307263, 0.314064, 0.305931, 0.300595, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.301219, 0.302287, 0.315548, 0.303387, 0.318713, 0.299325, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301159, 0.302386, 0.311659, 0.310882, 0.316345, 0.30461, 0.30104, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.301652, 0.306102, 0.315942, 0.307132, 0.313639, 0.299503, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.303142, 0.317359, 0.303767, 0.32364, 0.301234, 0.301087, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.310841, 0.31067, 0.314787, 0.314383, 0.301085, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159,
		0.301159, 0.301159, 0.301159, 0.301159, 0.306013, 0.295191, 0.302263, 0.301039, 0.300693, 0.301159, 0.301159, 0.301159, 0.301159, 0.301159
};

std::vector<float> g_kernel2 = {
		-0.0103379, -0.0715901, -0.0549969, 0.0216807, -0.0309845,
		-0.0739609, -0.056974, 0.00397953, -0.00881816, -0.0427712,
		0.00643346, 0.0106315, -0.0414242, 0.0364579, -0.0239374,
		-0.0461795, 0.0131168, -0.00806164, -0.0285459, -0.00560392,
		0.0286552, -0.00803359, -0.000881688, -0.0488034, 0.028645

};

std::vector<float> g_image3 = {
		0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.346865, 0.456461, 0.635477, 0.629948, 0.579131, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, -0.673964, 0.545725, 0.719952, 0.710373, 0.676093, 0.667457, 0.674383, 0.705753, 0.725479, 0.649976, 0.555017, 0.555017,
		0.555017, 0.555017, -0.716961, -0.159943, 0.0564204, 0.566858, 0.726394, 0.732758, 0.604387, 0.68742, 0.732758, 0.690358, 0.555017, 0.555017,
		0.555017, 0.555017, -0.0583026, -0.489272, -0.681858, -0.770311, -0.778226, -0.776448, -0.780981, -0.0560797, 0.730289, 0.639793, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.55102, 0.503508, 0.430309, -0.545654, -0.555394, 0.731343, 0.683613, 0.491259, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.463654, -0.763723, 0.385883, 0.719798, 0.504691, 0.536748, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.555017, 0.546069, -0.485092, -0.500052, 0.732758, 0.660012, 0.488711, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.555017, -0.0548177, -0.739944, 0.644276, 0.720139, 0.530499, 0.545012, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, 0.424259, -0.713274, 0.162315, 0.731157, 0.597598, 0.485806, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, -0.392142, -0.766791, 0.727595, 0.708001, 0.444097, 0.549126, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, -0.694609, -0.393008, 0.732758, 0.697582, 0.558177, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017,
		0.555017, 0.555017, 0.555017, 0.555017, -0.602124, -0.666877, 0.14911, 0.382135, 0.542717, 0.555017, 0.555017, 0.555017, 0.555017, 0.555017
};


std::vector<float> g_kernel3 = {
		0.204773, 0.238144, 0.0669812, 0.0689359, 0.195711,
		0.210235, 0.255737, -0.0149103, 0.00754423, 0.128364,
		0.132537, 0.119531, -0.0275511, 0.0521079, 0.0909021,
		0.0243144, 0.0628103, 0.0393702, 0.197931, 0.118564,
		0.037658, 0.0596585, 0.112821, 0.16975, 0.0441747
};

std::vector<float> g_expected = {
		0.268559, 0.313228, 0.395557, 0.43147, 0.445662,
		0.316074, -0.177726, -0.0979935, 0.096963, 0.340855,
		0.179302, 0.189394, 0.214282, 0.353469, 0.415606,
		0.519829, 0.539128, 2.01787e-43, 0, 1.35926e-43,
		7.61614e-38, 0, 7.61598e-38, 0, 9.80909e-45,
};