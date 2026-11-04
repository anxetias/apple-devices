// name: FUN_1004efe05
// address: 1004efe05

void FUN_1004efe05(long param_1)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1004efe8f:
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xd2b2;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004efede;
  }
  if (*(int *)(param_1 + 8) != 0x64756c63) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7ab58c;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xd710;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_1004efe8f;
  }
  if (*(char *)(param_1 + 0x3a2) == '\0') {
    if ((*(int *)(param_1 + 0x6b14) == 0) && (iVar3 = FUN_1004dccf5(param_1,""), iVar3 == 0)) {
      *(undefined1 *)(param_1 + 0x6ad3) = 0;
      if (*(long *)(param_1 + 0x30) != 0) {
        psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
        *psVar1 = *psVar1 + 1;
      }
      local_58._0_4_ = 0x854778;
      local_58._4_4_ = 1;
      uStack_50 = 0x5061ab;
      uStack_4c = 1;
      uStack_4a = 0;
      uStack_48 = (undefined6)param_1;
      uStack_42 = (undefined2)((ulong)param_1 >> 0x30);
      local_38 = &local_58;
      iVar3 = FUN_1001b1a89(&local_58,"CleanupIPodFiber",param_1 + 0x6b14,0);
      if (local_38 == &local_58) {
        lVar5 = 0x20;
LAB_1004f005f:
        (**(code **)(*local_38 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (local_38 != (long *)0x0) goto LAB_1004f005f;
      }
      if ((iVar3 != 0) && (*(long *)(param_1 + 0x30) != 0)) {
        psVar1 = (short *)(*(long *)(param_1 + 0x30) + 0x27b0);
        *psVar1 = *psVar1 + -1;
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_4_ = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x9cc8;
      uStack_48 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  FUN_1004dd69c(param_1,"");
LAB_1004efede:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

