// name: FUN_1002b1d9f
// address: 1002b1d9f

long * FUN_1002b1d9f(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  void *pvVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  bool bVar17;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)plVar1;
  if (param_2 == 0) {
LAB_1002b1e84:
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 0x80) != 0x74646174) {
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_1002b1e84;
    }
    iVar8 = FUN_1002b2193(param_2);
    if (iVar8 == 0) {
      plVar2 = *(long **)(param_2 + 0x2638);
      if (plVar2 != param_1) {
        plVar14 = (long *)*plVar2;
        if (param_1[2] != 0) {
          lVar10 = *param_1;
          *param_1 = (long)plVar1;
          *(undefined8 *)(param_1[1] + 0x10) = 0;
          *plVar1 = 0;
          param_1[2] = 0;
          lVar16 = *(long *)(lVar10 + 8);
          if (lVar16 == 0) {
            lVar16 = lVar10;
          }
          if (lVar16 == 0) {
            FUN_1002a41f4(param_1,0);
          }
          else {
            lVar10 = FUN_1002b7f1c(lVar16);
            do {
              lVar6 = lVar10;
              lVar10 = lVar6;
              if (plVar14 == plVar2 + 1) break;
              uVar3 = plVar14[4];
              *(ulong *)(lVar16 + 0x20) = uVar3;
              *(long *)(lVar16 + 0x28) = plVar14[5];
              plVar12 = (long *)*plVar1;
              plVar13 = plVar1;
              while (plVar15 = plVar13, plVar12 != (long *)0x0) {
                while (plVar15 = plVar12, (ulong)plVar15[4] <= uVar3) {
                  plVar12 = (long *)plVar15[1];
                  if ((long *)plVar15[1] == (long *)0x0) {
                    plVar13 = plVar15 + 1;
                    goto LAB_1002b1f85;
                  }
                }
                plVar13 = plVar15;
                plVar12 = (long *)*plVar15;
              }
LAB_1002b1f85:
              FUN_10020e4b6(param_1,plVar15,plVar13,lVar16);
              if (lVar6 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = FUN_1002b7f1c(lVar6);
              }
              plVar13 = (long *)plVar14[1];
              plVar12 = plVar14;
              if ((long *)plVar14[1] == (long *)0x0) {
                do {
                  plVar14 = (long *)plVar12[2];
                  bVar17 = (long *)*plVar14 != plVar12;
                  plVar12 = plVar14;
                } while (bVar17);
              }
              else {
                do {
                  plVar14 = plVar13;
                  plVar13 = (long *)*plVar14;
                } while ((long *)*plVar14 != (long *)0x0);
              }
              lVar16 = lVar6;
            } while (lVar6 != 0);
            FUN_1002a41f4(param_1,lVar16);
            if (lVar10 != 0) {
              lVar16 = *(long *)(lVar10 + 0x10);
              while (lVar6 = lVar16, lVar6 != 0) {
                lVar10 = lVar6;
                lVar16 = *(long *)(lVar6 + 0x10);
              }
              FUN_1002a41f4(param_1,lVar10);
            }
          }
        }
        while (plVar14 != plVar2 + 1) {
          pvVar11 = operator_new(0x30);
          uVar4 = *(undefined4 *)((long)plVar14 + 0x24);
          lVar10 = plVar14[5];
          uVar5 = *(undefined4 *)((long)plVar14 + 0x2c);
          *(int *)((long)pvVar11 + 0x20) = (int)plVar14[4];
          *(undefined4 *)((long)pvVar11 + 0x24) = uVar4;
          *(int *)((long)pvVar11 + 0x28) = (int)lVar10;
          *(undefined4 *)((long)pvVar11 + 0x2c) = uVar5;
          plVar13 = plVar1;
          plVar12 = plVar1;
          if ((long *)*plVar1 != (long *)0x0) {
            plVar15 = (long *)*plVar1;
            do {
              while (plVar12 = plVar15, (ulong)plVar12[4] <= *(ulong *)((long)pvVar11 + 0x20)) {
                plVar15 = (long *)plVar12[1];
                if ((long *)plVar12[1] == (long *)0x0) {
                  plVar13 = plVar12 + 1;
                  goto LAB_1002b2135;
                }
              }
              plVar15 = (long *)*plVar12;
              plVar13 = plVar12;
            } while ((long *)*plVar12 != (long *)0x0);
          }
LAB_1002b2135:
          FUN_10020e4b6(param_1,plVar12,plVar13,pvVar11);
          plVar13 = (long *)plVar14[1];
          plVar12 = plVar14;
          if ((long *)plVar14[1] == (long *)0x0) {
            do {
              plVar14 = (long *)plVar12[2];
              bVar17 = (long *)*plVar14 != plVar12;
              plVar12 = plVar14;
            } while (bVar17);
          }
          else {
            do {
              plVar14 = plVar13;
              plVar13 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
          }
        }
      }
    }
    else {
      uVar9 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar9,0x10);
      if (cVar7 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

