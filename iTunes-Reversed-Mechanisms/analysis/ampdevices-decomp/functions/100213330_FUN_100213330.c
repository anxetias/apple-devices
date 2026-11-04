// name: FUN_100213330
// address: 100213330

int FUN_100213330(undefined4 param_1,byte param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  switch(param_1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0x51:
switchD_10021334c_caseD_1:
    return (uint)(param_2 ^ 1) * 8 + 0x10cc00ba;
  case 8:
  case 9:
  case 10:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2b:
  case 0x2c:
  case 0x2e:
  case 0x31:
  case 0x32:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x3f:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x49:
  case 0x4b:
  case 0x4c:
  case 0x52:
  case 0x53:
    goto switchD_10021334c_caseD_8;
  case 0xb:
  case 0xc:
switchD_10021334c_caseD_b:
    iVar2 = 0x10cc00ba;
    iVar1 = 0x10cc00c5;
    break;
  case 0xd:
  case 0x1a:
  case 0x1b:
  case 0x3d:
  case 0x46:
  case 0x47:
  case 0x48:
    iVar2 = 0x10cc00bc;
    iVar1 = 0x10cc00c6;
    break;
  case 0xe:
  case 0x39:
  case 0x3e:
  case 0x40:
    iVar2 = 0x10cc00bd;
    iVar1 = 0x10cc00c7;
    break;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x4d:
  case 0x4e:
    iVar2 = 0x10cc00bd;
    iVar1 = 0x10cc00c8;
    break;
  case 0x12:
  case 0x13:
  case 0x2f:
  case 0x30:
  case 0x33:
  case 0x37:
  case 0x38:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x41:
  case 0x42:
  case 0x4f:
  case 0x54:
    iVar2 = 0x10cc00be;
    iVar1 = 0x10cc00cc;
    break;
  case 0x15:
  case 0x1c:
  case 0x2a:
switchD_10021334c_caseD_8:
    return 0x10cc00c4;
  case 0x2d:
  case 0x4a:
  case 0x50:
    return 0x10cc00ca - (uint)param_2;
  default:
    switch(param_1) {
    case 200:
    case 0xc9:
    case 0xca:
      goto switchD_10021334c_caseD_b;
    case 0xcb:
      goto switchD_10021334c_caseD_1;
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd5:
      goto switchD_10021334c_caseD_8;
    case 0xd3:
      iVar1 = 0x10cc00cd;
    }
    goto switchD_10021334c_caseD_8;
  }
  if (param_2 != 0) {
    iVar1 = iVar2;
  }
switchD_10021334c_caseD_8:
  return iVar1;
}

