// name: FUN_1001d7de6
// address: 1001d7de6

int FUN_1001d7de6(long param_1,uint param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar6 = (ulong)param_2;
  iVar2 = FUN_1001d40d0();
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x968) == 0) {
      if (*(char *)(param_1 + 0x951) == '\0') {
        if (*(int *)(param_1 + 0x98) == 3) {
          return 0;
        }
        lVar4 = FUN_1001c6429();
        *(long *)(param_1 + 0x968) = lVar4;
        if (lVar4 != 0) {
          lVar8 = lVar4;
          uVar7 = uVar6;
          if (param_2 != 0) {
            do {
              *(long *)(lVar8 + 8) = param_3;
              *(long *)(lVar8 + 0x28) = param_1;
              *(long *)(lVar8 + 0x78) = lVar8;
              lVar5 = FUN_1001c64e6();
              *(long *)(lVar8 + 0x140) = lVar5;
              if (lVar5 == 0) {
                uVar3 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar3,0x10);
                if (cVar1 != '\0') {
                  FUN_1006b5dac(uVar3);
                }
                goto LAB_1001d7fc2;
              }
              uVar7 = uVar7 - 1;
              lVar8 = lVar8 + 0x148;
            } while (uVar7 != 0);
            if (param_2 != 0) {
              uVar7 = uVar6;
              do {
                FUN_1001c2470(param_1 + 0x988,lVar4);
                lVar4 = lVar4 + 0x148;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          *(undefined2 *)(param_1 + 0x951) = 0x101;
          *(uint *)(param_1 + 0x94c) = param_2;
          *(ulong *)(param_1 + 0x970) = uVar6 * param_3;
          FUN_1001d4365(param_1);
          return 0;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006b5e22(uVar3);
        }
LAB_1001d7fc2:
        FUN_1001782e9(0,0);
        lVar4 = *(long *)(param_1 + 0x968);
        if (lVar4 == 0) {
          return -0x6c;
        }
        if (param_2 != 0) {
          lVar8 = 0;
          do {
            if (*(long *)(lVar4 + 0x140 + lVar8) != 0) {
              FUN_1001c652e();
            }
            lVar8 = lVar8 + 0x148;
          } while (uVar6 * 0x148 != lVar8);
          lVar4 = *(long *)(param_1 + 0x968);
        }
        FUN_1001c64c1(lVar4);
        *(undefined8 *)(param_1 + 0x968) = 0;
        return -0x6c;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5d36(uVar3);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006b5cc0(uVar3);
      }
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b5c54(iVar2,uVar3);
    }
  }
  return iVar2;
}

