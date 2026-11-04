// name: FUN_100447e5a
// address: 100447e5a

undefined8 FUN_100447e5a(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_2 + 2) == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inParams->asset != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0x636d7264;
    *(undefined4 *)(param_1 + 0xc) = *param_2;
    *(undefined4 *)(param_1 + 0x10) = param_2[4];
    uVar5 = FUN_1001705fc();
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    uVar1 = param_2[7];
    uVar2 = param_2[8];
    uVar3 = param_2[9];
    *(undefined4 *)(param_1 + 0x18) = param_2[6];
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

