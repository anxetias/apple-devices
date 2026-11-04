// name: FUN_100536061
// address: 100536061

bool FUN_100536061(int param_1)

{
  if (param_1 < 0x4d345020) {
    if (param_1 == 0x45505542) {
      return true;
    }
    if (param_1 == 0x4d344120) {
      return true;
    }
    if (param_1 == 0x4d344220) {
      return true;
    }
  }
  else if (param_1 < 0x4d345620) {
    if (param_1 == 0x4d345020) {
      return true;
    }
    if (param_1 == 0x4d345220) {
      return true;
    }
  }
  else {
    if (param_1 == 0x4d345620) {
      return true;
    }
    if (param_1 == 0x69626f6f) {
      return true;
    }
  }
  return param_1 == 0x4d4f5650;
}

