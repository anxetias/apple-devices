// name: FUN_1005c753d
// address: 1005c753d

void FUN_1005c753d(undefined8 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 local_a0 [8];
  undefined2 local_98;
  undefined2 uStack_96;
  int iStack_94;
  undefined2 local_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  puVar9 = (undefined8 *)(param_2 + 0x60);
  if (DAT_1008c3011 != '\0') {
    *(undefined4 *)(param_2 + 0x494) = 0x2329;
    goto switchD_1005c759b_default;
  }
  switch(*(undefined4 *)(param_2 + 0x490)) {
  case 1:
    uVar8 = FUN_1005ba5ab(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),
                          param_2 + 0x494);
    *(undefined8 *)(param_2 + 0x4a0) = uVar8;
    goto switchD_1005c759b_default;
  case 2:
    uVar5 = FUN_1005bbba9(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
    break;
  case 3:
    uVar5 = FUN_1005bc04f(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68));
    break;
  case 4:
    uVar5 = FUN_1005bfc7b(*(undefined8 *)(param_2 + 0x470),*(undefined1 *)(param_2 + 0x60));
    break;
  case 5:
    uVar5 = FUN_1005bd4a2(*(undefined8 *)(param_2 + 0x470),param_2 + 0x4a0);
    break;
  case 6:
    uVar5 = FUN_1005bdb25(*(undefined8 *)(param_2 + 0x470),param_2 + 0x4a0);
    break;
  case 7:
    uVar8 = *(undefined8 *)(param_2 + 0x470);
    uVar3 = FUN_1005c4431(uVar8);
    *(undefined1 *)(param_2 + 0x4a0) = uVar3;
    uVar8 = FUN_1005c4527(uVar8);
    *(undefined8 *)(param_2 + 0x4a8) = uVar8;
    goto LAB_1005c7d3e;
  case 8:
    uVar5 = FUN_1005be4a0(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
    break;
  case 9:
    uVar5 = FUN_1005bea5b(*(undefined8 *)(param_2 + 0x470),param_2 + 0x4a0);
    break;
  case 10:
    uVar5 = FUN_1005bebc8(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),param_2 + 0x4a0);
    break;
  case 0xb:
    uVar5 = FUN_1005b93eb(*(undefined8 *)(param_2 + 0x470));
    break;
  case 0xc:
    lVar6 = _AMDevicePowerAssertionCreate
                      ((int)*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x470),
                       *(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68),
                       *(undefined8 *)(param_2 + 0x70),param_2 + 0x494);
    *(long *)(param_2 + 0x4a0) = lVar6;
    if ((lVar6 == 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      iVar4 = *(int *)(param_2 + 0x494);
      uVar8 = _AMDeviceCopyDeviceIdentifier(*(undefined8 *)(param_2 + 0x470));
      FUN_1001aaedc(local_a0,uVar8);
      local_98 = 0x302;
      uStack_96 = 0x400;
      local_90 = 0x842;
      uStack_8e = local_a0._0_2_;
      uStack_8c = local_a0._2_2_;
      uStack_8a = local_a0._4_2_;
      uStack_88 = local_a0._6_2_;
      uStack_86 = 0x800;
      uStack_84 = (undefined4)*(undefined8 *)(param_2 + 0x470);
      uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x470) >> 0x20);
      iStack_94 = iVar4;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDevicePowerAssertionCreate failed (0x%08X) for device %{public}@ (%p)",
                          &local_98,0x1c);
