// name: FUN_10049052a
// address: 10049052a

undefined1 FUN_10049052a(long param_1)

{
  short *psVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100490002();
  if (cVar2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "PlaylistIsLocked(playlist)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar4 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    psVar1 = (short *)(param_1 + 0x274);
    *psVar1 = *psVar1 + -1;
    if (*psVar1 == 0) {
      FUN_1001c6987(param_1 + 200,0x63706c6b,param_1,0,0);
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

