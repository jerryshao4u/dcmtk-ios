/*
 *
 *  Copyright (C) 2008-2012, OFFIS e.V. and ICSMED AG, Oldenburg, Germany
 *  Copyright (C) 2013-2014, J. Riesmeier, Oldenburg, Germany
 *  All rights reserved.  See COPYRIGHT file for details.
 *
 *  Source file for class DRTDeviceSequence
 *
 *  Generated automatically from DICOM PS 3.3-2014b
 *  File created on 2014-10-31 15:59:21
 *
 */


#include "dcmtk/config/osconfig.h"     // make sure OS specific configuration is included first

#include "dcmtk/dcmrt/seq/drtds.h"


// --- item class ---

DRTDeviceSequence::Item::Item(const OFBool emptyDefaultItem)
  : EmptyDefaultItem(emptyDefaultItem),
    CodeMeaning(DCM_CodeMeaning),
    CodeValue(DCM_CodeValue),
    CodingSchemeDesignator(DCM_CodingSchemeDesignator),
    CodingSchemeVersion(DCM_CodingSchemeVersion),
    ContextGroupExtensionCreatorUID(DCM_ContextGroupExtensionCreatorUID),
    ContextGroupExtensionFlag(DCM_ContextGroupExtensionFlag),
    ContextGroupLocalVersion(DCM_ContextGroupLocalVersion),
    ContextGroupVersion(DCM_ContextGroupVersion),
    ContextIdentifier(DCM_ContextIdentifier),
    ContextUID(DCM_ContextUID),
    DeviceDescription(DCM_DeviceDescription),
    DeviceDiameter(DCM_DeviceDiameter),
    DeviceDiameterUnits(DCM_DeviceDiameterUnits),
    DeviceID(DCM_DeviceID),
    DeviceLength(DCM_DeviceLength),
    DeviceSerialNumber(DCM_DeviceSerialNumber),
    DeviceVolume(DCM_DeviceVolume),
    InterMarkerDistance(DCM_InterMarkerDistance),
    Manufacturer(DCM_Manufacturer),
    ManufacturerModelName(DCM_ManufacturerModelName),
    MappingResource(DCM_MappingResource)
{
}


DRTDeviceSequence::Item::Item(const Item &copy)
  : EmptyDefaultItem(copy.EmptyDefaultItem),
    CodeMeaning(copy.CodeMeaning),
    CodeValue(copy.CodeValue),
    CodingSchemeDesignator(copy.CodingSchemeDesignator),
    CodingSchemeVersion(copy.CodingSchemeVersion),
    ContextGroupExtensionCreatorUID(copy.ContextGroupExtensionCreatorUID),
    ContextGroupExtensionFlag(copy.ContextGroupExtensionFlag),
    ContextGroupLocalVersion(copy.ContextGroupLocalVersion),
    ContextGroupVersion(copy.ContextGroupVersion),
    ContextIdentifier(copy.ContextIdentifier),
    ContextUID(copy.ContextUID),
    DeviceDescription(copy.DeviceDescription),
    DeviceDiameter(copy.DeviceDiameter),
    DeviceDiameterUnits(copy.DeviceDiameterUnits),
    DeviceID(copy.DeviceID),
    DeviceLength(copy.DeviceLength),
    DeviceSerialNumber(copy.DeviceSerialNumber),
    DeviceVolume(copy.DeviceVolume),
    InterMarkerDistance(copy.InterMarkerDistance),
    Manufacturer(copy.Manufacturer),
    ManufacturerModelName(copy.ManufacturerModelName),
    MappingResource(copy.MappingResource)
{
}


DRTDeviceSequence::Item::~Item()
{
}