LAB_1005c7891:
      FUN_1001ab006(local_a0);
    }
    goto switchD_1005c759b_default;
  case 0xd:
    iVar4 = _AMDeviceCreateWakeupToken
                      (*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                       param_2 + 0x4a0);
    *(int *)(param_2 + 0x494) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      uVar8 = _AMDeviceCopyDeviceIdentifier(*(undefined8 *)(param_2 + 0x470));
      FUN_1001aaedc(local_a0,uVar8);
      local_98 = 0x302;
      uStack_96 = 0x400;
      local_90 = 0x842;
      uStack_8e = local_a0._0_2_;
      uStack_8c = local_a0._2_2_;
      uStack_8a = local_a0._4_2_;
      uStack_88 = local_a0._6_2_;
      uStack_86 = 0x800;
      uStack_84 = (undefined4)*(undefined8 *)(param_2 + 0x470);
      uStack_80 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x470) >> 0x20);
      iStack_94 = iVar4;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "AMDeviceCreateWakeupToken failed (0x%08X) for device %{public}@ (%p)",
                          &local_98,0x1c);
      goto LAB_1005c7891;
    }
    goto switchD_1005c759b_default;
  case 0xe:
    uVar3 = FUN_1005c4b38(*(undefined8 *)(param_2 + 0x470));
    *(undefined1 *)(param_2 + 0x4a0) = uVar3;
    goto LAB_1005c7d3e;
  case 0xf:
    uVar5 = FUN_1005c0f28(*(undefined8 *)(param_2 + 0x470),*(undefined4 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),param_2 + 0x4a0);
    break;
  case 0x10:
    uVar5 = FUN_1005c1007(*(undefined8 *)(param_2 + 0x470),*(undefined4 *)(param_2 + 0x60),
                          param_2 + 0x4a0);
    break;
  case 0x11:
    uVar5 = FUN_1005c136e(*(undefined8 *)(param_2 + 0x470),*(undefined4 *)(param_2 + 0x60),
                          param_2 + 0x4a0);
    break;
  case 0x12:
    uVar5 = FUN_1005bf4e1(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70),
                          param_2 + 0x4a0);
    break;
  case 0x13:
    uVar5 = FUN_1005bd19c(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68));
    break;
  case 0x14:
    uVar8 = FUN_1005bac96(*(undefined8 *)(param_2 + 0x470),*(undefined1 *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x4a0) = uVar8;
    goto LAB_1005c7d3e;
  case 0x15:
    uVar5 = FUN_1005bdd1f(*(undefined8 *)(param_2 + 0x470),param_2 + 0x4a0);
    break;
  case 0x16:
    uVar5 = FUN_1005c16f8(*(undefined8 *)(param_2 + 0x470),*(undefined4 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),param_2 + 0x4a0);
    break;
  case 0x17:
    uVar5 = FUN_1005c3a3a(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          *(undefined8 *)(param_2 + 0x68),param_2 + 0x4a0);
    break;
  case 0x18:
    uVar5 = FUN_1005c3d1e(*(undefined8 *)(param_2 + 0x478),*(undefined8 *)(param_2 + 0x60),
                          param_2 + 0x4a0);
    break;
  case 0x19:
    uVar5 = FUN_1005c0198(*(undefined8 *)(param_2 + 0x470),puVar9);
    break;
  case 0x1a:
    uVar8 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x488) = uVar8;
    uVar5 = FUN_10036c8bb(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60),
                          param_2 + 0x4a0);
    break;
  case 0x1b:
    uVar8 = FUN_1001705fc(*(undefined8 *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x488) = uVar8;
    uVar5 = FUN_10036d5c0(*(undefined8 *)(param_2 + 0x470),*(undefined8 *)(param_2 + 0x60));
    break;
  case 0x1c:
    iVar4 = _AMSCopySourcesForRestoreCompatibleWith(*(undefined8 *)(param_2 + 0x60),param_2 + 0x4a0)
    ;
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      pcVar7 = "AMSCopySourcesForRestoreCompatibleWith failed (%d)";
      iStack_94 = iVar4;
LAB_1005c7ce4:
      uStack_96 = 0x400;
      local_98 = 0x100;
      uVar8 = 8;
LAB_1005c7cef:
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,pcVar7,&local_98,uVar8);
    }
    goto LAB_1005c7d3e;
  case 0x1d:
    iVar4 = _AMSRegisterClientWithTargetIdentifierAndDisplayName
                      (*(undefined8 *)(param_2 + 0x480),*(undefined8 *)(param_2 + 0x60));
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      pcVar7 = "AMSRegisterClientWithTargetIdentifierAndDisplayName failed (%d)";
      iStack_94 = iVar4;
      goto LAB_1005c7ce4;
    }
    goto LAB_1005c7d3e;
  case 0x1e:
    iVar4 = _AMSUnregisterTarget(*(undefined8 *)(param_2 + 0x480));
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      pcVar7 = "AMSUnregisterTarget failed (%d)";
      iStack_94 = iVar4;
      goto LAB_1005c7ce4;
    }
    goto LAB_1005c7d3e;
  case 0x1f:
    iVar4 = _AMSGetDataClassInfoForTarget
                      (*(undefined8 *)(param_2 + 0x480),(long *)(param_2 + 0x4a0));
    *(int *)(param_2 + 0x498) = iVar4;
    if (iVar4 == 0) {
      if ((*(long *)(param_2 + 0x4a0) == 0) &&
         (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
        local_98 = 0;
        pcVar7 = "AMSGetDataClassInfoForTarget returned NULL";
        uVar8 = 2;
        goto LAB_1005c7cef;
      }
    }
    else {
      cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      if (cVar2 != '\0') {
        pcVar7 = "AMSGetDataClassInfoForTarget failed (%d)";
        iStack_94 = iVar4;
        goto LAB_1005c7ce4;
      }
    }
    goto LAB_1005c7d3e;
  case 0x20:
    iVar4 = _AMSSetDataClassInfoForTarget
                      (*(undefined8 *)(param_2 + 0x480),*(undefined8 *)(param_2 + 0x60));
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      pcVar7 = "AMSSetDataClassInfoForTarget failed (%d)";
      iStack_94 = iVar4;
      goto LAB_1005c7ce4;
    }
    goto LAB_1005c7d3e;
  case 0x21:
    iVar4 = _AMSGetCollectionsForDataClassName
                      (*(undefined8 *)(param_2 + 0x480),*(undefined8 *)(param_2 + 0x60),
                       param_2 + 0x4a0);
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      uVar8 = *puVar9;
      iStack_94 = (int)uVar8;
      local_90 = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_8e = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_8a = (undefined2)iVar4;
      uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
      pcVar7 = "AMSGetCollectionsForDataClassName for %{public}@ failed (%d)";
