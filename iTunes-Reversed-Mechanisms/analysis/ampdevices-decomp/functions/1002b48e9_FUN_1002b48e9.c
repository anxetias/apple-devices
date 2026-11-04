// name: FUN_1002b48e9
// address: 1002b48e9

void FUN_1002b48e9(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (plVar7 = *(long **)(lVar1 + 0x10), plVar7 == (long *)0x0)) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "TrackInstanceIsValid(trackInstance)";
LAB_1002b4b23:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    (**(code **)(*plVar7 + 0x10))(plVar7,0x6c747269,lVar1,param_1,0);
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 != 0)) {
      if (((*(byte *)(lVar1 + 0x1bb4) & 0x80) != 0) &&
         (cVar4 = FUN_1002aca8c(param_1), cVar4 != '\0')) {
        lVar1 = *(long *)(param_1 + 8);
        if (*(long **)(lVar1 + 0x58) != (long *)0x0) {
          lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
          plVar7 = *(long **)(lVar1 + 0x58);
          do {
            plVar3 = (long *)*plVar7;
            if (*(long *)(plVar7[2] + 0xa8) != lVar2) {
              lVar6 = *(long *)(lVar1 + 0x10);
              if (lVar6 != 0) {
                if (*(int *)(lVar6 + 0x80) != 0x74646174) {
                  uVar5 = FUN_1001cc310();
                  cVar4 = _os_log_type_enabled(uVar5,0x10);
                  if (cVar4 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure (expected to be true)";
                    local_4c = 0x822;
                    local_4a = "trackData->magic == \'tdat\'";
                    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,
                                        0x16);
                  }
                  cVar4 = FUN_1001782e9(0,1);
                  if (cVar4 == '\0') goto LAB_1002b4a18;
                  lVar6 = *(long *)(lVar1 + 0x10);
                }
                if ((*(int *)(lVar6 + 0x84) == 0x2062696c) &&
                   (*(int *)((long)plVar7 + 0x3c) == 0x46494c45)) {
                  cVar4 = FUN_10031fbed(plVar7,0,0);
                  if (cVar4 == '\0') {
                    FUN_1002b0f56(plVar7);
                  }
                  else {
                    FUN_10032001c();
                  }
                }
              }
LAB_1002b4a18:
              FUN_1002b0cf4(plVar7);
            }
            plVar7 = plVar3;
          } while (plVar3 != (long *)0x0);
        }
      }
      goto LAB_1002b4a9d;
    }
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_4a = "trackData != nullptr";
      goto LAB_1002b4b23;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002b4a9d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

