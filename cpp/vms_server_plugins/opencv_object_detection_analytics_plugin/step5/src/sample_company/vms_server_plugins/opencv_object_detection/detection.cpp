// Copyright 2018-present Network Optix, Inc. Licensed under MPL 2.0: www.mozilla.org/MPL/2.0/

#include "detection.h"

namespace sample_company {
namespace vms_server_plugins {
namespace opencv_object_detection {

// Class labels for the MobileNet SSD model (VOC dataset).
const std::vector<std::string> kClasses{
    "background", "aeroplane", "bicycle", "bird", "boat", "bottle", "bus", "car", "cat",
    "chair", "cow", "dining table", "dog", "horse", "motorbike", "person", "potted plant",
    "sheep", "sofa", "train", "tv monitor"
};
const std::vector<std::string> kClassesToDetect{
    "bicycle", "boat", "bus", "car", "cat", "cow", "dog", "horse", "motorbike", "person"};
const std::map<std::string, std::string> kClassesToDetectPluralCapitalized{
    {"bicycle", "Bicycles"}, {"boat", "Boats"}, {"car", "Cars"}, {"cat", "Cats"}, {"cow", "Cows"}, {"dog", "Dogs"}, {"horse", "Horses"}, , {"motorbike", "Motorbikes"}, {"person", "People"}};

} // namespace opencv_object_detection
} // namespace vms_server_plugins
} // namespace sample_company
