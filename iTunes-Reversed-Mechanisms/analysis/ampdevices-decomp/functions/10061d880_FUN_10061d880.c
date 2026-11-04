// name: FUN_10061d880
// address: 10061d880

uint FUN_10061d880(long param_1,long param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
     (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(long *)(param_1 + 0x20) + 0x3a6);
    uVar4 = *(ushort *)(param_2 + 0x56) * uVar2 >> 1;
    if (*(ushort *)(param_2 + 0x56) == 0) {
      uVar4 = uVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4 & 0xffff;
}

