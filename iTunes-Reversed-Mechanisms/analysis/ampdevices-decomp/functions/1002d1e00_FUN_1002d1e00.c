// name: FUN_1002d1e00
// address: 1002d1e00

undefined8 FUN_1002d1e00(int param_1,ulong param_2,undefined2 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  if ((param_2 & 2) == 0) {
    return 2;
  }
  if (param_1 < 0x47) {
    if (param_1 < 0x12) {
      switch(param_1) {
      case 2:
        goto switchD_1002d1e3e_caseD_2;
      case 3:
        goto switchD_1002d1e3e_caseD_3;
      case 4:
        goto switchD_1002d1e3e_caseD_4;
      default:
        goto LAB_1002d1efa;
      case 7:
        uVar1 = 0x23280033;
        break;
      case 8:
        uVar1 = 0x23280034;
      }
      goto LAB_1002d1ef2;
    }
    if (0x36 < param_1) {
      if (param_1 == 0x37) {
        uVar1 = 0x23280035;
      }
      else if (param_1 == 0x39) {
        uVar1 = 0x23280038;
      }
      else {
        if (param_1 != 0x3e) {
          return 0;
        }
        uVar1 = 0x23280037;
      }
      goto LAB_1002d1ef2;
    }
    if (param_1 != 0x12) {
      if (param_1 != 0x19) {
        return 0;
      }
      goto switchD_1002d1e65_caseD_5a;
    }
switchD_1002d1e65_caseD_52:
    uVar1 = 0x23280036;
  }
  else {
    if (0x74 < param_1) {
      if (param_1 == 0x75) {
        return 2;
      }
      if (param_1 != 0xf3) {
        return 0;
      }
switchD_1002d1e3e_caseD_2:
      uVar1 = 0x23280030;
      goto LAB_1002d1ef2;
    }
    switch(param_1) {
    case 0x4f:
switchD_1002d1e3e_caseD_3:
      uVar1 = 0x23280032;
      break;
    case 0x52:
      goto switchD_1002d1e65_caseD_52;
    case 0x53:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5b:
    case 0x5c:
    case 0x5d:
LAB_1002d1efa:
      return 0;
    case 0x54:
      uVar1 = 0x23280039;
      break;
    case 0x5a:
switchD_1002d1e65_caseD_5a:
      uVar1 = 0x23280011;
      break;
    case 0x5e:
      uVar1 = 0x2328003a;
      break;
    default:
      if (param_1 != 0x47) {
        return 0;
      }
    case 0x50:
    case 0x51:
switchD_1002d1e3e_caseD_4:
      if ((param_2 & 0x20) == 0) {
        uVar1 = 0x23280031;
      }
      else {
        uVar1 = 0x23280043;
      }
    }
  }
LAB_1002d1ef2:
  FUN_1001c34b7(uVar1,param_3);
  return 2;
}

