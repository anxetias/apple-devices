// name: FUN_1002b0a4b
// address: 1002b0a4b

void FUN_1002b0a4b(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  char cVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (plVar2 = *(long **)(lVar1 + 0x10), plVar2 == (long *)0x0)) {
    uVar6 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar6,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0x3c) == 0x53485244) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0x6474726e,param_1,0,0);
      FUN_1002adba6(param_1);
      FUN_1002b077e(plVar2,param_1);
    }
    else {
      cVar5 = FUN_1002b0c30(param_1);
      (**(code **)(*plVar2 + 0x10))(plVar2,0x6474726e,param_1,0,0);
      FUN_1002adba6(param_1);
      FUN_1002b077e(plVar2,param_1);
      if (((cVar5 == '\0') && ((*(byte *)(lVar1 + 0xc3) & 2) == 0)) &&
         (*(long *)(lVar1 + 0x58) != 0)) {
        cVar5 = FUN_100474394(lVar1);
        if (cVar5 != '\0') {
          plVar4 = *(long **)(lVar1 + 0x68);
          while (plVar7 = plVar4, plVar7 != (long *)0x0) {
            lVar3 = *plVar7;
            plVar4 = (long *)plVar7[10];
            if (((*(byte *)(lVar3 + 0x240) & 4) == 0) &&
               (((*(byte *)(lVar3 + 0x298) & 1) == 0 || (*(char *)(lVar3 + 0x2a3) != '\0')))) {
              FUN_1003a6ecc(plVar7);
            }
          }
        }
      }
    }
    if ((*(long *)(lVar1 + 0x58) == 0) && ((*(byte *)(lVar1 + 0xc3) & 2) == 0)) {
      FUN_1004737f5(lVar1);
    }
    FUN_100205d70(param_1 + 0xb8);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      FUN_1001c5aec(plVar2[0x379],param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

