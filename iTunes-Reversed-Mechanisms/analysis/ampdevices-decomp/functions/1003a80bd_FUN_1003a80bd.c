// name: FUN_1003a80bd
// address: 1003a80bd

bool FUN_1003a80bd(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar4 = false;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100474865(param_1);
    if ((byte)(cVar1 - 1U) < 2) {
      lVar2 = FUN_1002796f8(cVar1,0);
      if ((lVar2 != 0) && (bVar4 = true, *(char *)(lVar2 + 0xad) != '\0')) goto LAB_1003a8149;
    }
    bVar4 = *(int *)(*(long *)(param_1 + 0x10) + 0x84) == 0x64637561;
  }
LAB_1003a8149:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

