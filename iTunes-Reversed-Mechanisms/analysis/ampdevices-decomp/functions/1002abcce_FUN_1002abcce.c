// name: FUN_1002abcce
// address: 1002abcce

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1002abcce(long param_1,long param_2,byte *param_3,uint *param_4)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  cVar2 = FUN_1002ac6f9(uVar1);
  uVar4 = 2;
  if (cVar2 != '\0') {
    if (*(char *)(param_1 + 0x14cf2) != '\0') {
      cVar2 = FUN_1004746c0(uVar1);
      uVar4 = 1;
      if (cVar2 != '\0') goto LAB_1002abdd2;
    }
    if ((*(char *)(param_2 + 0x44) == '\x01') ||
       (iVar3 = FUN_1002b0559(param_2,*(undefined4 *)param_3), iVar3 == 0)) {
      uVar4 = FUN_1004eb707(param_1,param_2,0,0,0);
      if (uVar4 < 2) {
        if (*(float *)(param_2 + 0x50) != _DAT_100740300) {
          return 1;
        }
        if (NAN(*(float *)(param_2 + 0x50)) || NAN(_DAT_100740300)) {
          return 1;
        }
        iVar3 = FUN_1004e9858(param_2,0);
        uVar4 = 2;
        if (iVar3 != 0x57415645) {
          return 1;
        }
      }
      else if ((int)uVar4 < 0x31) {
        switch(uVar4) {
        case 5:
          goto switchD_1002abd84_caseD_5;
        case 6:
        case 0x12:
        case 0x13:
          goto switchD_1002abd84_caseD_6;
        default:
          goto switchD_1002abd84_caseD_7;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
switchD_1002abd84_caseD_b:
          uVar4 = 0x10;
          break;
        case 0x1b:
          uVar4 = 0x20;
        }
      }
      else {
        if (1 < uVar4 - 0x35) {
          if ((uVar4 != 0x38) && (uVar4 != 0x31)) {
            return 0;
          }
          goto switchD_1002abd84_caseD_b;
        }
switchD_1002abd84_caseD_6:
        uVar4 = 8;
      }
    }
    else {
      *param_3 = *param_3 & 0xef;
switchD_1002abd84_caseD_5:
      uVar4 = 4;
    }
  }
LAB_1002abdd2:
  *param_4 = *param_4 | uVar4;
switchD_1002abd84_caseD_7:
  return 0;
}

