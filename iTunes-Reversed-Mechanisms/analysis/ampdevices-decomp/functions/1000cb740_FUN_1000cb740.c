// name: FUN_1000cb740
// address: 1000cb740

void FUN_1000cb740(byte *param_1,byte param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = -(int)param_1 & 7;
  uVar1 = (uint)param_3;
  if (uVar3 <= param_3) {
    uVar1 = uVar3;
  }
  switch(uVar1) {
  case 7:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 6:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 5:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 4:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 3:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 2:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 1:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  default:
    param_3 = param_3 - uVar1;
    if (7 < param_3) {
      lVar2 = (ulong)param_2 * 0x101010101010101;
      uVar4 = (param_3 >> 3) + 7 >> 3;
      switch((uint)(param_3 >> 3) & 7) {
      case 1:
        goto switchD_1000c8ebd_caseD_1;
      case 2:
        goto switchD_1000c8ebd_caseD_2;
      case 3:
        goto switchD_1000c8ebd_caseD_3;
      case 4:
        goto switchD_1000c8ebd_caseD_4;
      case 5:
        goto switchD_1000c8ebd_caseD_5;
      case 6:
        goto switchD_1000c8ebd_caseD_6;
      case 7:
        goto switchD_1000c8ebd_caseD_7;
      }
      do {
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_7:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_6:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_5:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_4:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_3:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_2:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
switchD_1000c8ebd_caseD_1:
        *(long *)param_1 = lVar2;
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  switch((uint)param_3 & 7) {
  case 0:
    return;
  case 7:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 6:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 5:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 4:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 3:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 2:
    *param_1 = param_2;
    param_1 = param_1 + 1;
  case 1:
    *param_1 = param_2;
    return;
  }
}

