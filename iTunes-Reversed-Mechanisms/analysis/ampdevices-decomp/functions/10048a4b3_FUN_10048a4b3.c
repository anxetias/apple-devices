// name: FUN_10048a4b3
// address: 10048a4b3

long FUN_10048a4b3(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
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
      local_2a = "TrackInfoIsValid(trackInfo)";
LAB_10048a5aa:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar2 = FUN_10048604a();
    if (lVar2 != 0) {
      lVar2 = FUN_10048584d(param_1,lVar2,0);
      if (lVar2 == 0) {
        lVar2 = *(long *)(param_1 + 0x68);
      }
      goto LAB_10048a527;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "targetPlaylist != __null";
      goto LAB_10048a5aa;
    }
  }
  lVar2 = 0;
  FUN_1001782e9(0,0);
LAB_10048a527:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

