// name: FUN_10057c396
// address: 10057c396

ulong FUN_10057c396(long param_1,int param_2,long param_3,uint param_4)

{
  char cVar1;
  uint in_EAX;
  ulong uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined8 uStack_38;
  
  uVar2 = (ulong)param_4;
  uStack_38 = (ulong)in_EAX;
  if ((((param_4 < 0x36) && ((0x200000003c0020U >> (uVar2 & 0x3f) & 1) != 0)) &&
      (param_3 != 0 && param_2 == 0x46494c45)) && (cVar1 = FUN_10017cbd0(param_3), cVar1 != '\0')) {
    FUN_100187d80(param_3,(long)&uStack_38 + 4);
  }
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  switch(param_4) {
  case 5:
    if (uStack_38._4_4_ == 0x49504720) {
      *(undefined1 *)(param_1 + 0x1d) = 1;
      FUN_10057c982(param_2,param_3,param_1 + 0x178);
      break;
    }
    if (uStack_38._4_4_ == 0x49504120) {
      *(undefined1 *)(param_1 + 0x22) = 1;
      FUN_10057c764(param_2,param_3,param_1 + 0x1d8);
      break;
    }
    *(undefined1 *)(param_1 + 2) = 1;
    param_1 = param_1 + 0x58;
    uVar2 = 5;
    goto LAB_10057c5fa;
  case 6:
    *(undefined1 *)(param_1 + 9) = 1;
    break;
  case 7:
    *(undefined1 *)(param_1 + 10) = 1;
    break;
  case 8:
    *(undefined1 *)(param_1 + 0xb) = 1;
    break;
  case 9:
    *(undefined1 *)(param_1 + 0xc) = 1;
    break;
  default:
    *(undefined1 *)(param_1 + 3) = 1;
    param_1 = param_1 + 0x70;
    goto LAB_10057c5fa;
  case 0xc:
  case 0x1b:
    uVar3 = 0;
    break;
  case 0xe:
  case 0x32:
  case 0x38:
    *(undefined1 *)(param_1 + 4) = 1;
    param_1 = param_1 + 0x88;
    goto LAB_10057c5fa;
  case 0x12:
  case 0x13:
  case 0x35:
    if (uStack_38._4_4_ == 0x49504720) {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      param_1 = param_1 + 0x160;
      goto LAB_10057c51c;
    }
    if (uStack_38._4_4_ == 0x49504120) {
      *(undefined1 *)(param_1 + 0x20) = 1;
      param_1 = param_1 + 0x1a8;
      goto LAB_10057c49a;
    }
    *(undefined1 *)(param_1 + 5) = 1;
    param_1 = param_1 + 0xa0;
    goto LAB_10057c5fa;
  case 0x14:
  case 0x15:
    if (uStack_38._4_4_ == 0x49504720) goto switchD_10057c418_caseD_17;
    if (uStack_38._4_4_ != 0x49504120) break;
  case 0x26:
  case 0x27:
  case 0x34:
  case 0x3f:
    *(undefined1 *)(param_1 + 0x1f) = 1;
    param_1 = param_1 + 400;
LAB_10057c49a:
    FUN_10057cdbe(param_2,param_3,uVar2,param_1);
    break;
  case 0x16:
    *(undefined1 *)(param_1 + 0x10) = 1;
    break;
  case 0x17:
  case 0x18:
switchD_10057c418_caseD_17:
    *(undefined1 *)(param_1 + 0x1b) = 1;
    param_1 = param_1 + 0x148;
LAB_10057c51c:
    FUN_10057cfdc(param_2,param_3,uVar2,param_1);
    break;
  case 0x22:
    *(undefined1 *)(param_1 + 0x1e) = 1;
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
    uVar2 = 0x2e;
    goto LAB_10057c5fa;
  case 0x2f:
    *(undefined1 *)(param_1 + 0x30) = 1;
    param_1 = param_1 + 0x100;
    uVar2 = 0x2f;
    goto LAB_10057c5fa;
  case 0x36:
    *(undefined1 *)(param_1 + 8) = 1;
    param_1 = param_1 + 0xe8;
    uVar2 = 0x36;
    goto LAB_10057c5fa;
  case 0x37:
    *(undefined1 *)(param_1 + 6) = 1;
    param_1 = param_1 + 0xb8;
    uVar2 = 0x37;
    goto LAB_10057c5fa;
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
  case 0x40:
  case 0x41:
    *(undefined1 *)(param_1 + 0x21) = 1;
    param_1 = param_1 + 0x1c0;
    goto LAB_10057c49a;
  case 0x42:
    *(undefined1 *)(param_1 + 7) = 1;
    param_1 = param_1 + 0xd0;
    uVar2 = 0x42;
LAB_10057c5fa:
    FUN_10057cba0(param_2,param_3,uVar2,param_1);
  }
  return uVar3 & 0xffffffff;
}

