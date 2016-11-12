/*
 * Copyright (C) 2016 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef GAZEBO_TEST_INTEGRATION_MARKERTEST_HH_
#define GAZEBO_TEST_INTEGRATION_MARKERTEST_HH_

#include "gazebo/gui/QTestFixture.hh"

/// \brief A test class for visual markers
class Marker_TEST : public QTestFixture
{
  Q_OBJECT

  /// \brief Count all the white pixels
  /// \param[in] _threshold Minimum value for a pixel to be considered white
  private: int WhiteCount(const int _threshold = 250);

  /// \brief Count all the white pixels along the middle row
  /// \param[in] _threshold Minimum value for a pixel to be considered white
  private: int MidWhiteWidth(const int _threshold = 250);

  /// \brief Test adding and removing markers.
  private slots: void AddRemove();
};
#endif
