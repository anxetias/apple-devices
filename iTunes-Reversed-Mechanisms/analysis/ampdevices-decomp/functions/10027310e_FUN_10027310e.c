// name: FUN_10027310e
// address: 10027310e

undefined8 FUN_10027310e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = FUN_1001a8626(param_3);
  uVar3 = FUN_1001a8610(param_3);
  if (uVar3 >> 0x20 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inInputSize <= std::numeric_limits<UInt32>::max()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10015a0ac(local_90,param_2[1]);
  FUN_10032f0f2(local_80);
  if (*(int *)((long)param_2 + 0x14) != 2) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "mInitState == InitState::kInitialized";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0x400,0);
    if (cVar1 == '\0') goto LAB_10027325d;
  }
  local_68 = 0;
  local_5c = 0;
  if (param_4 == 0) {
    iVar2 = FUN_1000c3e70(*param_2,local_70,uVar3 & 0xffffffff,&local_68,&local_5c);
LAB_100273228:
    if (iVar2 != 0) goto LAB_10027325d;
  }
  else if (param_4 == 1) {
    iVar2 = FUN_100073130(*param_2,100,local_70,uVar3 & 0xffffffff,&local_68,&local_5c);
    *(undefined1 *)(param_2 + 2) = 0;
    goto LAB_100273228;
  }
  FUN_1001a833e(&local_58,local_68,local_5c,0);
  FUN_1001a7b1c(local_80,&local_58);
  FUN_1001a85d4(&local_58);
  FUN_1000bfd00(local_68);
LAB_10027325d:
  FUN_1001a8908(param_1,local_80,0);
  FUN_1001a85d4(local_80);
  FUN_10015a142(local_90);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

