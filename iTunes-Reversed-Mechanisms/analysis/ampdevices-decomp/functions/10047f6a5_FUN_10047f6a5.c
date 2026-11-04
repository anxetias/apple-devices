// name: FUN_10047f6a5
// address: 10047f6a5

undefined1 FUN_10047f6a5(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_10047f4fd();
  if (cVar1 == '\0') {
    uVar5 = 0;
    goto LAB_10047f812;
  }
  if ((param_1 == 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) {
LAB_10047f7e8:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0xe894;
      uStack_48 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar3 + 0x80) != 0x74646174) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10047f7e8;
    }
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4a = 0;
    FUN_1005389ba(&local_58,0x5d);
    FUN_1004755ef(param_1,0,&local_58);
    uVar5 = 1;
    if (((*(int *)(lVar3 + 0x84) == 0x6973756d) && (lVar3 = FUN_10047f238(param_1), lVar3 != 0)) &&
       (lVar4 = FUN_1003070df(), lVar4 != 0)) {
      for (lVar3 = FUN_1002b2671(lVar4,lVar3,0,100,2,0); lVar3 != 0;
          lVar3 = FUN_1002b2870(lVar3,0,100,2,0)) {
        lVar4 = *(long *)(lVar3 + 8);
        if (lVar4 != 0) {
          FUN_100473a90(lVar4);
          *(undefined1 *)(*(long *)(lVar4 + 0x80) + 1) = 0;
        }
      }
    }
  }
LAB_10047f812:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

