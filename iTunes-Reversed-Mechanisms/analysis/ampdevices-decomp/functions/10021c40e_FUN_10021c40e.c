// name: FUN_10021c40e
// address: 10021c40e

undefined8 FUN_10021c40e(long param_1,long param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "configMsg != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *(long *)(param_1 + 0x4c0) = param_2;
    FUN_1002188e4(param_1 + 0x448);
    puVar1 = (undefined8 *)(param_1 + 0x458);
    FUN_10021c23e(param_1,**(undefined8 **)(param_1 + 0x4c0),puVar1);
    iVar3 = FUN_10021c178(param_1,puVar1);
    uVar5 = 0xffffffce;
    if (iVar3 != -0x80) {
      if (iVar3 == 0) {
        *(undefined8 *)(param_1 + 0x4c0) = 0;
        FUN_1002188e4(param_1 + 0x448);
        *(undefined8 *)(param_1 + 0x4a8) = 0;
        *(undefined8 *)(param_1 + 0x4b0) = 0;
        *(undefined8 *)(param_1 + 0x498) = 0;
        *(undefined8 *)(param_1 + 0x4a0) = 0;
        *(undefined8 *)(param_1 + 0x488) = 0;
        *(undefined8 *)(param_1 + 0x490) = 0;
        *(undefined8 *)(param_1 + 0x478) = 0;
        *(undefined8 *)(param_1 + 0x480) = 0;
        *(undefined8 *)(param_1 + 0x468) = 0;
        *(undefined8 *)(param_1 + 0x470) = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_1 + 0x460) = 0;
        *(undefined4 *)(param_1 + 0x4b8) = 0;
        uVar5 = 0;
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar3);
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

