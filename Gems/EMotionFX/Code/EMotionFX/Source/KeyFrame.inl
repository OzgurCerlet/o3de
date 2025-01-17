/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */

// default constructor
template <class ReturnType, class StorageType>
KeyFrame<ReturnType, StorageType>::KeyFrame()
    : mTime(0)
{
}


// extended constructor
template <class ReturnType, class StorageType>
KeyFrame<ReturnType, StorageType>::KeyFrame(float time, const ReturnType& value)
    : mTime(time)
{
    SetValue(value);
}


// destructor
template <class ReturnType, class StorageType>
KeyFrame<ReturnType, StorageType>::~KeyFrame()
{
}


template <class ReturnType, class StorageType>
void KeyFrame<ReturnType, StorageType>::Reflect(AZ::ReflectContext* context)
{
    AZ::SerializeContext* serializeContext = azrtti_cast<AZ::SerializeContext*>(context);
    if (!serializeContext)
    {
        return;
    }

    serializeContext->Class<KeyFrame<ReturnType, StorageType>>()
        ->Version(1)
        ->Field("time", &KeyFrame<ReturnType, StorageType>::mTime)
        ->Field("value", &KeyFrame<ReturnType, StorageType>::mValue)
        ;
}

template <class ReturnType, class StorageType>
MCORE_INLINE float KeyFrame<ReturnType, StorageType>::GetTime() const
{
    return mTime;
}


template <class ReturnType, class StorageType>
MCORE_INLINE ReturnType KeyFrame<ReturnType, StorageType>::GetValue() const
{
    return mValue;
}


template <class ReturnType, class StorageType>
MCORE_INLINE void KeyFrame<ReturnType, StorageType>::GetValue(ReturnType* outValue)
{
    *outValue = mValue;
}


template <class ReturnType, class StorageType>
MCORE_INLINE const StorageType& KeyFrame<ReturnType, StorageType>::GetStorageTypeValue() const
{
    return mValue;
}


template <class ReturnType, class StorageType>
MCORE_INLINE void KeyFrame<ReturnType, StorageType>::SetTime(float time)
{
    mTime = time;
}


template <class ReturnType, class StorageType>
MCORE_INLINE void KeyFrame<ReturnType, StorageType>::SetValue(const ReturnType& value)
{
    mValue = value;
}


template <class ReturnType, class StorageType>
MCORE_INLINE void KeyFrame<ReturnType, StorageType>::SetStorageTypeValue(const StorageType& value)
{
    mValue = value;
}