DRTDeviceSequence::Item &DRTDeviceSequence::Item::operator=(const Item &copy)
{
    if (this != &copy)
    {
        EmptyDefaultItem = copy.EmptyDefaultItem;
        CodeMeaning = copy.CodeMeaning;
        CodeValue = copy.CodeValue;
        CodingSchemeDesignator = copy.CodingSchemeDesignator;
        CodingSchemeVersion = copy.CodingSchemeVersion;
        ContextGroupExtensionCreatorUID = copy.ContextGroupExtensionCreatorUID;
        ContextGroupExtensionFlag = copy.ContextGroupExtensionFlag;
        ContextGroupLocalVersion = copy.ContextGroupLocalVersion;
        ContextGroupVersion = copy.ContextGroupVersion;
        ContextIdentifier = copy.ContextIdentifier;
        ContextUID = copy.ContextUID;
        DeviceDescription = copy.DeviceDescription;
        DeviceDiameter = copy.DeviceDiameter;
        DeviceDiameterUnits = copy.DeviceDiameterUnits;
        DeviceID = copy.DeviceID;
        DeviceLength = copy.DeviceLength;
        DeviceSerialNumber = copy.DeviceSerialNumber;
        DeviceVolume = copy.DeviceVolume;
        InterMarkerDistance = copy.InterMarkerDistance;
        Manufacturer = copy.Manufacturer;
        ManufacturerModelName = copy.ManufacturerModelName;
        MappingResource = copy.MappingResource;
    }
    return *this;
}


void DRTDeviceSequence::Item::clear()
{
    if (!EmptyDefaultItem)
    {
        /* clear all DICOM attributes */
        CodeValue.clear();
        CodingSchemeDesignator.clear();
        CodingSchemeVersion.clear();
        CodeMeaning.clear();
        ContextIdentifier.clear();
        ContextUID.clear();
        MappingResource.clear();
        ContextGroupVersion.clear();
        ContextGroupExtensionFlag.clear();
        ContextGroupLocalVersion.clear();
        ContextGroupExtensionCreatorUID.clear();
        Manufacturer.clear();
        ManufacturerModelName.clear();
        DeviceSerialNumber.clear();
        DeviceID.clear();
        DeviceLength.clear();
        DeviceDiameter.clear();
        DeviceDiameterUnits.clear();
        DeviceVolume.clear();
        InterMarkerDistance.clear();
        DeviceDescription.clear();
    }
}


OFBool DRTDeviceSequence::Item::isEmpty()
{
    return CodeValue.isEmpty() &&
           CodingSchemeDesignator.isEmpty() &&
           CodingSchemeVersion.isEmpty() &&
           CodeMeaning.isEmpty() &&
           ContextIdentifier.isEmpty() &&
           ContextUID.isEmpty() &&
           MappingResource.isEmpty() &&
           ContextGroupVersion.isEmpty() &&
           ContextGroupExtensionFlag.isEmpty() &&
           ContextGroupLocalVersion.isEmpty() &&
           ContextGroupExtensionCreatorUID.isEmpty() &&
           Manufacturer.isEmpty() &&
           ManufacturerModelName.isEmpty() &&
           DeviceSerialNumber.isEmpty() &&
           DeviceID.isEmpty() &&
           DeviceLength.isEmpty() &&
           DeviceDiameter.isEmpty() &&
           DeviceDiameterUnits.isEmpty() &&
           DeviceVolume.isEmpty() &&
           InterMarkerDistance.isEmpty() &&
           DeviceDescription.isEmpty();
}


OFBool DRTDeviceSequence::Item::isValid() const
{
    return !EmptyDefaultItem;
}


