/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <fabric/events/EventQueue.h>

namespace facebook {
namespace react {

/*
 * Event Queue that dispatches events as granular as possible without waiting
 * for the next beat.
 */
class UnbatchedEventQueue final: public EventQueue {

public:
  using EventQueue::EventQueue;

  void enqueueEvent(const RawEvent &rawEvent) const override;
};


} // namespace react
} // namespace facebook
