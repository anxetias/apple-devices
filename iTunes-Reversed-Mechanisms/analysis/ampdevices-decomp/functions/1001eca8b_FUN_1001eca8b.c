// name: FUN_1001eca8b
// address: 1001eca8b

int FUN_1001eca8b(int *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_1001ecbc9:
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c4859(uVar6);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1001ecbf9;
  }
  if (*param_1 != 0x776b7470) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c43d1(uVar6);
    }
    cVar4 = FUN_1001782e9(0,1);
    if (cVar4 == '\0') goto LAB_1001ecbc9;
  }
  piVar1 = param_1 + 2;
  iVar5 = FUN_1001e85e3();
  if (iVar5 == -0x80) goto LAB_1001ecbf9;
  if (iVar5 != 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      FUN_1006c47ed(iVar5,uVar6);
    }
    goto LAB_1001ecbf9;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(char *)((long)param_1 + 0x125) = param_2;
  uVar9 = (ulong)(uint)param_1[0x3a];
  FUN_1001e8671(piVar1);
  if (uVar9 == 0) {
LAB_1001ecf01:
    lVar10 = FUN_1001eaad3(param_1 + 0x28);
    if (lVar10 != 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006c4701(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    if (param_1[0x48] != 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006c4777(uVar6);
      }
      FUN_1001782e9(0,0);
    }
    FUN_1001e8470(piVar1);
    FUN_1001c64c1(param_1);
    iVar5 = 0;
  }
  else {
    pvVar7 = operator_new__(uVar9 * 0x60 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
    if (pvVar7 == (void *)0x0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        FUN_1006c468b(uVar6);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
    }
    else {
      *(ulong *)((long)pvVar7 + 8) = uVar9;
      lVar10 = (long)pvVar7 + 0x10;
      lVar8 = 0;
      do {
        *(undefined8 *)((long)pvVar7 + lVar8 + 0x40) = 0;
        *(undefined8 *)((long)pvVar7 + lVar8 + 0x10) = 0;
        puVar2 = (undefined8 *)((long)pvVar7 + lVar8 + 0x50);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)((long)pvVar7 + lVar8 + 0x60) = 0;
        lVar8 = lVar8 + 0x60;
      } while (uVar9 * 0x60 != lVar8);
      if (param_2 == '\0') {
        iVar5 = FUN_1001e8dd6(param_1 + 0x2e,0,0);
      }
      else {
        iVar5 = FUN_1001e96d3(param_1 + 0x36,0,0);
      }
      if (iVar5 != -0x80) {
        if (iVar5 == 0) {
          do {
            iVar5 = FUN_1001ebfee(param_1,lVar10);
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = 
                "JRInstallWorkThreadPoolTask(workThreadPool, &nilWorkTaskArray[index]) == noErr";
                __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            lVar10 = lVar10 + 0x60;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
          if (param_2 == '\0') {
            iVar5 = FUN_1001e944c(param_1 + 0x2e);
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                FUN_1006c4447(uVar6);
              }
              FUN_1001782e9(0,0);
            }
            iVar5 = FUN_1001e9587(param_1 + 0x2e);
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                FUN_1006c44bd(uVar6);
              }
              goto LAB_1001ecea2;
            }
          }
          else {
            iVar5 = FUN_1001e9afc(param_1 + 0x36);
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                FUN_1006c4533(uVar6);
              }
              FUN_1001782e9(0,0);
            }
            iVar5 = FUN_1001e9bb5(param_1 + 0x36);
            if (iVar5 != 0) {
              uVar6 = FUN_1001cc310();
              cVar4 = _os_log_type_enabled(uVar6,0x10);
              if (cVar4 != '\0') {
                FUN_1006c45a9(uVar6);
              }
LAB_1001ecea2:
              FUN_1001782e9(0,0);
            }
          }
          lVar10 = *(long *)((long)pvVar7 + 8);
          if (lVar10 != 0) {
            plVar11 = (long *)((long)pvVar7 + lVar10 * 0x60 + -0x40);
            lVar10 = lVar10 * -0x60;
            do {
              plVar3 = (long *)plVar11[4];
              if (plVar11 == plVar3) {
                lVar8 = 0x20;
LAB_1001ecee9:
                (**(code **)(*plVar3 + lVar8))();
              }
              else {
                lVar8 = 0x28;
                if (plVar3 != (long *)0x0) goto LAB_1001ecee9;
              }
              plVar11 = plVar11 + -0xc;
              lVar10 = lVar10 + 0x60;
            } while (lVar10 != 0);
          }
          operator_delete__(pvVar7);
          goto LAB_1001ecf01;
        }
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          FUN_1006c461f(iVar5,uVar6);
        }
      }
      lVar10 = *(long *)((long)pvVar7 + 8);
      if (lVar10 != 0) {
        plVar11 = (long *)((long)pvVar7 + lVar10 * 0x60 + -0x40);
        lVar10 = lVar10 * -0x60;
        do {
          plVar3 = (long *)plVar11[4];
          if (plVar11 == plVar3) {
            lVar8 = 0x20;
LAB_1001ecd8a:
            (**(code **)(*plVar3 + lVar8))();
          }
          else {
            lVar8 = 0x28;
            if (plVar3 != (long *)0x0) goto LAB_1001ecd8a;
          }
          plVar11 = plVar11 + -0xc;
          lVar10 = lVar10 + 0x60;
        } while (lVar10 != 0);
      }
      operator_delete__(pvVar7);
    }
    FUN_1001e85e3(piVar1);
    *(undefined2 *)(param_1 + 0x49) = 0;
    FUN_1001e8671(piVar1);
  }
LAB_1001ecbf9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

