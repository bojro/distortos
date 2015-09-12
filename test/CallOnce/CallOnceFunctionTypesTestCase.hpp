/**
 * \file
 * \brief CallOnceFunctionTypesTestCase class header
 *
 * \author Copyright (C) 2015 Kamil Szczygiel http://www.distortec.com http://www.freddiechopin.info
 *
 * \par License
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not
 * distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * \date 2015-07-15
 */

#ifndef TEST_CALLONCE_CALLONCEFUNCTIONTYPESTESTCASE_HPP_
#define TEST_CALLONCE_CALLONCEFUNCTIONTYPESTESTCASE_HPP_

#include "TestCaseCommon.hpp"

namespace distortos
{

namespace test
{

/**
 * \brief Tests various types of functions that can be used for callOnce().
 *
 * Uses callOnce() with regular function, state-less functor, member function of object with state and with capturing
 * lambda.
 *
 * \note This test case requires GCC 4.9.
 */

class CallOnceFunctionTypesTestCase : public TestCaseCommon
{
private:

	/**
	 * \brief Runs the test case.
	 *
	 * \return true if the test case succeeded, false otherwise
	 */

	virtual bool run_() const override;
};

}	// namespace test

}	// namespace distortos

#endif	// TEST_CALLONCE_CALLONCEFUNCTIONTYPESTESTCASE_HPP_