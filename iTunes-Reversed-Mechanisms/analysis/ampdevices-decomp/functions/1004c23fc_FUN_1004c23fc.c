// name: FUN_1004c23fc
// address: 1004c23fc

int FUN_1004c23fc(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1[0x9e] == 0) {
    FUN_1004c3f8e(param_1);
  }
  plVar4 = (long *)param_1[0x9f];
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (param_1[0x9e] == 0) {
    uVar13 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar13,0x10);
    if (cVar8 != '\0') {
      pcVar12 = "mCoreMediaItem != __null";
LAB_1004c2757:
      uStack_4c = 0x822;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      local_58 = 0x8220202;
      uStack_4a = SUB82(pcVar12,0);
      uStack_48 = (undefined2)((ulong)pcVar12 >> 0x10);
      uStack_46 = (undefined4)((ulong)pcVar12 >> 0x20);
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1004c2646:
    FUN_1001782e9(0,0);
    iVar9 = -0x32;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x448);
    lVar2 = param_2 + 0x450;
    iVar9 = FUN_10017ecc9(param_2,*(undefined8 *)(param_2 + 0x420),lVar2,0);
    if (iVar9 == 0) {
      FUN_100182d4d(lVar2);
    }
    iVar9 = FUN_100181359(param_2,*(undefined8 *)(param_2 + 0x420),0x686f6f6b,0x4d345620,lVar2);
    if (iVar9 == -0x80) goto LAB_1004c2674;
    if (iVar9 == 0) {
      lVar11 = FUN_10016ff43(DAT_1008c4d90,lVar2);
      param_1[0xb6] = lVar11;
      FUN_100182d4d(lVar2);
      *(undefined4 *)(param_1 + 0xb3) = *(undefined4 *)(param_2 + 0x448);
      uVar5 = *(undefined4 *)(param_2 + 0x43c);
      uVar6 = *(undefined4 *)(param_2 + 0x440);
      uVar7 = *(undefined4 *)(param_2 + 0x444);
      *(undefined4 *)(param_1 + 0xb1) = *(undefined4 *)(param_2 + 0x438);
      *(undefined4 *)((long)param_1 + 0x58c) = uVar5;
      *(undefined4 *)(param_1 + 0xb2) = uVar6;
      *(undefined4 *)((long)param_1 + 0x594) = uVar7;
      (**(code **)(*(long *)param_1[0x9e] + 0x20))
                (&local_58,(long *)param_1[0x9e],2 - (uVar3 & 1),param_1[0xb6]);
      FUN_100217418(param_1 + 0xb4,&local_58);
      plVar4 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      if (plVar4 != (long *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar4 = (long *)param_1[0xb4];
      if (plVar4 == (long *)0x0) {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          pcVar12 = "mExportInfo.exporter != __null";
          goto LAB_1004c2757;
        }
        goto LAB_1004c2646;
      }
      if (*(int *)(param_2 + 0x428) != 0 || *(int *)(param_2 + 0x42c) != 0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,*(int *)(param_2 + 0x428),*(int *)(param_2 + 0x42c));
      }
      iVar9 = FUN_1001e96d3(param_1 + 0xb9,0,0);
      if (iVar9 == -0x80) goto LAB_1004c2674;
      if (iVar9 == 0) {
        *(undefined1 *)(param_1 + 0xb0) = 1;
        (**(code **)(*param_1 + 0x358))(param_1,0);
        (*(code *)**(undefined8 **)param_1[0xb4])();
        FUN_1001e9afc(param_1 + 0xb9);
        iVar9 = (**(code **)(*(long *)param_1[0xb4] + 0x10))();
        iVar10 = (**(code **)(*(long *)param_1[0xb4] + 0x10))();
        if (iVar10 == 0) {
          FUN_10016ffd2(param_1[0xb6],lVar2,0);
        }
        goto LAB_1004c2674;
      }
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 == '\0') goto LAB_1004c2674;
      uStack_4a = (undefined2)iVar9;
      uStack_48 = (undefined2)((uint)iVar9 >> 0x10);
    }
    else {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 == '\0') goto LAB_1004c2674;
      uStack_4a = (undefined2)iVar9;
      uStack_48 = (undefined2)((uint)iVar9 >> 0x10);
    }
    uStack_4c = 0x400;
    uStack_50 = 1;
    local_54 = 0x7a0a90;
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1004c2674:
  (**(code **)(*param_1 + 0x3b8))(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

