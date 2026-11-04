// name: FUN_1004ddbd3
// address: 1004ddbd3

undefined4 FUN_1004ddbd3(int param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c77c0 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sDulcimerPluginData != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar3 = *(long **)(DAT_1008c77c0 + 0x10);
    if (plVar3 != (long *)0x0) {
      do {
        if ((int)plVar3[1] != 0x64756c63) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          uVar4 = 0;
          cVar1 = FUN_1001782e9(0,1);
          if (cVar1 == '\0') goto LAB_1004ddcf5;
        }
        if ((((int)plVar3[0xcd6] == param_1) && (plVar3[8] == param_2)) &&
           (*(char *)((long)plVar3 + 0x66ec) == '\0')) {
          uVar4 = (undefined4)plVar3[5];
          goto LAB_1004ddcf5;
        }
        plVar3 = (long *)*plVar3;
      } while (plVar3 != (long *)0x0);
    }
    uVar4 = 0;
  }
LAB_1004ddcf5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

