// name: FUN_10044109a
// address: 10044109a

ulong FUN_10044109a(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x4a8) == 0) {
    FUN_10043f0e2(param_1);
    if (*(long *)(param_1 + 0x4a8) == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mPlayerItem != __null";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar3 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1004410de;
    }
  }
  cVar1 = _AVCFPlayerItemIsContentAuthorizedForPlayback();
  uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),cVar1 != '\0');
LAB_1004410de:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

