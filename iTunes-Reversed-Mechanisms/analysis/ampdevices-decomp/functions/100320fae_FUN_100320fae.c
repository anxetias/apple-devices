// name: FUN_100320fae
// address: 100320fae

undefined8 FUN_100320fae(long param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
    uVar2 = 0;
    uVar3 = 0;
    if (1 < *(uint *)(param_1 + 0x90)) {
      uVar3 = *(uint *)(param_1 + 0x90) >> 1;
      if (param_3 <= uVar3) {
        uVar3 = param_3;
      }
      FUN_1001c631b(*(undefined8 *)(param_1 + 0x88),param_2,uVar3 * 2);
    }
    *param_4 = uVar3;
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "trackInstance->trackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

