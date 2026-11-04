// name: FUN_1002dd26a
// address: 1002dd26a

undefined8 FUN_1002dd26a(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  if (*(long *)(param_1 + 0x198) == 0) {
    lVar2 = FUN_1001c661d();
    lVar3 = 0x1000;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    *(long *)(param_1 + 0x1a0) = lVar3;
    lVar3 = FUN_1001c64e6();
    *(long *)(param_1 + 0x198) = lVar3;
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "mBufferOfZeros != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0xffffff94;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

