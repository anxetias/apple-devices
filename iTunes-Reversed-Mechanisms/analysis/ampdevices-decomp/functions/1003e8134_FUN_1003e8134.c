// name: FUN_1003e8134
// address: 1003e8134

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003e8134(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_138 [6] [16];
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined2 local_ac;
  int local_aa;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  undefined2 local_8c;
  int local_8a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar1 = *(undefined8 *)(param_1 + 0x100008);
  if (param_2 == 1) {
    lVar5 = FUN_1002f930c(uVar1);
    while (lVar2 = lVar5, lVar2 != 0) {
      lVar5 = FUN_1002f9451(lVar2);
      if (*(long *)(lVar2 + 0x68) == 0) {
        FUN_1004737f5(lVar2);
      }
    }
  }
  FUN_1003071cd(uVar1);
  FUN_1001c62d9(local_138,0x60);
  local_138[0]._0_8_ = 0x606473686d;
  local_138[0]._12_4_ = param_2;
  iVar4 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_d0);
  if (iVar4 == -0x80) goto LAB_1003e85b2;
  if (iVar4 == 0) {
    local_98 = 0x60;
    uStack_94 = 0;
    iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_98,local_138);
    if (iVar4 == -0x80) goto LAB_1003e85b2;
    if (iVar4 == 0) {
      FUN_1001c62d9(&local_98,0x5c);
      local_98 = 0x746c686d;
      uStack_94 = 0x5c;
      iVar4 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),&local_c8);
      if (iVar4 == -0x80) goto LAB_1003e85b2;
      if (iVar4 == 0) {
        local_b8 = 0x5c;
        uStack_b4 = 0;
        iVar4 = FUN_100160894(*(undefined8 *)(param_1 + 0x100000),&local_b8,&local_98);
        if (iVar4 == -0x80) goto LAB_1003e85b2;
        if (iVar4 == 0) {
          for (lVar5 = FUN_1002f9fc5(uVar1); lVar5 != 0; lVar5 = FUN_1002fa118(lVar5)) {
            cVar3 = FUN_1003f36d8(*(undefined4 *)(param_1 + 0x100018),param_2,lVar5);
            if (cVar3 != '\0') {
              iVar4 = FUN_1003f3741(param_1,lVar5);
              if (iVar4 != 0) {
                if (iVar4 == -0x80) goto LAB_1003e85b2;
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 == '\0') goto LAB_1003e85b2;
                puVar7 = &local_b8;
                local_b8 = 0x8220202;
                uStack_b4 = 0x7a0a90;
                uStack_b0 = 1;
                local_ac = 0x400;
                local_aa = iVar4;
                goto LAB_1003e859f;
              }
              local_90 = local_90 + 1;
            }
          }
          iVar4 = FUN_100160255(*(undefined8 *)(param_1 + 0x100000),local_c0);
          if (iVar4 == -0x80) goto LAB_1003e85b2;
          if (iVar4 == 0) {
            local_c0[0] = local_c0[0] - (int)local_d0;
            local_138[0]._8_4_ = local_c0[0];
            if (*(char *)(param_1 + 0x100127) != '\0') {
              auVar9._12_4_ = local_138[0]._12_4_;
              auVar9._8_4_ = local_c0[0];
              auVar9._0_8_ = local_138[0]._0_8_;
              local_138[0] = pshufb(auVar9,_DAT_100718a70);
            }
            local_b8 = 0x60;
            uStack_b4 = 0;
            iVar4 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),local_d0,&local_b8,local_138);
            if (iVar4 == -0x80) goto LAB_1003e85b2;
            if (iVar4 == 0) {
              if (*(char *)(param_1 + 0x100127) != '\0') {
                auVar8._4_4_ = uStack_94;
                auVar8._0_4_ = local_98;
                auVar8._8_8_ = 0;
                auVar9 = pshufb(auVar8,_DAT_10070e4b0);
                local_98 = auVar9._0_4_;
                uStack_94 = auVar9._4_4_;
                local_90 = local_90 >> 0x18 | (local_90 & 0xff0000) >> 8 | (local_90 & 0xff00) << 8
                           | local_90 << 0x18;
              }
              local_b8 = 0x5c;
              uStack_b4 = 0;
              iVar4 = FUN_100160a0d(*(undefined8 *)(param_1 + 0x100000),local_c8,&local_b8,&local_98
                                   );
              if ((iVar4 == -0x80) || (iVar4 == 0)) goto LAB_1003e85b2;
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 == '\0') goto LAB_1003e85b2;
              puVar7 = &local_b8;
              local_b8 = 0x8220202;
              uStack_b4 = 0x7a0a90;
              uStack_b0 = 1;
              local_ac = 0x400;
              local_aa = iVar4;
            }
            else {
              uVar6 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar6,0x10);
              if (cVar3 == '\0') goto LAB_1003e85b2;
              puVar7 = &local_b8;
              local_b8 = 0x8220202;
              uStack_b4 = 0x7a0a90;
              uStack_b0 = 1;
              local_ac = 0x400;
              local_aa = iVar4;
            }
          }
          else {
            uVar6 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar6,0x10);
            if (cVar3 == '\0') goto LAB_1003e85b2;
            puVar7 = &local_b8;
            local_b8 = 0x8220202;
            uStack_b4 = 0x7a0a90;
            uStack_b0 = 1;
            local_ac = 0x400;
            local_aa = iVar4;
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 == '\0') goto LAB_1003e85b2;
          puVar7 = &local_b8;
          local_b8 = 0x8220202;
          uStack_b4 = 0x7a0a90;
          uStack_b0 = 1;
          local_ac = 0x400;
          local_aa = iVar4;
        }
      }
      else {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 == '\0') goto LAB_1003e85b2;
        puVar7 = &local_b8;
        local_b8 = 0x8220202;
        uStack_b4 = 0x7a0a90;
        uStack_b0 = 1;
        local_ac = 0x400;
        local_aa = iVar4;
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 == '\0') goto LAB_1003e85b2;
      puVar7 = &local_98;
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      local_90 = 1;
      local_8c = 0x400;
      local_8a = iVar4;
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 == '\0') goto LAB_1003e85b2;
    puVar7 = &local_98;
    local_98 = 0x8220202;
    uStack_94 = 0x7a0a90;
    local_90 = 1;
    local_8c = 0x400;
    local_8a = iVar4;
  }
LAB_1003e859f:
  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",puVar7,0x12);
LAB_1003e85b2:
  FUN_100307383(uVar1);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}

