// name: FUN_100399be4
// address: 100399be4

undefined8 FUN_100399be4(long param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x678) == '\x01') {
    iVar2 = FUN_1004ddbd3(0x69506f64,*(undefined8 *)(param_1 + 0x440));
    if (iVar2 != 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
        param_2 = param_2 & 0xff;
        uVar3 = FUN_1004f3881(iVar2,param_2 + 0x10cc00a6,param_2 | 0x10cc00a8,
                              param_2 * 4 + 0x10cf000d,1);
        return uVar3;
      }
      goto LAB_100399d26;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "objectID != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0x45f;
  }
  else {
    uVar3 = FUN_1005e9a2c();
    lVar4 = FUN_1005e7484(uVar3,*(undefined8 *)(param_1 + 0x458));
    uVar3 = 0;
    uVar6 = 0;
    if (lVar4 != 0) {
      uVar6 = *(undefined4 *)(lVar4 + 0x6884);
    }
    uVar5 = FUN_1005e9a2c();
    FUN_1005f24a4(uVar5,uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
LAB_100399d26:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

