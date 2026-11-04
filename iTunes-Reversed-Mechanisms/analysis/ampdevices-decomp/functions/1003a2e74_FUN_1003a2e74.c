// name: FUN_1003a2e74
// address: 1003a2e74

void FUN_1003a2e74(long param_1,char param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_78 [4];
  undefined ***local_58;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0xe6) == param_2) goto LAB_1003a2f5e;
  if (param_2 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "inLikedState != kITLikedState_Unknown";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1003a2f5e;
  }
  *(char *)(param_1 + 0xe6) = param_2;
  FUN_1003a2686(param_1,0x10);
  if (param_3 == 0) {
    param_3 = FUN_100177d5c(0);
  }
  if (*(uint *)(param_1 + 0x84) <= param_3) {
    *(uint *)(param_1 + 0x84) = param_3;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  cVar1 = FUN_10030e2f7(uVar3);
  if (cVar1 != '\0') goto LAB_1003a2f5e;
  FUN_100313e0b(uVar3);
  local_78[0] = &PTR_FUN_100856b40;
  local_58 = local_78;
  FUN_1003a0178(param_1,0,local_78);
  if (local_58 == local_78) {
    lVar2 = 0x20;
LAB_1003a2f50:
    (**(code **)((long)*local_58 + lVar2))();
  }
  else {
    lVar2 = 0x28;
    if (local_58 != (undefined ***)0x0) goto LAB_1003a2f50;
  }
  FUN_1002fbbfc(uVar3);
LAB_1003a2f5e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

