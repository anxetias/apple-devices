// name: FUN_1005ed8b2
// address: 1005ed8b2

undefined8 FUN_1005ed8b2(long param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined1 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "outNeedsEntitlementUpdate != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    uVar2 = 0x4e2e;
    if (param_2 != 0) {
      for (lVar3 = *(long *)(param_1 + 0x60); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x6878)) {
        if (*(int *)(lVar3 + 0x6884) == param_2) {
          *param_3 = *(undefined1 *)(lVar3 + 0x68c6);
          uVar2 = 0;
          break;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

