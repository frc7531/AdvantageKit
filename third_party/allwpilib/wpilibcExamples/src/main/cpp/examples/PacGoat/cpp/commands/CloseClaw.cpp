// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/CloseClaw.h"

#include "Robot.h"

CloseClaw::CloseClaw() {
  Requires(&Robot::collector);
}

// Called just before this Command runs the first time
void CloseClaw::Initialize() {
  Robot::collector.Close();
}