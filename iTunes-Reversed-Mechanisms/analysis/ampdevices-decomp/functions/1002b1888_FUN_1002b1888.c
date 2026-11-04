// name: FUN_1002b1888
// address: 1002b1888

undefined8 FUN_1002b1888(long param_1)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong local_3690 [3];
  uint local_3674;
  long local_3618;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  uStack_30 = 0x1002b189c;
  lVar8 = FUN_100108310();
  lVar8 = -lVar8;
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b18cf;
  ___bzero(local_3690,0x3648);
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b18d7;
  FUN_1003af7fe(local_3690);
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b18f0;
  FUN_100241e02(&local_48,param_1,2,0,0,0);
  plVar3 = (long *)CONCAT44(uStack_44,local_48);
  plVar4 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b195b;
    uVar9 = FUN_1001cc310();
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b196b;
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x8eb6;
      uStack_38 = 0x1007b;
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1a6e;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar9 = 0;
    *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b197f;
    FUN_1001782e9(0,0);
    goto LAB_1002b197f;
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1914;
  uVar6 = FUN_10047fc8b(uVar9);
  pcVar2 = *(code **)(*plVar3 + 0x88);
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar8) = 0;
  *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b193f;
  iVar7 = (*pcVar2)(plVar3,0x20,uVar6,0,local_3690,0);
  if ((iVar7 == 0) && ((local_3690[0] >> 0x26 & 1) != 0)) {
    uVar9 = 0;
    if (((local_3690[0] & 8) == 0) || ((local_3674 & 0x4000) == 0)) goto LAB_1002b197f;
    if (local_3618 != 0) {
      uVar9 = 1;
      if (*(long *)(*(long *)(param_1 + 0x10) + 8) != local_3618) {
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1a03;
        uVar10 = FUN_1001cc310();
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1a13;
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          local_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x8ece;
          uStack_38 = 0x1007b;
          *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1abc;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b1a20;
        FUN_1001782e9(0,0);
      }
      goto LAB_1002b197f;
    }
  }
  uVar9 = 0;
LAB_1002b197f:
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      pcVar2 = *(code **)(*plVar4 + 0x10);
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b199f;
      (*pcVar2)(plVar4);
      *(undefined8 *)((long)&local_28 + lVar8) = 0x1002b19a7;
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_28 + lVar8) = &UNK_1002b1ac6;
  ___stack_chk_fail();
}

