// name: FUN_100570e02
// address: 100570e02

undefined8 FUN_100570e02(long *param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = (*(long *)(param_2 + 0x18) - param_3) + *(long *)(param_2 + 0x20);
  if (0 < lVar4) {
    lVar2 = (**(code **)(*param_1 + 0x70))(param_1,param_3);
    if (lVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        uVar3 = FUN_100570eff(lVar2,param_3,lVar4,param_4);
        return uVar3;
      }
      goto LAB_100570efa;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "dataPtr != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return 0;
  }
LAB_100570efa:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

