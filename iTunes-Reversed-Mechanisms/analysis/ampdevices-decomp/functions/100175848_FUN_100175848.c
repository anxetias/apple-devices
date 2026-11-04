// name: FUN_100175848
// address: 100175848

/* WARNING: Type propagation algorithm not settling */

void FUN_100175848(int *param_1)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int aiStack_5c [2];
  char *pcStack_54;
  undefined2 uStack_4c;
  char *pcStack_4a;
  long lStack_38;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0x63687064) {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        FUN_100681d0e(uVar6);
      }
      FUN_1001782e9(0,0);
      return;
    }
    piVar1 = param_1 + 1;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      lStack_38 = *(long *)PTR____stack_chk_guard_10082cb58;
      if (*param_1 == 0x63687064) {
        lVar2 = *(long *)(param_1 + 8);
        if ((lVar2 != 0) && (iVar4 = FUN_10015bb96(lVar2,0,0x63686170,1,0), iVar4 != 0)) {
          iVar7 = 2;
          do {
            puVar5 = (undefined8 *)FUN_10015c089(lVar2,iVar4,0x70746368,1,aiStack_5c);
            if (puVar5 != (undefined8 *)0x0) {
              if (aiStack_5c[0] != 8) {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  aiStack_5c[1] = 0x8220202;
                  pcStack_54 = "Assertion failure";
                  uStack_4c = 0x822;
                  pcStack_4a = "dataSize == sizeof(*cgImagePtr)";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",
                                      aiStack_5c + 1,0x16);
                }
                FUN_1001782e9(0,0);
              }
              FUN_10017060f(*puVar5);
            }
            iVar4 = FUN_10015bb96(lVar2,0,0x63686170,(int)(short)iVar7,0);
            iVar7 = (short)iVar7 + 1;
          } while (iVar4 != 0);
        }
        FUN_10015b51c(*(undefined8 *)(param_1 + 6));
        FUN_10015b51c(*(undefined8 *)(param_1 + 8));
        if (*(long *)(param_1 + 10) != 0) {
          FUN_1001c64c1();
        }
        if (*(long *)(param_1 + 0xc) != 0) {
          FUN_1001c64c1();
        }
        if (*(long *)(param_1 + 0xe) != 0) {
          FUN_1001c64c1();
        }
        FUN_10017060f(*(undefined8 *)(param_1 + 0x16));
        *param_1 = 0;
        FUN_1001c64c1(param_1);
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          FUN_100681aca(uVar6);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)PTR____stack_chk_guard_10082cb58 != lStack_38) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  }
  return;
}

