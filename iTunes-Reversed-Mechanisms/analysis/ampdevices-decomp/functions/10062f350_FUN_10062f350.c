// name: FUN_10062f350
// address: 10062f350

undefined8 FUN_10062f350(ushort param_1,char param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  uVar1 = 0;
  switch(param_1) {
  case 1:
    uVar1 = 0x3ea;
    goto LAB_10062f43f;
  case 2:
    uVar1 = 1;
    break;
  case 3:
    uVar1 = 2;
    break;
  case 4:
    uVar1 = 3;
    break;
  case 5:
    uVar1 = 4;
    break;
  case 6:
    uVar1 = 5;
    break;
  case 7:
    uVar1 = 1000;
    goto LAB_10062f43f;
  case 8:
  case 9:
  case 0x15:
  case 0x18:
  case 0x20:
  case 0x44:
    break;
  case 10:
  case 0xb:
    uVar1 = 7;
    break;
  case 0x11:
    uVar1 = 0xe;
    break;
  case 0x13:
    uVar1 = 0x10;
    break;
  case 0x2f:
    uVar1 = 0x31;
    break;
  case 0x30:
    uVar1 = 0x32;
    break;
  case 0x3c:
    uVar1 = 0x3e9;
LAB_10062f43f:
    if (param_2 == '\0') {
      uVar1 = 0;
    }
    if (param_2 == '\0' && param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
      uVar1 = 0;
    }
    break;
  case 0x3d:
    uVar1 = 0x34;
    break;
  case 0x40:
    uVar1 = 0x35;
    break;
  default:
    if (7 < param_1 - 0x42f) {
      switch(param_1) {
      case 200:
        return 0x2a;
      case 0xc9:
        return 0x2b;
      case 0xca:
        return 0x2c;
      case 0xcb:
        return 0x2d;
      case 0xcc:
        return 0x2e;
      case 0xcd:
        return 0x2f;
      case 0xce:
        return 0x30;
      default:
        return 0;
      }
    }
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x47:
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
    *param_3 = 1;
    return 0;
  }
  return uVar1;
}

