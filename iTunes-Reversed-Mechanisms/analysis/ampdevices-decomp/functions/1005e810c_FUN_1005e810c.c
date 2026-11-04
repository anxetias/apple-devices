// name: FUN_1005e810c
// address: 1005e810c

undefined8 FUN_1005e810c(long param_1,int param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "phoneCarrier != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    uVar3 = 0x4e2c;
    if (param_2 != 0) {
      for (lVar1 = *(long *)(param_1 + 0x60); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x6878)) {
        if (*(int *)(lVar1 + 0x6884) == param_2) {
          FUN_1001dfbb3(param_3,lVar1 + 0x6512,0x100);
          uVar3 = 0;
          break;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

