// name: FUN_10015ab3b
// address: 10015ab3b

void FUN_10015ab3b(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  ulong uVar11;
  ulong uVar9;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x61726179)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10066b3c5(uVar5);
    }
  }
  else {
    if (*(char *)((long)param_1 + 0x29) != '\0') {
      return;
    }
    uVar8 = param_1[2];
    if (uVar8 < 2) {
      return;
    }
    if (*(long *)(param_1 + 6) == 0) {
      return;
    }
    uVar11 = 1;
    if (0x11 < (int)uVar8) {
      uVar11 = 1;
      do {
        uVar10 = (int)uVar11 * 3 + 1;
        uVar11 = (ulong)uVar10;
      } while ((int)uVar10 < (int)uVar8 / 9);
    }
    lVar4 = FUN_1001c63e1(param_1[1]);
    if (lVar4 != 0) {
      FUN_10015a4db(param_1);
      if (0 < (int)uVar11) {
        uVar8 = param_1[2];
        do {
          uVar10 = (uint)uVar11;
          uVar9 = uVar11;
          if (uVar10 < uVar8) {
            do {
              uVar7 = (int)uVar9 + 1;
              FUN_10015ad18(param_1,uVar7,lVar4);
              iVar6 = uVar7 - uVar10;
              uVar8 = uVar7;
              if (iVar6 != 0 && (int)uVar10 <= (int)uVar7) {
                do {
                  uVar8 = uVar10 + iVar6;
                  pcVar1 = *(code **)(param_1 + 6);
                  uVar5 = FUN_10015a687(param_1,iVar6);
                  iVar3 = (*pcVar1)(lVar4,uVar5,*(undefined8 *)(param_1 + 8));
                  if (-1 < iVar3) goto LAB_10015ac6a;
                  uVar5 = FUN_10015a687(param_1,iVar6);
                  FUN_10015ad9f(param_1,uVar8,uVar5);
                  iVar6 = iVar6 - uVar10;
                } while (0 < iVar6);
                uVar8 = iVar6 + uVar10;
              }
LAB_10015ac6a:
              FUN_10015ad9f(param_1,uVar8,lVar4);
              uVar8 = param_1[2];
              uVar9 = (ulong)uVar7;
            } while (uVar7 < uVar8);
          }
          uVar11 = uVar11 / 3;
        } while (2 < uVar10);
      }
      FUN_10015a525(param_1);
      FUN_1001c64c1(lVar4);
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      FUN_10066b34f(uVar5);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

