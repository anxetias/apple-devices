// name: FUN_1005ee334
// address: 1005ee334

void FUN_1005ee334(uint param_1)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  bool bVar12;
  uint local_b4;
  uint local_b0;
  short local_ac;
  byte local_a9;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  long *local_88;
  long local_78;
  undefined7 uStack_70;
  undefined4 uStack_69;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  puVar11 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != (uint *)0x0 && param_1 != 0) {
    do {
      if (puVar11[0x1a21] == param_1) {
        uVar2 = *puVar11;
        local_ac = FUN_1004174a0(uVar2,0x10e6,0x10e7,0x10e5,0x10e8,0x1107,0x1114,0,0x1117,0x1119);
        uVar5 = uStack_96;
        uVar4 = uStack_98;
        uStack_98 = (undefined2)param_1;
        uStack_96 = (undefined2)(param_1 >> 0x10);
        if ((uVar2 | 0x10) == 0x69506f74) {
          if (puVar11[0x1a26] == 1) {
            local_a9 = 1;
            local_b0 = 0;
            uStack_98 = uVar4;
            uStack_96 = uVar5;
            if (puVar11[0x111] != 0x2711) goto LAB_1005ee832;
            if (puVar11[0x1a2e] == 2) {
              FUN_100249cb6(&local_a8,puVar11[0xba],puVar11[0xbd],puVar11[0xbe],puVar11[0xbf],uVar2,
                            0x2711);
              iVar7 = FUN_10024c7e6(&local_a8,&local_b4);
              FUN_100249ea6(&local_a8);
              if (iVar7 == 0x5c6) {
                iVar7 = FUN_1005f09c2(puVar11);
                if (iVar7 == -0x80) {
LAB_1005ee6ff:
                  iVar7 = -0x80;
                  goto LAB_1005ee994;
                }
                if (iVar7 == 0) {
                  FUN_100249cb6(&local_a8,puVar11[0xba],puVar11[0xbd],puVar11[0xbe],puVar11[0xbf],
                                *puVar11,puVar11[0x111]);
                  iVar7 = FUN_10024c7e6(&local_a8,&local_b4);
                  FUN_100249ea6(&local_a8);
                  if (iVar7 == -0x80) goto LAB_1005ee6ff;
                  if (iVar7 == 0) goto LAB_1005ee651;
                  uVar8 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar8,0x10);
                  bVar12 = true;
                  if (cVar6 != '\0') {
                    uStack_9a = (undefined2)iVar7;
                    uStack_98 = (undefined2)((uint)iVar7 >> 0x10);
                    goto LAB_1005eea78;
                  }
                }
                else {
                  uVar8 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar8,0x10);
                  bVar12 = true;
                  if (cVar6 != '\0') {
                    uStack_9a = (undefined2)iVar7;
                    uStack_98 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1005eea78:
                    uStack_9c = 0x400;
                    uStack_a0 = 1;
                    local_a8._4_4_ = 0x7a0a90;
                    local_a8._0_4_ = 0x8220202;
                    bVar12 = true;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_a8,
                                        0x12);
                  }
                }
              }
              else {
LAB_1005ee651:
                if (local_b4 == 0) {
                  uVar8 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar8,0x10);
                  if (cVar6 != '\0') {
                    local_a8._0_4_ = 0x8220202;
                    local_a8._4_4_ = 0x7a0a90;
                    uStack_a0 = 1;
                    uStack_9c = 0x822;
                    uStack_9a = 0x3099;
                    uStack_98 = 0x7f;
                    uStack_96 = 1;
                    uStack_94 = 0;
                    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_a8,
                                        0x16);
                  }
                  FUN_1001782e9(0,0);
                  if (local_b4 == 0) {
                    bVar12 = true;
                    goto LAB_1005ee782;
                  }
                }
                bVar12 = local_b4 == puVar11[0xbf];
              }
LAB_1005ee782:
              if (iVar7 == -0x80) goto LAB_1005ee994;
              if (iVar7 != 0) {
                uVar8 = FUN_1001cc310();
                cVar6 = _os_log_type_enabled(uVar8,0x10);
                if (cVar6 == '\0') goto LAB_1005ee994;
                uStack_9a = (undefined2)iVar7;
                uStack_98 = (undefined2)((uint)iVar7 >> 0x10);
                goto LAB_1005ee981;
              }
              if (!bVar12) goto LAB_1005ee832;
              if (puVar11[0x111] != 0x2711) goto LAB_1005ee811;
            }
            lVar9 = FUN_100279568();
            lVar10 = 0;
            goto LAB_1005ee7b1;
          }
          if (puVar11[0x1a26] != 2) goto LAB_1005ee3b0;
          puVar11[0x1a2e] = 8;
          puVar11[0x1a2f] = 2;
          local_88 = &local_a8;
          local_a8._0_4_ = 0x852528;
          local_a8._4_4_ = 1;
          uStack_a0 = 0x5f033e;
          uStack_9c = 1;
          uStack_9a = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = (long *)0x0;
          uStack_70 = 0;
          uStack_69 = 0;
          local_78 = (ulong)param_1 << 0x20;
          FUN_10017869a(local_88);
        }
        else {
          local_88 = &local_a8;
          local_a8._0_4_ = 0x852528;
          local_a8._4_4_ = 1;
          uStack_a0 = 0x5f0636;
          uStack_9c = 1;
          uStack_9a = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = (long *)0x0;
          uStack_70 = 0;
          uStack_69 = 0;
          local_78 = (ulong)param_1 << 0x20;
          FUN_10017869a(local_88);
        }
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_88 == &local_a8) {
          lVar9 = 0x20;
        }
        else {
          lVar9 = 0x28;
          uVar4 = uStack_98;
          uVar5 = uStack_96;
          if (local_88 == (long *)0x0) goto LAB_1005ee3b0;
        }
        (**(code **)(*local_88 + lVar9))();
        uVar4 = uStack_98;
        uVar5 = uStack_96;
        goto LAB_1005ee3b0;
      }
      puVar11 = *(uint **)(puVar11 + 0x1a1e);
    } while (puVar11 != (uint *)0x0);
  }
  uVar8 = FUN_1001cc310();
  cVar6 = _os_log_type_enabled(uVar8,0x10);
  if (cVar6 != '\0') {
    local_a8._0_4_ = 0x8220202;
    local_a8._4_4_ = 0x7a0a90;
    uStack_a0 = 1;
    uStack_9c = 0x822;
    uStack_9a = 0xf686;
    uStack_98 = 0x7a;
    uStack_96 = 1;
    uStack_94 = 0;
    __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
  }
  FUN_1001782e9(0,0);
  uVar4 = uStack_98;
  uVar5 = uStack_96;
  goto LAB_1005ee3b0;
  while (lVar10 = lVar10 + 1, (int)lVar10 != 0x10) {
LAB_1005ee7b1:
    if (*(short *)(lVar9 + 0xcbc + lVar10 * 4) == 0x2711) {
      cVar6 = *(char *)(lVar9 + 0xcbe + lVar10 * 4);
      if (cVar6 != '\0') {
        iVar7 = FUN_1005f0e29(puVar11,cVar6,&local_a9,&local_b0);
        if (iVar7 == -0x80) goto LAB_1005ee994;
        if (iVar7 == 0) {
          if ((local_a9 & 1) == 0) goto LAB_1005ee851;
          goto LAB_1005ee832;
        }
        uVar8 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar8,0x10);
        if (cVar6 == '\0') goto LAB_1005ee994;
        uStack_9a = (undefined2)iVar7;
        uStack_98 = (undefined2)((uint)iVar7 >> 0x10);
        goto LAB_1005ee981;
      }
      break;
    }
  }
