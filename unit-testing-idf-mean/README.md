# Unit Testing in ESP IDF "Mean"

This project is implemented by following [this example code](https://github.com/espressif/esp-idf/blob/master/examples/system/unit_test/README.md) from esp idf

This example contains two projects: application project and test project.

1. Application project calls an API defined in the component, and displays the results. It is not of much value to run. Application project is provided mainly to illustrate the layout of all the files. If you decide to run this project, the procedure is:

    * Run `idf.py -p PORT flash monitor` in the current directory (`unit_test`).
    * Observe the output: a list of random numbers and their mean value.

2. Test project is responsible for running the tests.

	* Enter `test` directory (`unit_test/test`), and run `idf.py -p PORT flash monitor`.
	* Observe the output: results of test case execution.