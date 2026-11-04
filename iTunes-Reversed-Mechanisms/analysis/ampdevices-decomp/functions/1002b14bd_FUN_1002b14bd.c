// name: FUN_1002b14bd
// address: 1002b14bd

bool FUN_1002b14bd(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  ulong local_3698 [15];
  long local_3620;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x1002b14d1;
  lVar8 = FUN_100108310();
  lVar8 = -lVar8;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_3698[0] = 0;
  local_3698[1] = 0;
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b14fc;
  iVar6 = FUN_1002b1325();
  if ((iVar6 == 0x41412020) || (iVar6 == 0x41415820)) {
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1523;
    FUN_100241e02(&local_48,param_1,2,0,0,0);
    plVar3 = (long *)CONCAT44(uStack_44,local_48);
    plVar4 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b15b4;
      uVar9 = FUN_1001cc310();
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b15c4;
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x8eb6;
        uStack_38 = 0x1007b;
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b16d2;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      bVar10 = false;
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b15d8;
      FUN_1001782e9(0,0);
    }
    else {
      uVar9 = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1547;
      uVar7 = FUN_10047fc8b(uVar9);
      pcVar2 = *(code **)(*plVar3 + 0x88);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar8) = 0;
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1572;
      iVar6 = (*pcVar2)(plVar3,0x20,uVar7,0,local_3698,0);
      if ((iVar6 == 0) && ((local_3698[0] & 8) != 0)) {
        bVar10 = *(long *)(*(long *)(param_1 + 0x10) + 8) == local_3620;
      }
      else {
        bVar10 = false;
      }
    }
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar1 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        pcVar2 = *(code **)(*plVar4 + 0x10);
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b160d;
        (*pcVar2)(plVar4);
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1615;
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1589;
    uVar9 = FUN_1001cc310();
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1599;
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x8e90;
      uStack_38 = 0x1007b;
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1684;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b15aa;
    FUN_1001782e9(0,0);
    bVar10 = false;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return bVar10;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_28 + lVar8) = &UNK_1002b16dc;
  ___stack_chk_fail();
}