LAB_1005ee811:
  local_b0 = 3;
  local_a9 = puVar11[0xbf] < 4;
  if ((bool)local_a9) {
LAB_1005ee832:
    puVar11[0x1a2e] = 0;
    puVar11[0x1a2f] = 0;
    FUN_1005ee196(&DAT_1008c7b60,puVar11);
    uVar4 = uStack_98;
    uVar5 = uStack_96;
  }
  else {
LAB_1005ee851:
    puVar11[0x1a30] = local_b0;
    puVar11[0x1a2e] = 10;
    puVar11[0x1a2f] = 1;
    iVar7 = FUN_1005efbe6(5,puVar11,&local_ac);
    if (iVar7 != -0x80) {
      uVar4 = uStack_98;
      uVar5 = uStack_96;
      if (iVar7 == 0) goto LAB_1005ee3b0;
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      if (cVar6 != '\0') {
        uStack_9a = (undefined2)iVar7;
        uStack_98 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1005ee981:
        uStack_9c = 0x400;
        uStack_a0 = 1;
        local_a8._4_4_ = 0x7a0a90;
        local_a8._0_4_ = 0x8220202;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_a8,0x12);
      }
    }
LAB_1005ee994:
    sVar3 = local_ac;
    puVar11[0x1a2f] = 3;
    uVar2 = puVar11[0x1a26];
    FUN_1005e73f0(&local_a8,puVar11);
    FUN_100216f84((uVar2 == 1) + '\x01',(int)sVar3,0,iVar7,&local_a8,0);
    FUN_1001b7a50(&local_a8);
    uVar4 = uStack_98;
    uVar5 = uStack_96;
  }
LAB_1005ee3b0:
  uStack_96 = uVar5;
  uStack_98 = uVar4;
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

