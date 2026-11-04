// name: FUN_10062b046
// address: 10062b046

int FUN_10062b046(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  bool bVar14;
  bool bVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 != (undefined8 *)0x0) {
    lVar9 = 1;
    bVar14 = false;
    do {
      plVar1 = (long *)param_1[lVar9 + 1];
      if (plVar1 != (long *)0x0) {
        if ((param_2 & 1) == 0) {
          iVar5 = FUN_1001d357f(*param_1,1);
          bVar14 = iVar5 == 0;
        }
        plVar10 = (long *)plVar1[3];
        param_2 = 1;
        if (plVar10 != plVar1 + 4) {
          lVar6 = *plVar1;
          lVar8 = plVar1[1];
          do {
            bVar15 = lVar8 != lVar6;
            lVar8 = lVar6;
            if (bVar15) {
              lVar2 = plVar10[4];
              lVar11 = 8;
              uVar12 = 0;
              do {
                iVar5 = FUN_1001d352a(*param_1,*(undefined8 *)(lVar6 + -8 + lVar11),
                                      *(undefined8 *)(lVar6 + lVar11),lVar2);
                if (iVar5 != 0) {
                  if (iVar5 != -0x80) {
                    uVar7 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar7,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = iVar5;
                      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto joined_r0x00010062b220;
                }
                uVar12 = uVar12 + 1;
                lVar6 = *plVar1;
                lVar8 = plVar1[1];
                lVar11 = lVar11 + 0x20;
              } while (uVar12 < (ulong)(lVar8 - lVar6 >> 5));
            }
            plVar3 = (long *)plVar10[1];
            plVar13 = plVar10;
            if ((long *)plVar10[1] == (long *)0x0) {
              do {
                plVar10 = (long *)plVar13[2];
                bVar15 = (long *)*plVar10 != plVar13;
                plVar13 = plVar10;
              } while (bVar15);
            }
            else {
              do {
                plVar10 = plVar3;
                plVar3 = (long *)*plVar10;
              } while ((long *)*plVar10 != (long *)0x0);
            }
          } while (plVar10 != plVar1 + 4);
          param_2 = 1;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0xfb);
    iVar5 = 0;
joined_r0x00010062b220:
    if (!bVar14) goto LAB_10062b1b8;
    if (iVar5 != 0) {
      FUN_1001d3677();
      goto LAB_10062b1b8;
    }
    FUN_1001d3605(*param_1);
  }
  iVar5 = 0;
LAB_10062b1b8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

