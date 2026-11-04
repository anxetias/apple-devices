// name: FUN_10021c9c8
// address: 10021c9c8

undefined8 FUN_10021c9c8(uint *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *param_1;
  uVar4 = (ulong)uVar1;
  if (uVar4 < 4) {
    FUN_1001dfb1f((&PTR_s_Better_10083e1d0)[uVar4],*(undefined8 *)(param_1 + 3),0xff);
    if (uVar4 == 0) {
      FUN_1001c334a(local_58,0x138b0005);
      FUN_1001b8e86(local_48,0x80,1);
      uVar3 = FUN_1001b8336(local_48);
      FUN_1001bb630(&local_38,local_58,uVar3);
      FUN_1001b7a50(local_48);
      FUN_1001b7a50(local_58);
      FUN_1001bb41a(&local_38,*(undefined8 *)(param_1 + 1));
      FUN_1001b7a50(&local_38);
    }
    else {
      FUN_1001c34b7(uVar1 + 0x138b0001,*(undefined8 *)(param_1 + 1));
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "configIndex <= kAACNumPackagedConfigs";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

