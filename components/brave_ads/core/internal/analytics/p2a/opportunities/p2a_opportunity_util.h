/* Copyright (c) 2021 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at https://mozilla.org/MPL/2.0/. */

#ifndef BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_ANALYTICS_P2A_OPPORTUNITIES_P2A_OPPORTUNITY_UTIL_H_
#define BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_ANALYTICS_P2A_OPPORTUNITIES_P2A_OPPORTUNITY_UTIL_H_

#include <string>
#include <vector>

#include "brave/components/brave_ads/core/internal/segments/segment_alias.h"

namespace brave_ads::p2a {

std::vector<std::string> BuildAdOpportunityEvents(const SegmentList& segments);

}  // namespace brave_ads::p2a

#endif  // BRAVE_COMPONENTS_BRAVE_ADS_CORE_INTERNAL_ANALYTICS_P2A_OPPORTUNITIES_P2A_OPPORTUNITY_UTIL_H_
