// name: FUN_1004ad1f3
// address: 1004ad1f3

undefined8 FUN_1004ad1f3(long param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1004aa626();
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x778) != '\0')) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "( DownloadItem_IsValid(inItem) && ((inItem)->isContainer == false) )";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = 0xffffffce;
    if (*(int *)(param_1 + 0x140) == 0x66696c65) {
      if (*(short *)(param_1 + 0xe08) == 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
          uVar2 = FUN_1004ad321(param_1,param_2,param_3);
          return uVar2;
        }
        goto LAB_1004ad31c;
      }
      FUN_1001e3c85(param_1 + 0xe08,param_3,param_2);
      uVar2 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
LAB_1004ad31c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