LAB_1005c7bbc:
      uStack_8c = 0x400;
      uStack_96 = 0x842;
      local_98 = 0x202;
      uVar8 = 0x12;
      goto LAB_1005c7cef;
    }
    goto LAB_1005c7d3e;
  case 0x22:
    iVar4 = _AMSSetFilteredCollectionNamesForDataClassName
                      (*(undefined8 *)(param_2 + 0x480),*(undefined8 *)(param_2 + 0x60),
                       *(undefined8 *)(param_2 + 0x68));
    *(int *)(param_2 + 0x498) = iVar4;
    if ((iVar4 != 0) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar2 != '\0')) {
      uVar8 = *puVar9;
      iStack_94 = (int)uVar8;
      local_90 = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_8e = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_8a = (undefined2)iVar4;
      uStack_88 = (undefined2)((uint)iVar4 >> 0x10);
      pcVar7 = "AMSSetFilteredCollectionNamesForDataClassName for %{public}@ failed (%d)";
      goto LAB_1005c7bbc;
    }
LAB_1005c7d3e:
    *(undefined4 *)(param_2 + 0x494) = 0;
  default:
    goto switchD_1005c759b_default;
  }
  *(undefined4 *)(param_2 + 0x494) = uVar5;
switchD_1005c759b_default:
  switch(*(undefined4 *)(param_2 + 0x490)) {
  case 1:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    break;
  case 2:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    FUN_10017060f(*(undefined8 *)(param_2 + 0x68));
    goto LAB_1005c7dc6;
  case 3:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    break;
  default:
    goto switchD_1005c7d67_caseD_4;
  case 10:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    break;
  case 0xc:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    FUN_10017060f(*(undefined8 *)(param_2 + 0x68));
LAB_1005c7dc6:
    puVar9 = (undefined8 *)(param_2 + 0x70);
  case 0xd:
  case 0x12:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x20:
  case 0x21:
    goto switchD_1005c7d67_caseD_d;
  case 0xf:
  case 0x16:
    break;
  case 0x13:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    break;
  case 0x17:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
    break;
  case 0x22:
    FUN_10017060f(*(undefined8 *)(param_2 + 0x60));
  }
  puVar9 = (undefined8 *)(param_2 + 0x68);
switchD_1005c7d67_caseD_d:
  FUN_10017060f(*puVar9);
switchD_1005c7d67_caseD_4:
  if (*(char *)(param_2 + 0x8d0) == '\x01') {
    local_98 = 0xf5b0;
    uStack_96 = 0x86;
    iStack_94 = 1;
    local_90 = 0x8018;
    uStack_8e = 0x5c;
    uStack_8c = 1;
    uStack_8a = 0;
    uStack_88 = (undefined2)param_2;
    uStack_86 = (undefined2)((ulong)param_2 >> 0x10);
    uStack_84 = (undefined4)((ulong)param_2 >> 0x20);
    local_68 = 0;
    uStack_60 = 0;
    uStack_59 = 0;
    uStack_58 = 0;
    uStack_56 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = (long *)0x0;
    uStack_57 = 1;
    local_78 = (long *)&local_98;
    FUN_10017869a(&local_98);
    if (local_40 != (long *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar6 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar6 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_78 == (long *)&local_98) {
      lVar6 = 0x20;
    }
    else {
      lVar6 = 0x28;
      if (local_78 == (long *)0x0) goto LAB_1005c7e92;
    }
    (**(code **)(*local_78 + lVar6))();
  }
  else {
    FUN_1005c80d0(param_2);
  }
LAB_1005c7e92:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

