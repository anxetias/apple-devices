// name: FUN_1004c1a26
// address: 1004c1a26

int FUN_1004c1a26(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  long *plVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar10 = *(long **)(param_1 + 0x4f0);
  if (plVar10 == (long *)0x0) {
    FUN_1004c3f8e(param_1);
    plVar10 = *(long **)(param_1 + 0x4f0);
  }
  plVar3 = *(long **)(param_1 + 0x4f8);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar10 == (long *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      pcVar9 = "cmItem != __null";
LAB_1004c1c3f:
      uStack_3c = 0x822;
      uStack_40 = 1;
      local_44 = 0x7a0a90;
      local_48 = 0x8220202;
      uStack_3a = SUB82(pcVar9,0);
      uStack_38 = (undefined2)((ulong)pcVar9 >> 0x10);
      uStack_36 = (undefined4)((ulong)pcVar9 >> 0x20);
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16,plVar10);
    }
  }
  else {
    (**(code **)(*plVar10 + 0x10))(&local_48,plVar10,0x6d697861,0,0);
    FUN_100217418((long *)(param_1 + 0x570),&local_48);
    plVar5 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
    if (plVar5 != (long *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x570);
    if (puVar4 != (undefined8 *)0x0) {
      iVar7 = (**(code **)*puVar4)(puVar4,param_2 + 0x98);
      if ((iVar7 != -0x80) && (iVar7 != 0)) {
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 != '\0') {
          local_48 = 0x8220202;
          local_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x400;
          uStack_3a = (undefined2)iVar7;
          uStack_38 = (undefined2)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      goto LAB_1004c1bd2;
    }
    uVar8 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar8,0x10);
    if (cVar6 != '\0') {
      pcVar9 = "mCoreMediaReader != __null";
      goto LAB_1004c1c3f;
    }
  }
  iVar7 = -0x32;
  FUN_1001782e9(0,0);
LAB_1004c1bd2:
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar10 = plVar3 + 1;
    lVar2 = *plVar10;
    *plVar10 = *plVar10 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

