// name: FUN_10045813a
// address: 10045813a

void FUN_10045813a(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inHandlerPtr != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
  }
  else {
    FUN_1001e9de0(param_1 + 0x20);
    plVar6 = *(long **)(param_1 + 8);
    plVar10 = *(long **)(param_1 + 0x10);
    plVar8 = plVar6;
    if (plVar6 != plVar10) {
LAB_100458188:
      if (*plVar8 != param_2) goto code_r0x00010045818e;
      plVar9 = plVar8 + 6;
      plVar7 = plVar6;
      if (plVar9 != plVar10) {
        do {
          lVar1 = plVar9[-4];
          plVar9[-6] = *plVar9;
          lVar2 = plVar9[1];
          lVar3 = plVar9[2];
          plVar9[1] = 0;
          plVar9[2] = 0;
          *(int *)(plVar9 + -5) = (int)lVar2;
          *(undefined4 *)((long)plVar9 + -0x24) = *(undefined4 *)((long)plVar9 + 0xc);
          *(int *)(plVar9 + -4) = (int)lVar3;
          *(undefined4 *)((long)plVar9 + -0x1c) = *(undefined4 *)((long)plVar9 + 0x14);
          if (lVar1 != 0) {
            std::__shared_weak_count::__release_weak();
          }
          FUN_100217418(plVar9 + -3,plVar9 + 3);
          *(char *)(plVar9 + -1) = (char)plVar9[5];
          plVar9 = plVar9 + 6;
          plVar7 = plVar7 + 6;
        } while (plVar9 != plVar10);
        plVar10 = *(long **)(param_1 + 0x10);
      }
      plVar8 = (long *)((long)plVar8 + ((long)plVar7 - (long)plVar6));
      while (plVar10 != plVar8) {
        plVar10 = plVar10 + -6;
        FUN_100458044(plVar10);
      }
      *(long **)(param_1 + 0x10) = plVar8;
    }
LAB_100458272:
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      FUN_1001e9eb9(param_1 + 0x20);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x00010045818e:
  plVar8 = plVar8 + 6;
  plVar6 = plVar6 + 6;
  if (plVar8 == plVar10) goto LAB_100458272;
  goto LAB_100458188;
}

