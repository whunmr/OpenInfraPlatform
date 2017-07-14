// Copied and modified code from "IfcPlusPlus" library.
// This library is available under the OpenSceneGraph Public License. Original copyright notice:

/* -*-c++-*- IfcPlusPlus - www.ifcplusplus.com - Copyright (C) 2011 Fabian Gerold
*
* This library is open source and may be redistributed and / or modified under
* the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or
* (at your option) any later version.The full license is in LICENSE file
* included with this distribution, and on the openscenegraph.org website.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the
* OpenSceneGraph Public License for more details.
*/

/* This file has been automatically generated using the TUM Open Infra Platform
Early Binding EXPRESS Generator. Any changes to this file my be lost in the future. */

#include <sstream>
#include <limits>
#include <map>
#include "reader/ReaderUtil.h"
#include "writer/WriterUtil.h"
#include "../model/shared_ptr.h"
#include "../model/IfcTunnelException.h"
#include "include/IfcMonthInYearNumber.h"

namespace OpenInfraPlatform
{
	namespace IfcTunnel
	{
		// TYPE IfcMonthInYearNumber 
		IfcMonthInYearNumber::IfcMonthInYearNumber() {}
		IfcMonthInYearNumber::IfcMonthInYearNumber( int value ) { m_value = value; }
		IfcMonthInYearNumber::~IfcMonthInYearNumber() {}
		void IfcMonthInYearNumber::getStepParameter( std::stringstream& stream, bool is_select_type ) const
		{
			if( is_select_type ) { stream << "IFCMONTHINYEARNUMBER("; }
			//supertype as attribute: int m_value
			stream << m_value;
			if( is_select_type ) { stream << ")"; }
		}
		shared_ptr<IfcMonthInYearNumber> IfcMonthInYearNumber::readStepData( std::string& arg )
		{
			// read TYPE
			if( arg.compare( "$" ) == 0 ) { return shared_ptr<IfcMonthInYearNumber>(); }
			shared_ptr<IfcMonthInYearNumber> type_object( new IfcMonthInYearNumber() );
			//supertype as attribute: int m_value
			type_object->m_value = atoi( arg.c_str() );
			return type_object;
		}
	} // end namespace IfcTunnel
} // end namespace OpenInfraPlatform
