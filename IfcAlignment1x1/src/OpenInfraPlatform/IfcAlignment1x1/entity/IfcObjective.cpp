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
#include "OpenInfraPlatform/IfcAlignment1x1/model/Exception.h"
#include "OpenInfraPlatform/IfcAlignment1x1/reader/ReaderUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/writer/WriterUtil.h"
#include "OpenInfraPlatform/IfcAlignment1x1/IfcAlignment1x1EntityEnums.h"
#include "IfcObjective.h"
#include "IfcLabel.h"
#include "IfcText.h"
#include "IfcConstraintEnum.h"
#include "IfcLabel.h"
#include "IfcActorSelect.h"
#include "IfcDateTime.h"
#include "IfcLabel.h"
#include "IfcConstraint.h"
#include "IfcLogicalOperatorEnum.h"
#include "IfcObjectiveEnum.h"
#include "IfcLabel.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcObjective
			IfcObjective::IfcObjective() { m_entity_enum = IFCOBJECTIVE;}
			IfcObjective::IfcObjective( int id ) { m_id = id; m_entity_enum = IFCOBJECTIVE;}
			IfcObjective::~IfcObjective() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcObjective::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcObjective> other = std::dynamic_pointer_cast<IfcObjective>(other_entity);
				if( !other) { return; }
				m_Name = other->m_Name;
				m_Description = other->m_Description;
				m_ConstraintGrade = other->m_ConstraintGrade;
				m_ConstraintSource = other->m_ConstraintSource;
				m_CreatingActor = other->m_CreatingActor;
				m_CreationTime = other->m_CreationTime;
				m_UserDefinedGrade = other->m_UserDefinedGrade;
				m_BenchmarkValues = other->m_BenchmarkValues;
				m_LogicalAggregator = other->m_LogicalAggregator;
				m_ObjectiveQualifier = other->m_ObjectiveQualifier;
				m_UserDefinedQualifier = other->m_UserDefinedQualifier;
			}
			void IfcObjective::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCOBJECTIVE" << "(";
				if( m_Name) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_Description) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ConstraintGrade) { m_ConstraintGrade->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ConstraintSource) { m_ConstraintSource->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_CreatingActor) { m_CreatingActor->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_CreationTime) { m_CreationTime->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_UserDefinedGrade) { m_UserDefinedGrade->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				writeEntityList( stream, m_BenchmarkValues );
				stream << ",";
				if( m_LogicalAggregator) { m_LogicalAggregator->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_ObjectiveQualifier) { m_ObjectiveQualifier->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_UserDefinedQualifier) { m_UserDefinedQualifier->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcObjective::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcObjective::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<11 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcObjective, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<11 ){ std::cout << "Wrong parameter count for entity IfcObjective, expecting 11, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_Name = IfcLabel::readStepData( args[0] );
				m_Description = IfcText::readStepData( args[1] );
				m_ConstraintGrade = IfcConstraintEnum::readStepData( args[2] );
				m_ConstraintSource = IfcLabel::readStepData( args[3] );
				m_CreatingActor = IfcActorSelect::readStepData( args[4], map );
				m_CreationTime = IfcDateTime::readStepData( args[5] );
				m_UserDefinedGrade = IfcLabel::readStepData( args[6] );
				readEntityReferenceList( args[7], m_BenchmarkValues , map);
				m_LogicalAggregator = IfcLogicalOperatorEnum::readStepData( args[8] );
				m_ObjectiveQualifier = IfcObjectiveEnum::readStepData( args[9] );
				m_UserDefinedQualifier = IfcLabel::readStepData( args[10] );
			}
			void IfcObjective::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcConstraint::setInverseCounterparts(ptr_self_entity);
			}
			void IfcObjective::unlinkSelf()
			{
				IfcConstraint::unlinkSelf();
			}
	}
}
