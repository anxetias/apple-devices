// name: FUN_10058e038
// address: 10058e038

ulong FUN_10058e038(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 == '\0') {
    iVar2 = FUN_1001b9c66(param_1 + 0x80,param_2);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_1001b8172(param_1 + 0x80,param_2);
      *(undefined1 *)(param_1 + 0x9d) = 0;
      FUN_10058e136(param_1,4);
      uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inUUID.NotEmpty()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

