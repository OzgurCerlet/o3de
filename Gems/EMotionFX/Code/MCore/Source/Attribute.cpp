/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

#include "Attribute.h"
#include "AttributeFactory.h"
#include "AttributeString.h"
#include "StringConversions.h"

namespace MCore
{
    Attribute::Attribute(uint32 typeID)
    {
        mTypeID = typeID;
    }

    Attribute::~Attribute()
    {
    }

    Attribute& Attribute::operator=(const Attribute& other)
    {
        if (&other != this)
        {
            InitFrom(&other);
        }
        return *this;
    }
} // namespace MCore
