// name: FUN_10037a7d0
// address: 10037a7d0

ulong FUN_10037a7d0(long param_1,long param_2,long param_3,long param_4,int param_5,
                   undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  bool bVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 < 0x48) {
    if ((param_5 == 0x1b) || (param_5 == 0x1e)) {
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar5 = *(uint *)(param_2 + 0x40);
      if (param_1 != param_2 && uVar2 == uVar5) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "(item1->objectID != item2->objectID) or (item1 == item2)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar2 = *(uint *)(param_1 + 0x40);
        uVar5 = *(uint *)(param_2 + 0x40);
      }
      bVar7 = uVar2 < uVar5;
      bVar8 = uVar2 == uVar5;
LAB_10037a8b2:
      uVar4 = 0xffffffff;
      if (!bVar7) {
        uVar4 = (ulong)(!bVar7 && !bVar8);
      }
      goto LAB_10037a8bd;
    }
  }
  else {
    if (param_5 == 0x48) {
      uVar2 = *(uint *)(param_1 + 0x44);
      uVar5 = *(uint *)(param_2 + 0x44);
      if (param_1 != param_2 && uVar2 == uVar5) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "(item1->shuffleID != item2->shuffleID) or (item1 == item2)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar2 = *(uint *)(param_1 + 0x44);
        uVar5 = *(uint *)(param_2 + 0x44);
      }
      uVar4 = 0xffffffff;
      if (uVar5 <= uVar2) {
        uVar4 = (ulong)(uVar5 < uVar2);
      }
      goto LAB_10037a8bd;
    }
    if (param_5 == 0x8f) {
      uVar4 = *(ulong *)(param_1 + 0x28);
      uVar6 = *(ulong *)(param_2 + 0x28);
      if (param_1 != param_2 && uVar4 == uVar6) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "(item1->persistentID != item2->persistentID) or (item1 == item2)";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        uVar4 = *(ulong *)(param_1 + 0x28);
        uVar6 = *(ulong *)(param_2 + 0x28);
      }
      bVar7 = uVar4 < uVar6;
      bVar8 = uVar4 == uVar6;
      goto LAB_10037a8b2;
    }
  }
  if (param_3 == 0) {
    uVar4 = (ulong)(param_4 != 0);
  }
  else if (param_4 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if (param_3 != param_4) {
      uVar4 = FUN_1002ddb0d(param_3,param_4,param_5,param_6);
      return uVar4;
    }
    uVar4 = 0;
  }
LAB_10037a8bd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

