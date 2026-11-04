// name: FUN_1002733d2
// address: 1002733d2

ulong FUN_1002733d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   int param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_70 = param_3;
  if (param_4 >> 0x20 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inDataSize <= std::numeric_limits<UInt32>::max()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_10015a0ac(local_80,param_1[1]);
  if (*(int *)((long)param_1 + 0x14) != 2) {
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
    if (cVar1 == '\0') {
      uVar5 = 0;
      goto LAB_100273504;
    }
  }
  FUN_1001a85ae(local_68,param_2);
  uVar5 = FUN_1001a8610(local_68);
  if (uVar5 >> 0x20 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "signatureData.GetLength() <= std::numeric_limits<UInt32>::max()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar4 = *param_1;
  uVar6 = FUN_1001a8626(local_68);
  uVar2 = FUN_1001a8610(local_68);
  iVar3 = FUN_1000d9370(uVar4,uVar6,uVar2,local_70,param_4 & 0xffffffff);
  uVar5 = CONCAT71((int7)(param_4 >> 8),iVar3 == 0);
  if (param_5 == 1 && iVar3 == 0) {
    *(undefined1 *)(param_1 + 2) = 1;
  }
  FUN_1001a85d4(local_68);
LAB_100273504:
  FUN_10015a142(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

