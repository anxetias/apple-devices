// name: FUN_1006060f8
// address: 1006060f8

ulong FUN_1006060f8(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar6 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = FUN_1002b1255(param_1,0);
    uVar6 = CONCAT71((uint7)((ulong)param_2 >> 8) & 0xffffff,1);
    if ((((uint)param_2 >> 9 & 1) == 0) && ((uVar2 & 0x21) != 0)) {
      lVar3 = FUN_1002b5390(param_1);
      lVar4 = FUN_1002b44c2(param_1);
      uVar6 = CONCAT71((int7)((ulong)lVar3 >> 8),lVar3 != lVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

