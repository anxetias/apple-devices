// name: FUN_1002bc5c8
// address: 1002bc5c8

ulong FUN_1002bc5c8(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 < param_3) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inStartRevision <= inEndRevision";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar4 = 0;
    local_48 = param_3;
    do {
      lVar3 = FUN_1002b7f7c(param_2,&local_48);
      if (lVar3 != 0) {
        uVar4 = uVar4 | *(ulong *)(lVar3 + 0x18);
      }
      local_48 = local_48 + 1;
    } while (local_48 <= param_4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

