// name: FUN_10057bfae
// address: 10057bfae

ulong FUN_10057bfae(long param_1,long param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulong uVar2;
  
  uVar2 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  switch(param_3) {
  case 5:
    *(undefined1 *)(param_1 + 2) = 1;
    param_1 = param_1 + 0x58;
    param_3 = 5;
    goto LAB_10057c12a;
  case 6:
    *(undefined1 *)(param_1 + 9) = 1;
    break;
  default:
    *(undefined1 *)(param_1 + 3) = 1;
    param_1 = param_1 + 0x70;
    goto LAB_10057c12a;
  case 8:
    *(undefined1 *)(param_1 + 0xb) = 1;
    break;
  case 9:
    *(undefined1 *)(param_1 + 0xc) = 1;
    break;
  case 0xc:
  case 0x1b:
    uVar2 = 0;
    break;
  case 0xe:
  case 0x32:
  case 0x38:
    if (param_2 != 0) {
      uVar2 = 0;
      cVar1 = FUN_1002b1255(param_2,0);
      if (cVar1 < '\0') break;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    FUN_10057c238(param_2,param_3,param_1 + 0x88);
    uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    break;
  case 0x12:
  case 0x13:
  case 0x35:
    *(undefined1 *)(param_1 + 5) = 1;
    param_1 = param_1 + 0xa0;
    goto LAB_10057c12a;
  case 0x16:
    *(undefined1 *)(param_1 + 0x10) = 1;
    break;
  case 0x28:
    *(undefined1 *)(param_1 + 0xd) = 1;
    break;
  case 0x29:
    *(undefined1 *)(param_1 + 0xf) = 1;
    break;
  case 0x2d:
    *(undefined1 *)(param_1 + 0x2e) = 1;
    break;
  case 0x2e:
    *(undefined1 *)(param_1 + 0x2f) = 1;
    param_1 = param_1 + 0x100;
    param_3 = 0x2e;
    goto LAB_10057c12a;
  case 0x2f:
    *(undefined1 *)(param_1 + 0x30) = 1;
    param_1 = param_1 + 0x100;
    param_3 = 0x2f;
    goto LAB_10057c12a;
  case 0x36:
    *(undefined1 *)(param_1 + 8) = 1;
    param_1 = param_1 + 0xe8;
    param_3 = 0x36;
    goto LAB_10057c12a;
  case 0x37:
    *(undefined1 *)(param_1 + 6) = 1;
    param_1 = param_1 + 0xb8;
    param_3 = 0x37;
    goto LAB_10057c12a;
  case 0x39:
    *(undefined1 *)(param_1 + 0x29) = 1;
    break;
  case 0x3a:
    *(undefined1 *)(param_1 + 0x2a) = 1;
    break;
  case 0x3b:
    *(undefined1 *)(param_1 + 0x2b) = 1;
    break;
  case 0x3c:
    *(undefined1 *)(param_1 + 0x2c) = 1;
    break;
  case 0x3d:
    *(undefined1 *)(param_1 + 0x2d) = 1;
    break;
  case 0x3e:
    break;
  case 0x42:
    *(undefined1 *)(param_1 + 7) = 1;
    param_1 = param_1 + 0xd0;
    param_3 = 0x42;
LAB_10057c12a:
    FUN_10057c238(param_2,param_3,param_1);
  }
  return uVar2 & 0xffffffff;
}

