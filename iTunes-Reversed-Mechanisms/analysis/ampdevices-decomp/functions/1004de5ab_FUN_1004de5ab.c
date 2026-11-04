// name: FUN_1004de5ab
// address: 1004de5ab

long FUN_1004de5ab(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10017cbd0();
  if (cVar1 == '\0') {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "JRFileSpecIsValid(fileSpec)";
LAB_1004de745:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (DAT_1008c77c0 != 0) {
      plVar3 = (long *)(DAT_1008c77c0 + 0x10);
      do {
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
LAB_1004de6d7:
          plVar3 = (long *)0x0;
          break;
        }
        if (*(int *)(plVar3 + 1) != 0x64756c63) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure (expected to be true)";
            local_4c = 0x822;
            local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          cVar1 = FUN_1001782e9(0,1);
          if (cVar1 == '\0') goto LAB_1004de6d7;
        }
        cVar1 = FUN_10017ec13(param_1,plVar3 + 0xd68);
      } while (cVar1 == '\0');
      goto LAB_1004de6ff;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "sDulcimerPluginData != nullptr";
      goto LAB_1004de745;
    }
  }
  plVar3 = (long *)0x0;
  FUN_1001782e9(0,0);
LAB_1004de6ff:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return (long)plVar3;
}

