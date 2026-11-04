// name: FUN_1005f57f8
// address: 1005f57f8

void FUN_1005f57f8(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined6 local_88;
  undefined2 uStack_82;
  undefined8 local_80;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *param_1;
  iVar2 = *(int *)(param_1 + 1);
  piVar4 = (int *)param_1[2];
  local_b8 = 0;
  if (piVar4 == (int *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      pcVar10 = "versionInfo != nullptr";
LAB_1005f5b4e:
      uStack_8c = 0x822;
      local_90 = 1;
      local_98._4_4_ = 0x7a0a90;
      local_98._0_4_ = 0x8220202;
      uStack_8a = SUB82(pcVar10,0);
      local_88 = (undefined6)((ulong)pcVar10 >> 0x10);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
LAB_1005f58be:
    lVar7 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*piVar4 != 0x77766369) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        pcVar10 = "versionInfo->magic == \'wvci\'";
        goto LAB_1005f5b4e;
      }
      goto LAB_1005f58be;
    }
    *(undefined1 *)(piVar4 + 0x20c) = 1;
    if (*(char *)((long)piVar4 + 0x831) == '\0') {
      piVar4[1] = 3;
      local_a0 = FUN_100171ce8(uVar3);
      uVar11 = (int)local_a0 - 300;
      if (uVar11 < 0xffffff9c) {
        local_a8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(local_a8,0x10);
        if (cVar5 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7a0a90;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0x3552;
          local_88 = 0x1007f;
          __os_log_error_impl(0x100000000,local_a8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        FUN_1001782e9(0,0);
      }
      FUN_1001c3986(uVar11 < 0xffffff9c,"Version check request failed (%u)",local_a0);
      lVar7 = FUN_1001719b7(uVar3);
      if (lVar7 == 0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          pcVar10 = "responseData != nullptr";
          goto LAB_1005f5b4e;
        }
        goto LAB_1005f58be;
      }
      lVar8 = FUN_10016a9bd(DAT_1008c4d90,lVar7,0,&local_b8);
      if (lVar8 != 0) {
        if (*(char *)((long)piVar4 + 10) == '\0') {
          if (piVar4[6] == 0x4d616320) {
            pcVar10 = "MacRestore_VersionCheck.plist";
            local_a8 = 0x1a70;
          }
          else if (piVar4[6] == 0x69427269) {
            pcVar10 = "iBridgeRestore_VersionCheck.plist";
            local_a8 = 0x1a80;
          }
          else {
            pcVar10 = "VersionCheck.plist";
            local_a8 = 0x1a60;
          }
          local_b0 = DAT_1008c76a0;
          local_a0 = lVar8;
          iVar6 = FUN_1005f5cea(pcVar10,lVar8);
          lVar8 = local_a0;
          if (iVar6 == 0) {
            uVar9 = FUN_1001705fc(local_a0);
            FUN_10017060f(*(undefined8 *)(local_b0 + local_a8));
            *(undefined8 *)(local_b0 + local_a8) = uVar9;
            FUN_1005f5e59(*(undefined1 *)((long)piVar4 + 0xb),*(char *)((long)piVar4 + 9) == '\x01',
                          0);
            lVar8 = local_a0;
          }
        }
        if (*(char *)((long)piVar4 + 9) == '\0') {
          local_a0 = lVar8;
          FUN_1005f5f52(lVar8,piVar4);
          lVar8 = local_a0;
        }
        else {
          piVar4[1] = 0;
        }
        if (*(char *)((long)piVar4 + 10) == '\0') {
          FUN_10017060f(lVar8);
        }
        else {
          *(long *)(piVar4 + 0x148) = lVar8;
        }
      }
    }
    else {
      lVar7 = 0;
    }
  }
  FUN_10017060f(local_b8);
  FUN_10017060f(lVar7);
  FUN_10017060f(uVar3);
  if (piVar4 != (int *)0x0) {
    piVar4[0x20d] = iVar2;
    if ((char)piVar4[2] == '\0') {
      *(undefined1 *)((long)piVar4 + 0x832) = 1;
    }
    else if (((*(char *)((long)piVar4 + 9) == '\0') && (iVar2 != -0x80)) && (piVar4[1] != 0)) {
      local_98._0_4_ = 0x8701b0;
      local_98._4_4_ = 1;
      local_90 = 0x5f551a;
      uStack_8c = 1;
      uStack_8a = 0;
      local_88 = SUB86(piVar4,0);
      uStack_82 = (undefined2)((ulong)piVar4 >> 0x30);
      local_80 = 0;
      local_68 = 0;
      uStack_60 = 0;
      uStack_59 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = (long *)0x0;
      local_78 = &local_98;
      FUN_10017869a(&local_98);
      if (local_40 != (long *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 == &local_98) {
        lVar7 = 0x20;
      }
      else {
        lVar7 = 0x28;
        if (local_78 == (long *)0x0) goto LAB_1005f591e;
      }
      (**(code **)(*local_78 + lVar7))();
    }
    else {
      FUN_1005f4acc(*(undefined8 *)(piVar4 + 0x14a));
      operator_delete(piVar4);
    }
  }
LAB_1005f591e:
  operator_delete(param_1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

