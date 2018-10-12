/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#ifndef CYBERTRON_TOOLS_CYBER_RECORDER_PLAYER_TERMINAL_CONTROLLER_H_
#define CYBERTRON_TOOLS_CYBER_RECORDER_PLAYER_TERMINAL_CONTROLLER_H_

#include <sys/select.h>
#include <termios.h>
#include <unistd.h>

namespace apollo {
namespace cybertron {
namespace record {

class TerminalController {
 public:
  TerminalController();
  virtual ~TerminalController();

  void SetUp();
  void TearDown();
  char ReadChar();

 private:
  int max_fd_;
  fd_set stdin_fdset_;
  termios original_flags_;
};

}  // namespace record
}  // namespace cybertron
}  // namespace apollo

#endif  // CYBERTRON_TOOLS_CYBER_RECORDER_PLAYER_TERMINAL_CONTROLLER_H_
