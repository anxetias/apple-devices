// name: FUN_100264854
// address: 100264854

void FUN_100264854(long param_1)

{
  long *plVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2e80 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sSupportContext != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10026394e();
    if (*(char *)(param_1 + 0x3e) == '\0') {
      *(undefined1 *)(param_1 + 0x3e) = 1;
      pvVar3 = (void *)FUN_1001eab1e(param_1 + 0x6e8);
      while (pvVar3 != (void *)0x0) {
        if (*(int *)((long)pvVar3 + 8) != 0x6970736d) {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "iPodMessage == nullptr || iPodMessage->magic == \'ipsm\'";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(long **)(DAT_1008a2e80 + 0x18) != (long *)0x0) {
          plVar5 = *(long **)(DAT_1008a2e80 + 0x18);
          do {
            plVar1 = (long *)*plVar5;
            if (*(long **)((long)pvVar3 + 0x18) == (long *)0x0 ||
                *(long **)((long)pvVar3 + 0x18) == plVar5) {
              (*(code *)plVar5[2])
                        (param_1,*(undefined4 *)((long)pvVar3 + 0xc),(long)pvVar3 + 0x10,plVar5[3]);
            }
            plVar5 = plVar1;
          } while (plVar1 != (long *)0x0);
        }
        operator_delete(pvVar3);
        pvVar3 = (void *)FUN_1001eab1e(param_1 + 0x6e8);
      }
      *(undefined1 *)(param_1 + 0x3e) = 0;
    }
    FUN_100264ec8(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

