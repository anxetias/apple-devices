// name: FUN_1005704de
// address: 1005704de

undefined8 FUN_1005704de(long param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x70) < param_2) {
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x70) = 0;
    lVar2 = FUN_1001c63e1(param_2);
    *(long *)(param_1 + 0x68) = lVar2;
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "mBuffer != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0xffffff94;
    }
    else {
      *(uint *)(param_1 + 0x70) = param_2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

