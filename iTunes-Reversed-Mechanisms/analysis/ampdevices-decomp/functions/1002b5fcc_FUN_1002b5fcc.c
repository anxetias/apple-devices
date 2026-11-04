// name: FUN_1002b5fcc
// address: 1002b5fcc

ulong FUN_1002b5fcc(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),*(long *)(*(long *)(param_1 + 0x10) + 0x30) != 0)
    ;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

