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
#include "IfcConnectionSurfaceGeometry.h"
#include "IfcSurfaceOrFaceSurface.h"
#include "IfcSurfaceOrFaceSurface.h"
namespace OpenInfraPlatform
{
	namespace IfcAlignment1x1
	{
			// ENTITY IfcConnectionSurfaceGeometry
			IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry() { m_entity_enum = IFCCONNECTIONSURFACEGEOMETRY;}
			IfcConnectionSurfaceGeometry::IfcConnectionSurfaceGeometry( int id ) { m_id = id; m_entity_enum = IFCCONNECTIONSURFACEGEOMETRY;}
			IfcConnectionSurfaceGeometry::~IfcConnectionSurfaceGeometry() {}

			// method setEntity takes over all attributes from another instance of the class
			void IfcConnectionSurfaceGeometry::setEntity( std::shared_ptr<IfcAlignment1x1Entity> other_entity)
			{
				std::shared_ptr<IfcConnectionSurfaceGeometry> other = std::dynamic_pointer_cast<IfcConnectionSurfaceGeometry>(other_entity);
				if( !other) { return; }
				m_SurfaceOnRelatingElement = other->m_SurfaceOnRelatingElement;
				m_SurfaceOnRelatedElement = other->m_SurfaceOnRelatedElement;
			}
			void IfcConnectionSurfaceGeometry::getStepLine( std::stringstream& stream ) const
			{
				stream << "#" << m_id << "=IFCCONNECTIONSURFACEGEOMETRY" << "(";
				if( m_SurfaceOnRelatingElement) { m_SurfaceOnRelatingElement->getStepParameter( stream ); } else { stream << "$"; }
				stream << ",";
				if( m_SurfaceOnRelatedElement) { m_SurfaceOnRelatedElement->getStepParameter( stream ); } else { stream << "$"; }
				stream << ");";
			}
			void IfcConnectionSurfaceGeometry::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
			void IfcConnectionSurfaceGeometry::readStepData( std::vector<std::string>& args, const std::map<int,shared_ptr<IfcAlignment1x1Entity> >& map )
			{
				const int num_args = (int)args.size();
				if( num_args<2 ){ std::stringstream strserr; strserr << "Wrong parameter count for entity IfcConnectionSurfaceGeometry, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; throw IfcAlignment1x1Exception( strserr.str().c_str() ); }
				#ifdef _DEBUG
				if( num_args<2 ){ std::cout << "Wrong parameter count for entity IfcConnectionSurfaceGeometry, expecting 2, having " << num_args << ". Object id: " << getId() << std::endl; }
				#endif
				m_SurfaceOnRelatingElement = IfcSurfaceOrFaceSurface::readStepData( args[0], map );
				m_SurfaceOnRelatedElement = IfcSurfaceOrFaceSurface::readStepData( args[1], map );
			}
			void IfcConnectionSurfaceGeometry::setInverseCounterparts(shared_ptr<IfcAlignment1x1Entity> ptr_self_entity)
			{
				IfcConnectionGeometry::setInverseCounterparts(ptr_self_entity);
			}
			void IfcConnectionSurfaceGeometry::unlinkSelf()
			{
				IfcConnectionGeometry::unlinkSelf();
			}
	}
}