// name: FUN_1001774a7
// address: 1001774a7

int FUN_1001774a7(int *param_1,int param_2,ulong *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x63687064)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006833d2(uVar4);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = -0x32;
    if ((*(byte *)(param_1 + 3) & 1) != 0) {
      lVar3 = *(long *)(param_1 + 10);
      if (lVar3 == 0) {
        iVar2 = FUN_100177051(*(undefined8 *)(param_1 + 6),0x6e616d65,param_1 + 10);
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 == '\0') {
            return iVar2;
          }
          FUN_100683366(iVar2,uVar4);
          return iVar2;
        }
        lVar3 = *(long *)(param_1 + 10);
      }
      uVar7 = (ulong)*(uint *)(lVar3 + 4);
      uVar6 = 0;
      if (uVar7 != 0) {
        uVar5 = 0;
        do {
          if ((int)(param_2 + (uint)(param_2 == 0)) < *(int *)(lVar3 + 0xc + uVar5 * 8)) {
            uVar6 = uVar5;
            if (uVar5 == 0) {
              return -0x32;
            }
            break;
          }
          uVar5 = uVar5 + 1;
          uVar6 = uVar7;
        } while (uVar7 != uVar5);
      }
      *param_3 = uVar6 & 0xffffffff;
      iVar2 = 0;
    }
  }
  return iVar2;
}

