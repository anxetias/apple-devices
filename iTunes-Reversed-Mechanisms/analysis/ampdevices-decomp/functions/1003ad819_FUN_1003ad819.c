// name: FUN_1003ad819
// address: 1003ad819

int FUN_1003ad819(undefined8 *param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
                 undefined8 param_5,char param_6,char param_7,byte param_8,int param_9,byte param_10
                 ,undefined4 *param_11,code *param_12,undefined8 param_13)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 *puVar11;
  ulong *puVar12;
  byte bVar13;
  ulong uVar14;
  undefined1 in_stack_fffffffffffffe30 [16];
  undefined1 auVar16 [12];
  undefined1 auVar15 [16];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [19];
  byte local_19d;
  byte local_19c;
  ulong local_128;
  ulong uStack_120;
  undefined1 local_118 [16];
  uint *local_108;
  undefined1 local_100 [48];
  undefined8 local_d0;
  undefined8 local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  long *plStack_b0;
  undefined8 local_a0;
  uint *local_98;
  uint local_8c;
  undefined1 local_88 [16];
  int local_70;
  undefined4 local_6c;
  uint *local_68;
  byte local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_88._0_8_ = param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1b0._0_16_ = (undefined1  [16])0x0;
  local_a0 = param_5;
  FUN_1001c62d9(&local_108,0x38);
  local_108 = param_3;
  iVar8 = (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,param_2);
  local_d0 = param_2;
  if (iVar8 == -0x80) goto LAB_1003adc43;
  if (iVar8 != 0) {
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1003adc43;
  }
  local_c8 = *param_1;
  plStack_c0 = (long *)param_1[1];
  if (param_1[1] != 0) {
    LOCK();
    plVar1 = (long *)(param_1[1] + 8);
    *plVar1 = *plVar1 + 1;
    UNLOCK();
  }
  puVar11 = local_1b8;
  local_70 = FUN_10042db01(&local_c8,puVar11,0,0);
  if (plStack_c0 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (((param_8 == 0) && (param_7 != '\0')) && ((byte)(local_19d - 1) < 4)) {
    if ((param_10 & 0x10) != 0) {
      if (param_9 - 1U < 5) {
        bVar10 = (char)(param_9 - 1U) * '\b';
        uVar14 = 0x403020101 >> (bVar10 & 0x3f);
        bVar10 = (byte)(0x100L >> (bVar10 & 0x3f));
        bVar13 = (byte)uVar14;
        if (local_19d < bVar13) goto LAB_1003ada5c;
      }
      else {
        bVar10 = 0;
        bVar13 = 0;
      }
      if ((bVar13 == local_19d) && (uVar14 = (ulong)local_19d, local_19c <= bVar10))
      goto LAB_1003ada5c;
    }
    uVar14 = (ulong)local_19d;
    bVar10 = local_19c;
LAB_1003ada5c:
    local_59 = param_8;
    local_6c = (undefined4)CONCAT71((int7)((ulong)puVar11 >> 8),local_70 == 0);
    bVar13 = param_10 & 3;
    iVar8 = FUN_10042ac59(local_100,uVar14 & 0xff,bVar10,bVar13);
    if (iVar8 == 0) {
      if ((byte)uVar14 == 0) {
        local_68 = (uint *)0x0;
LAB_1003adb20:
        bVar3 = false;
        iVar8 = 0;
        goto LAB_1003adb23;
      }
      if (local_19d == 0) {
        local_68 = (uint *)0x0;
LAB_1003adcf5:
        if (param_3 == (uint *)0x0) {
LAB_1003ae050:
          if (param_12 != (code *)0x0) {
            bVar3 = false;
            (*param_12)(local_100,param_13);
            iVar8 = 0;
            goto LAB_1003adb23;
          }
          goto LAB_1003adb20;
        }
        local_59 = local_59 | (byte)uVar14 ^ 1;
        iVar8 = FUN_1003ab3b4(param_3,local_88._0_8_,local_a0,local_100,local_59 == 0);
        if (iVar8 == -0xce) {
          FUN_10042c642(local_100);
          iVar8 = FUN_10042ac59(local_100,2,0,bVar13);
          if (iVar8 != 0) {
            uVar9 = FUN_1001cc310();
            cVar7 = _os_log_type_enabled(uVar9,0x10);
            if (cVar7 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            goto LAB_1003adc0c;
          }
          if (local_19d != 0) {
            in_stack_fffffffffffffe30 = (undefined1  [16])0x0;
            iVar8 = FUN_100428630(local_1b8,FUN_1003ae6c8,&local_108,0,0,0,0,(undefined1  [16])0x0);
            if (iVar8 != -0x80) {
              if (iVar8 == 0) goto LAB_1003ae021;
              uVar9 = FUN_1001cc310();
              cVar7 = _os_log_type_enabled(uVar9,0x10);
              if (cVar7 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
                goto LAB_1003ae0c3;
              }
            }
            goto LAB_1003adc00;
          }
LAB_1003ae021:
          iVar8 = FUN_1003ab3b4(param_3,local_88._0_8_,local_a0,local_100,0);
        }
        if (iVar8 != -0x80) {
          if (iVar8 == 0) goto LAB_1003ae050;
          uVar9 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar9,0x10);
          if (cVar7 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
            goto LAB_1003ae0c3;
          }
        }
      }
      else if (bVar13 == 0 && param_8 == 0) {
        local_8c = 0;
        local_118 = (undefined1  [16])0x0;
        cVar7 = FUN_1001ee041();
        if (cVar7 == '\0') {
          local_68 = (uint *)FUN_1003ae1f8();
          if (local_68 == (uint *)0x0) {
            uVar9 = FUN_1001cc310();
            goto LAB_1003ae0e7;
          }
        }
        else {
          local_68 = (uint *)FUN_1001c6429(0x4cec);
          if (local_68 == (uint *)0x0) {
            uVar9 = FUN_1001cc310();
LAB_1003ae0e7:
            cVar7 = _os_log_type_enabled(uVar9,0x10);
            if (cVar7 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "combinedITTrackInfo != nullptr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            iVar8 = 0;
            FUN_1001782e9(0,0);
            goto LAB_1003adaa0;
          }
          local_68[1] = 0x1660;
        }
        local_98 = local_68 + 0x598;
        iVar8 = FUN_100428630(local_1b8,FUN_1003a996e,local_68,local_98,0,0,0,(undefined1  [16])0x0)
        ;
        if (iVar8 != -0x80) {
          if (iVar8 == 0) {
            FUN_1003ae2ba(param_3,local_68,local_88._0_8_,local_98,&local_8c,local_118);
            uVar4 = local_8c;
            if (local_8c != 0) {
              _memcpy(local_68,param_3,0x1660);
              *local_68 = *local_68 & ~uVar4;
              param_3 = local_68;
            }
            puVar5 = local_68;
            puVar6 = param_3;
            if (local_118 != (undefined1  [16])0x0) {
              local_128 = *(ulong *)local_88._0_8_;
              uStack_120 = *(ulong *)(local_88._0_8_ + 8);
              puVar12 = (ulong *)(local_88._0_8_ + 0x10);
              *(ulong *)(local_68 + 0x598) = local_128;
              *(ulong *)(local_68 + 0x59a) = uStack_120;
              local_88 = local_118;
              _memcpy(local_68 + 0x59c,puVar12,0x3638);
              *(ulong *)(puVar5 + 0x598) = ~local_88._0_8_ & local_128;
              *(ulong *)(puVar5 + 0x59a) = ~local_88._8_8_ & uStack_120;
              local_88._0_8_ = local_98;
              puVar6 = param_3;
            }
            goto LAB_1003adcad;
          }
          uVar9 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar9,0x10);
          if (cVar7 == '\0') goto LAB_1003adc00;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
LAB_1003ae0c3:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      else {
        local_68 = (uint *)0x0;
        puVar6 = local_108;
LAB_1003adcad:
        local_108 = puVar6;
        in_stack_fffffffffffffe30 = (undefined1  [16])0x0;
        iVar8 = FUN_100428630(local_1b8,FUN_1003ae6c8,&local_108,0,0,0,0,(undefined1  [16])0x0);
        if (iVar8 != -0x80) {
          if (iVar8 == 0) goto LAB_1003adcf5;
          uVar9 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar9,0x10);
          if (cVar7 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
            goto LAB_1003ae0c3;
          }
        }
      }
      goto LAB_1003adc00;
    }
    uVar9 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar9,0x10);
    if (cVar7 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar8);
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
LAB_1003adaa0:
    local_68 = (uint *)0x0;
  }
  else {
    if ((param_8 != 0) || (param_6 != '\0' && local_19d == 0)) {
      if (param_9 - 1U < 5) {
        bVar10 = (char)(param_9 - 1U) * '\b';
        uVar14 = 0x403020101 >> (bVar10 & 0x3f);
        bVar10 = (byte)(0x100L >> (bVar10 & 0x3f));
      }
      else {
        uVar14 = (ulong)(byte)((param_9 != 0) * '\x02');
        bVar10 = 0;
      }
      goto LAB_1003ada5c;
    }
    local_68 = (uint *)0x0;
    bVar3 = true;
    iVar8 = local_70;
LAB_1003adb23:
    auVar16 = in_stack_fffffffffffffe30._4_12_;
    if (local_70 == 0) {
      FUN_100426c81(local_1b8);
      auVar16 = in_stack_fffffffffffffe30._4_12_;
    }
    if (bVar3) {
      if (param_11 != (undefined4 *)0x0) {
        *param_11 = 0;
      }
    }
    else {
      local_b8 = *param_1;
      plStack_b0 = (long *)param_1[1];
      if (param_1[1] != 0) {
        LOCK();
        plVar1 = (long *)(param_1[1] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      auVar15._1_3_ = 0;
      auVar15[0] = (param_10 & 0x40) == 0;
      auVar15._4_12_ = auVar16;
      iVar8 = FUN_10042c676(&local_b8,local_d0,local_100,param_11,param_10 >> 3 & 1,
                            param_10 >> 2 & 1,param_10 >> 5 & 1,auVar15);
      if (plStack_b0 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    local_6c = 0;
LAB_1003adc00:
    FUN_10042c642(local_100);
  }
LAB_1003adc0c:
  if ((char)local_6c != '\0') {
    FUN_100426c81(local_1b8);
  }
  if (local_68 != (uint *)0x0) {
    FUN_1001ee041();
    FUN_1003ae783(local_68 + 0x132a);
    FUN_1001c64c1(local_68);
  }
LAB_1003adc43:
  if ((long *)local_1b0._8_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(local_1b0._8_8_ + 8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*(long *)local_1b0._8_8_ + 0x10))(local_1b0._8_8_);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar8;
}

