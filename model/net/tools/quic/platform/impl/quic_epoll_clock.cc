// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "net/tools/quic/platform/impl/quic_epoll_clock.h"

#include "net/tools/epoll_server/epoll_server.h"

namespace net {

QuicEpollClock::QuicEpollClock(EpollServer* epoll_server)
    : epoll_server_(epoll_server) {assert(false);}

QuicEpollClock::~QuicEpollClock() {}

QuicTime QuicEpollClock::ApproximateNow() const {
	assert(false);
  return QuicTime::Zero() + QuicTime::Delta::FromMicroseconds(
                                epoll_server_->ApproximateNowInUsec());
}

QuicTime QuicEpollClock::Now() const {
	assert(false);
  return QuicTime::Zero() +
         QuicTime::Delta::FromMicroseconds(epoll_server_->NowInUsec());
}

QuicWallTime QuicEpollClock::WallNow() const {
	assert(false);
  return QuicWallTime::FromUNIXMicroseconds(
      epoll_server_->ApproximateNowInUsec());
}

QuicTime QuicEpollClock::ConvertWallTimeToQuicTime(
    const QuicWallTime& walltime) const {
	assert(false);
  return QuicTime::Zero() +
         QuicTime::Delta::FromMicroseconds(walltime.ToUNIXMicroseconds());
}

}  // namespace net
