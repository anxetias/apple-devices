// name: FUN_10043ad73
// address: 10043ad73

int FUN_10043ad73(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,long param_7,long param_8,long param_9,
                 undefined4 *param_10)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined1 local_1a0 [16];
  long *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  long local_168;
  long local_160;
  undefined4 local_158;
  long local_150;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  ___bzero(local_1a0,0x148);
  if (param_1 == 0) {
    uVar9 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar9,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "playerPlugin != nullptr";
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    iVar7 = -0x32;
    FUN_1001782e9(0,0);
    goto LAB_10043af73;
  }
  if (param_7 == 0 || param_8 == 0) {
    lVar8 = FUN_1003ae1f8();
    if (lVar8 == 0) {
      uVar9 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar9,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "combinedITTrackInfo != nullptr";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      iVar7 = -0x6c;
      FUN_1001782e9(0,0);
      goto LAB_10043af73;
    }
    lVar11 = lVar8;
    if (param_7 != 0) goto LAB_10043ae41;
  }
  else {
    lVar8 = 0;
LAB_10043ae41:
    FUN_1003af743(param_7);
    lVar11 = param_7;
  }
  if (param_8 == 0) {
    param_8 = lVar8 + 0x1660;
  }
  else if ((*(byte *)(param_8 + 3) & 0x40) == 0) {
    FUN_1003af7fe(param_8);
  }
  else {
    uVar9 = *(undefined8 *)(param_8 + 0x54);
    uVar10 = *(undefined4 *)(param_8 + 0x5c);
    uVar2 = *(undefined4 *)(param_8 + 0x60);
    uVar3 = *(undefined4 *)(param_8 + 100);
    uVar4 = *(undefined4 *)(param_8 + 0x68);
    uVar5 = *(undefined4 *)(param_8 + 0x6c);
    FUN_1003af7fe(param_8);
    *(undefined8 *)(param_8 + 0x54) = uVar9;
    *(undefined4 *)(param_8 + 0x5c) = uVar10;
    *(undefined4 *)(param_8 + 0x60) = uVar2;
    *(undefined4 *)(param_8 + 100) = uVar3;
    *(undefined4 *)(param_8 + 0x68) = uVar4;
    *(undefined4 *)(param_8 + 0x6c) = uVar5;
    *(byte *)(param_8 + 3) = *(byte *)(param_8 + 3) | 0x40;
  }
  if (param_9 != 0) {
    FUN_1003af8bd(param_9);
  }
  local_150 = param_9;
  local_188 = param_3;
  local_180 = param_4;
  local_178 = param_2;
  local_174 = param_6;
  local_170 = param_5;
  local_168 = lVar11;
  local_160 = param_8;
  iVar7 = FUN_10043a8b3(param_1,0x6774696e);
  if (param_10 != (undefined4 *)0x0) {
    uVar10 = 0;
    if (iVar7 == 0) {
      uVar10 = local_158;
    }
    *param_10 = uVar10;
  }
  if (lVar8 != 0) {
    FUN_1003ae783(lVar8 + 0x4ca8);
    FUN_1001c64c1(lVar8);
  }
LAB_10043af73:
  if (local_190 != (long *)0x0) {
    LOCK();
    plVar1 = local_190 + 1;
    lVar8 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar8 == 0) {
      (**(code **)(*local_190 + 0x10))(local_190);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

