// name: FUN_10056fd9e
// address: 10056fd9e

undefined8 FUN_10056fd9e(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = 0;
  if (*(long *)(param_1 + 0x60) == 0) {
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar2 = FUN_10041545e();
      uVar4 = FUN_100170f3b(*(undefined8 *)(param_1 + 0x50));
      uVar3 = FUN_100170ef7(*(undefined8 *)(param_1 + 0x50));
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        uVar4 = FUN_100081120(uVar2,uVar4,uVar3,param_1 + 0x60);
        return uVar4;
      }
      goto LAB_10056fefc;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mDPInfo != __null || mSinf != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar4 = 0x20ba;
    }
    else {
      uVar2 = FUN_10041545e();
      uVar4 = FUN_100170f3b(*(undefined8 *)(param_1 + 0x58));
      uVar3 = FUN_100170ef7(*(undefined8 *)(param_1 + 0x58));
      uVar4 = FUN_100033270(uVar2,uVar4,uVar3,0,0,2,param_1 + 0x60);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar4;
  }
LAB_10056fefc:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

