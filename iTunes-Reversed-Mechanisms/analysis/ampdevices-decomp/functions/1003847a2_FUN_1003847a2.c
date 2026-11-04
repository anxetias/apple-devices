// name: FUN_1003847a2
// address: 1003847a2

int FUN_1003847a2(int param_1)

{
  if (param_1 < 0x3c) {
    switch(param_1) {
    case 6:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x10:
    case 0x11:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x1a:
    case 0x1b:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2f:
      goto switchD_1003847c3_caseD_7;
    default:
      return 0;
    }
  }
  if (param_1 < 100) {
    if (param_1 < 0x41) {
      if ((param_1 != 0x3c) && (param_1 != 0x3f)) {
        return 0;
      }
    }
    else if ((param_1 != 0x41) && (param_1 != 0x46)) {
      return 0;
    }
  }
  else if (param_1 < 0x66) {
    if ((param_1 != 100) && (param_1 != 0x65)) {
      return 0;
    }
  }
  else if ((param_1 != 0x66) && (param_1 != 200)) {
    return 0;
  }
switchD_1003847c3_caseD_7:
  return param_1;
}

