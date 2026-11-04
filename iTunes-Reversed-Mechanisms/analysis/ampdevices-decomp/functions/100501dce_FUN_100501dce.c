// name: FUN_100501dce
// address: 100501dce

int FUN_100501dce(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
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
    iVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar4 = *(long **)(DAT_1008c77c0 + 0x10);
    if (plVar4 == (long *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        if ((int)plVar4[1] != 0x64756c63) {
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
          if (cVar1 == '\0') break;
        }
        if ((*(char *)((long)plVar4 + 0x6abc) != '\0') && (*(char *)((long)plVar4 + 0x6abd) != '\0')
           ) {
          iVar3 = iVar3 + (uint)((int)plVar4[0xcd6] == param_1 || param_1 == 1);
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != (long *)0x0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