OFCondition DRTDeviceSequence::Item::read(DcmItem &item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        /* re-initialize object */
        clear();
        getAndCheckElementFromDataset(item, CodeValue, "1", "1", "DeviceSequence");
        getAndCheckElementFromDataset(item, CodingSchemeDesignator, "1", "1", "DeviceSequence");
        getAndCheckElementFromDataset(item, CodingSchemeVersion, "1", "1C", "DeviceSequence");
        getAndCheckElementFromDataset(item, CodeMeaning, "1", "1", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextIdentifier, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextUID, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, MappingResource, "1", "1C", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextGroupVersion, "1", "1C", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextGroupExtensionFlag, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextGroupLocalVersion, "1", "1C", "DeviceSequence");
        getAndCheckElementFromDataset(item, ContextGroupExtensionCreatorUID, "1", "1C", "DeviceSequence");
        getAndCheckElementFromDataset(item, Manufacturer, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, ManufacturerModelName, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceSerialNumber, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceID, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceLength, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceDiameter, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceDiameterUnits, "1", "2C", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceVolume, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, InterMarkerDistance, "1", "3", "DeviceSequence");
        getAndCheckElementFromDataset(item, DeviceDescription, "1", "3", "DeviceSequence");
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::write(DcmItem &item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = EC_Normal;
        addElementToDataset(result, item, new DcmShortString(CodeValue), "1", "1", "DeviceSequence");
        addElementToDataset(result, item, new DcmShortString(CodingSchemeDesignator), "1", "1", "DeviceSequence");
        addElementToDataset(result, item, new DcmShortString(CodingSchemeVersion), "1", "1C", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(CodeMeaning), "1", "1", "DeviceSequence");
        addElementToDataset(result, item, new DcmCodeString(ContextIdentifier), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmUniqueIdentifier(ContextUID), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmCodeString(MappingResource), "1", "1C", "DeviceSequence");
        addElementToDataset(result, item, new DcmDateTime(ContextGroupVersion), "1", "1C", "DeviceSequence");
        addElementToDataset(result, item, new DcmCodeString(ContextGroupExtensionFlag), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmDateTime(ContextGroupLocalVersion), "1", "1C", "DeviceSequence");
        addElementToDataset(result, item, new DcmUniqueIdentifier(ContextGroupExtensionCreatorUID), "1", "1C", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(Manufacturer), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(ManufacturerModelName), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(DeviceSerialNumber), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(DeviceID), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmDecimalString(DeviceLength), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmDecimalString(DeviceDiameter), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmCodeString(DeviceDiameterUnits), "1", "2C", "DeviceSequence");
        addElementToDataset(result, item, new DcmDecimalString(DeviceVolume), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmDecimalString(InterMarkerDistance), "1", "3", "DeviceSequence");
        addElementToDataset(result, item, new DcmLongString(DeviceDescription), "1", "3", "DeviceSequence");
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::getCodeMeaning(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(CodeMeaning, value, pos);
}


OFCondition DRTDeviceSequence::Item::getCodeValue(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(CodeValue, value, pos);
}


OFCondition DRTDeviceSequence::Item::getCodingSchemeDesignator(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(CodingSchemeDesignator, value, pos);
}


OFCondition DRTDeviceSequence::Item::getCodingSchemeVersion(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(CodingSchemeVersion, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextGroupExtensionCreatorUID(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextGroupExtensionCreatorUID, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextGroupExtensionFlag(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextGroupExtensionFlag, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextGroupLocalVersion(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextGroupLocalVersion, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextGroupVersion(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextGroupVersion, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextIdentifier(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextIdentifier, value, pos);
}


OFCondition DRTDeviceSequence::Item::getContextUID(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ContextUID, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceDescription(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceDescription, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceDiameter(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceDiameter, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceDiameter(Float64 &value, const unsigned long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return OFconst_cast(DcmDecimalString &, DeviceDiameter).getFloat64(value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceDiameterUnits(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceDiameterUnits, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceID(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceID, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceLength(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceLength, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceLength(Float64 &value, const unsigned long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return OFconst_cast(DcmDecimalString &, DeviceLength).getFloat64(value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceSerialNumber(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceSerialNumber, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceVolume(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(DeviceVolume, value, pos);
}


OFCondition DRTDeviceSequence::Item::getDeviceVolume(Float64 &value, const unsigned long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return OFconst_cast(DcmDecimalString &, DeviceVolume).getFloat64(value, pos);
}


OFCondition DRTDeviceSequence::Item::getInterMarkerDistance(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(InterMarkerDistance, value, pos);
}


OFCondition DRTDeviceSequence::Item::getInterMarkerDistance(Float64 &value, const unsigned long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return OFconst_cast(DcmDecimalString &, InterMarkerDistance).getFloat64(value, pos);
}


OFCondition DRTDeviceSequence::Item::getManufacturer(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(Manufacturer, value, pos);
}


OFCondition DRTDeviceSequence::Item::getManufacturerModelName(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(ManufacturerModelName, value, pos);
}


OFCondition DRTDeviceSequence::Item::getMappingResource(OFString &value, const signed long pos) const
{
    if (EmptyDefaultItem)
        return EC_IllegalCall;
    else
        return getStringValueFromElement(MappingResource, value, pos);
}


OFCondition DRTDeviceSequence::Item::setCodeMeaning(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = CodeMeaning.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setCodeValue(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmShortString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = CodeValue.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setCodingSchemeDesignator(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmShortString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = CodingSchemeDesignator.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setCodingSchemeVersion(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmShortString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = CodingSchemeVersion.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextGroupExtensionCreatorUID(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmUniqueIdentifier::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextGroupExtensionCreatorUID.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextGroupExtensionFlag(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmCodeString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextGroupExtensionFlag.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextGroupLocalVersion(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDateTime::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextGroupLocalVersion.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextGroupVersion(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDateTime::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextGroupVersion.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextIdentifier(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmCodeString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextIdentifier.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setContextUID(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmUniqueIdentifier::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ContextUID.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceDescription(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceDescription.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceDiameter(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDecimalString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceDiameter.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceDiameterUnits(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmCodeString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceDiameterUnits.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceID(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceID.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceLength(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDecimalString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceLength.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceSerialNumber(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceSerialNumber.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setDeviceVolume(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDecimalString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = DeviceVolume.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setInterMarkerDistance(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmDecimalString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = InterMarkerDistance.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setManufacturer(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = Manufacturer.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setManufacturerModelName(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmLongString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = ManufacturerModelName.putOFStringArray(value);
    }
    return result;
}


OFCondition DRTDeviceSequence::Item::setMappingResource(const OFString &value, const OFBool check)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultItem)
    {
        result = (check) ? DcmCodeString::checkStringValue(value, "1") : EC_Normal;
        if (result.good())
            result = MappingResource.putOFStringArray(value);
    }
    return result;
}


// --- sequence class ---

DRTDeviceSequence::DRTDeviceSequence(const OFBool emptyDefaultSequence)
  : EmptyDefaultSequence(emptyDefaultSequence),
    SequenceOfItems(),
    CurrentItem(),
    EmptyItem(OFTrue /*emptyDefaultItem*/)
{
    CurrentItem = SequenceOfItems.end();
}


DRTDeviceSequence::DRTDeviceSequence(const DRTDeviceSequence &copy)
  : EmptyDefaultSequence(copy.EmptyDefaultSequence),
    SequenceOfItems(),
    CurrentItem(),
    EmptyItem(OFTrue /*emptyDefaultItem*/)
{
    /* create a copy of the internal sequence of items */
    Item *item = NULL;
    OFListConstIterator(Item *) current = copy.SequenceOfItems.begin();
    const OFListConstIterator(Item *) last = copy.SequenceOfItems.end();
    while (current != last)
    {
        item = new Item(**current);
        if (item != NULL)
        {
            SequenceOfItems.push_back(item);
        } else {
            /* memory exhausted, there is nothing we can do about it */
            break;
        }
        ++current;
    }
    CurrentItem = SequenceOfItems.begin();
}


DRTDeviceSequence &DRTDeviceSequence::operator=(const DRTDeviceSequence &copy)
{
    if (this != &copy)
    {
        clear();
        EmptyDefaultSequence = copy.EmptyDefaultSequence;
        /* create a copy of the internal sequence of items */
        Item *item = NULL;
        OFListConstIterator(Item *) current = copy.SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = copy.SequenceOfItems.end();
        while (current != last)
        {
            item = new Item(**current);
            if (item != NULL)
            {
                SequenceOfItems.push_back(item);
            } else {
                /* memory exhausted, there is nothing we can do about it */
                break;
            }
            ++current;
        }
        CurrentItem = SequenceOfItems.begin();
    }
    return *this;
}


DRTDeviceSequence::~DRTDeviceSequence()
{
    clear();
}


void DRTDeviceSequence::clear()
{
    if (!EmptyDefaultSequence)
    {
        CurrentItem = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        /* delete all items and free memory */
        while (CurrentItem != last)
        {
            delete (*CurrentItem);
            CurrentItem = SequenceOfItems.erase(CurrentItem);
        }
        /* make sure that the list is empty */
        SequenceOfItems.clear();
        CurrentItem = SequenceOfItems.end();
    }
}


OFBool DRTDeviceSequence::isEmpty()
{
    return SequenceOfItems.empty();
}


OFBool DRTDeviceSequence::isValid() const
{
    return !EmptyDefaultSequence;
}


unsigned long DRTDeviceSequence::getNumberOfItems() const
{
    return SequenceOfItems.size();
}


OFCondition DRTDeviceSequence::gotoFirstItem()
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        CurrentItem = SequenceOfItems.begin();
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTDeviceSequence::gotoNextItem()
{
    OFCondition result = EC_IllegalCall;
    if (CurrentItem != SequenceOfItems.end())
    {
        ++CurrentItem;
        result = EC_Normal;
    }
    return result;
}


OFCondition DRTDeviceSequence::gotoItem(const unsigned long num, OFListIterator(Item *) &iterator)
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        unsigned long idx = num + 1;
        iterator = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        while ((--idx > 0) && (iterator != last))
            ++iterator;
        /* specified list item found? */
        if ((idx == 0) && (iterator != last))
            result = EC_Normal;
        else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTDeviceSequence::gotoItem(const unsigned long num, OFListConstIterator(Item *) &iterator) const
{
    OFCondition result = EC_IllegalCall;
    if (!SequenceOfItems.empty())
    {
        unsigned long idx = num + 1;
        iterator = SequenceOfItems.begin();
        const OFListConstIterator(Item *) last = SequenceOfItems.end();
        while ((--idx > 0) && (iterator != last))
            ++iterator;
        /* specified list item found? */
        if ((idx == 0) && (iterator != last))
            result = EC_Normal;
        else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTDeviceSequence::gotoItem(const unsigned long num)
{
    return gotoItem(num, CurrentItem);
}


OFCondition DRTDeviceSequence::getCurrentItem(Item *&item) const
{
    OFCondition result = EC_IllegalCall;
    if (CurrentItem != SequenceOfItems.end())
    {
        item = *CurrentItem;
        result = EC_Normal;
    }
    return result;
}


DRTDeviceSequence::Item &DRTDeviceSequence::getCurrentItem()
{
    if (CurrentItem != SequenceOfItems.end())
        return **CurrentItem;
    else
        return EmptyItem;
}


const DRTDeviceSequence::Item &DRTDeviceSequence::getCurrentItem() const
{
    if (CurrentItem != SequenceOfItems.end())
        return **CurrentItem;
    else
        return EmptyItem;
}


OFCondition DRTDeviceSequence::getItem(const unsigned long num, Item *&item)
{
    OFListIterator(Item *) iterator;
    OFCondition result = gotoItem(num, iterator);
    if (result.good())
        item = *iterator;
    return result;
}


DRTDeviceSequence::Item &DRTDeviceSequence::getItem(const unsigned long num)
{
    OFListIterator(Item *) iterator;
    if (gotoItem(num, iterator).good())
        return **iterator;
    else
        return EmptyItem;
}


const DRTDeviceSequence::Item &DRTDeviceSequence::getItem(const unsigned long num) const
{
    OFListConstIterator(Item *) iterator;
    if (gotoItem(num, iterator).good())
        return **iterator;
    else
        return EmptyItem;
}


DRTDeviceSequence::Item &DRTDeviceSequence::operator[](const unsigned long num)
{
    return getItem(num);
}


const DRTDeviceSequence::Item &DRTDeviceSequence::operator[](const unsigned long num) const
{
    return getItem(num);
}


OFCondition DRTDeviceSequence::addItem(Item *&item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        item = new Item();
        if (item != NULL)
        {
            SequenceOfItems.push_back(item);
            result = EC_Normal;
        } else
            result = EC_MemoryExhausted;
    }
    return result;
}


OFCondition DRTDeviceSequence::insertItem(const unsigned long pos, Item *&item)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        OFListIterator(Item *) iterator;
        result = gotoItem(pos, iterator);
        if (result.good())
        {
            item = new Item();
            if (item != NULL)
            {
                SequenceOfItems.insert(iterator, 1, item);
                result = EC_Normal;
            } else
                result = EC_MemoryExhausted;
        } else
            result = addItem(item);
    }
    return result;
}


OFCondition DRTDeviceSequence::removeItem(const unsigned long pos)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        OFListIterator(Item *) iterator;
        if (gotoItem(pos, iterator).good())
        {
            delete *iterator;
            iterator = SequenceOfItems.erase(iterator);
            result = EC_Normal;
        } else
            result = EC_IllegalParameter;
    }
    return result;
}


OFCondition DRTDeviceSequence::read(DcmItem &dataset,
                                    const OFString &card,
                                    const OFString &type,
                                    const char *moduleName)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        /* re-initialize object */
        clear();
        /* retrieve sequence element from dataset */
        DcmSequenceOfItems *sequence;
        result = dataset.findAndGetSequence(DCM_DeviceSequence, sequence);
        if (sequence != NULL)
        {
            if (checkElementValue(*sequence, card, type, result, moduleName))
            {
                DcmStack stack;
                OFBool first = OFTrue;
                /* iterate over all sequence items */
                while (result.good() && sequence->nextObject(stack, first /*intoSub*/).good())
                {
                    DcmItem *ditem = OFstatic_cast(DcmItem *, stack.top());
                    if (ditem != NULL)
                    {
                        Item *item = new Item();
                        if (item != NULL)
                        {
                            result = item->read(*ditem);
                            if (result.good())
                            {
                                /* append new item to the end of the list */
                                SequenceOfItems.push_back(item);
                                first = OFFalse;
                            }
                        } else
                            result = EC_MemoryExhausted;
                    } else
                        result = EC_CorruptedData;
                }
            }
        } else {
            DcmSequenceOfItems element(DCM_DeviceSequence);
            checkElementValue(element, card, type, result, moduleName);
        }
    }
    return result;
}


OFCondition DRTDeviceSequence::write(DcmItem &dataset,
                                     const OFString &card,
                                     const OFString &type,
                                     const char *moduleName)
{
    OFCondition result = EC_IllegalCall;
    if (!EmptyDefaultSequence)
    {
        result = EC_MemoryExhausted;
        DcmSequenceOfItems *sequence = new DcmSequenceOfItems(DCM_DeviceSequence);
        if (sequence != NULL)
        {
            result = EC_Normal;
            /* an empty optional sequence is not written */
            if ((type == "2") || !SequenceOfItems.empty())
            {
                OFListIterator(Item *) iterator = SequenceOfItems.begin();
                const OFListConstIterator(Item *) last = SequenceOfItems.end();
                /* iterate over all sequence items */
                while (result.good() && (iterator != last))
                {
                    DcmItem *item = new DcmItem();
                    if (item != NULL)
                    {
                        /* append new item to the end of the sequence */
                        result = sequence->append(item);
                        if (result.good())
                        {
                            result = (*iterator)->write(*item);
                            ++iterator;
                        } else
                            delete item;
                    } else
                        result = EC_MemoryExhausted;
                }
                if (result.good())
                {
                    /* insert sequence element into the dataset */
                    result = dataset.insert(sequence, OFTrue /*replaceOld*/);
                }
                if (DCM_dcmrtLogger.isEnabledFor(OFLogger::WARN_LOG_LEVEL))
                    checkElementValue(*sequence, card, type, result, moduleName);
                if (result.good())
                {
                    /* forget reference to sequence object (avoid deletion below) */
                    sequence = NULL;
                }
            }
            else if (type == "1")
            {
                /* empty type 1 sequence not allowed */
                result = RT_EC_InvalidValue;
                if (DCM_dcmrtLogger.isEnabledFor(OFLogger::WARN_LOG_LEVEL))
                    checkElementValue(*sequence, card, type, result, moduleName);
            }
            /* delete sequence (if not inserted into the dataset) */
            delete sequence;
        }
    }
    return result;
}


// end of source file