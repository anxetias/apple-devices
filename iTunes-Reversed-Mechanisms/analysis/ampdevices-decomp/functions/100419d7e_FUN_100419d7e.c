// name: FUN_100419d7e
// address: 100419d7e

ulong FUN_100419d7e(long *param_1,uint param_2,undefined4 param_3,long *param_4,long *param_5,
                   long *param_6)

{
  ulong *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  byte bVar17;
  char *pcVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  bool bVar23;
  bool bVar24;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  long local_d8;
  undefined8 local_d0;
  long *local_c8;
  long *local_c0;
  ulong local_b8;
  undefined8 local_b0;
  long *local_a8;
  uint local_9c;
  long *local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 local_52;
  undefined8 local_50;
  long *local_48;
  long local_38;
  
  local_b0 = CONCAT44(local_b0._4_4_,param_3);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_dc = (undefined4)param_1[0x260];
  local_d8 = 0;
  local_c8 = param_5;
  local_c0 = param_6;
  local_9c = param_2;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar10 = DAT_1008c75b8;
  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar5 != '\0') {
    local_130 = FUN_1001b83ae(param_1 + 0xc);
    cVar5 = FUN_1001df957("","",0);
    pcVar18 = "in";
    if (cVar5 == '\0') {
      pcVar18 = "";
    }
    local_50 = FUN_1004194cc((int)param_1[0x260]);
    local_68._0_4_ = 0x8200302;
    local_68._4_4_ = (undefined4)local_130;
    uStack_60 = (undefined4)((ulong)local_130 >> 0x20);
    uStack_5c = 0x820;
    uStack_5a = SUB82(pcVar18,0);
    uStack_58 = (undefined2)((ulong)pcVar18 >> 0x10);
    uStack_56 = (undefined4)((ulong)pcVar18 >> 0x20);
    local_52 = 0x820;
    __os_log_impl(0x100000000,uVar10,1,"\"%s\" %s state %s",&local_68,0x20);
  }
  local_9c = local_9c ^ 1;
  if (param_4 != (long *)0x0 && (char)local_9c == '\0') {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xd34a;
      uStack_58 = 0x7c;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (2 < (int)param_1[0x260] - 6U) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      uStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xd2a1;
      uStack_58 = 0x7c;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar21 = 0xffffffee;
    goto LAB_10041a809;
  }
  plVar16 = param_1 + 0xac;
  if ((int)param_1[0x260] == 6) {
    plVar16 = param_1 + 0xbf;
  }
  if (param_4 != (long *)0x0) {
    plVar16 = param_4;
  }
  cVar5 = FUN_100173f7c(plVar16[5],&cf_protected);
  if (cVar5 == '\0') {
LAB_10041a02a:
    plVar11 = (long *)FUN_10039a28c();
    uVar10 = (**(code **)(*plVar11 + 0x50))(plVar11);
    lVar12 = plVar16[5];
    local_68._0_4_ = 0x83f010;
    local_68._4_4_ = 1;
    uStack_60 = (undefined4)lVar12;
    uStack_5c = (undefined2)((ulong)lVar12 >> 0x20);
    uStack_5a = (undefined2)((ulong)lVar12 >> 0x30);
    local_48 = &local_68;
    local_c0 = (long *)FUN_10039c40c(uVar10,&local_68);
    if (local_48 == &local_68) {
      lVar12 = 0x20;
LAB_10041a0eb:
      (**(code **)(*local_48 + lVar12))();
    }
    else {
      lVar12 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10041a0eb;
    }
    if (local_c0 == param_1) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = 0x7a0a90;
        uStack_60 = 1;
        uStack_5c = 0x822;
        uStack_5a = 0xd408;
        uStack_58 = 0x7c;
        uStack_56 = 1;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
    }
    lVar12 = FUN_1001737f8(plVar16[7]);
    if (lVar12 == 0) {
      uVar21 = (ulong)((int)param_1[0xb] == 0x4d616320);
    }
    else {
      uVar21 = 0;
    }
    uVar13 = FUN_1001737f8(plVar16[7]);
    cVar5 = (char)uVar21;
    if ((uVar13 == 0) && (uVar13 = uVar21, cVar5 = '\x01', (int)param_1[0xb] != 0x69427269)) {
      cVar5 = (char)uVar21;
    }
    if (param_4 == (long *)0x0) {
      uVar13 = CONCAT71((int7)(uVar13 >> 8),(int)local_b0 != 0);
      if (((char)local_9c == '\x01' && (int)local_b0 == 0) && (local_c0 == (long *)0x0)) {
        lVar22 = param_1[0xb];
        lVar12 = plVar16[7];
        local_128 = (undefined4)*local_c8;
        uStack_124 = *(undefined4 *)((long)local_c8 + 4);
        uStack_120 = (undefined4)local_c8[1];
        uStack_11c = *(undefined4 *)((long)local_c8 + 0xc);
        if (local_c8[1] != 0) {
          LOCK();
          plVar11 = (long *)(local_c8[1] + 8);
          *plVar11 = *plVar11 + 1;
          UNLOCK();
        }
        local_a8 = param_4;
        uVar14 = FUN_100227464((int)lVar22,lVar12,&local_128);
        uVar21 = uVar14 & 0xffffffff;
        plVar11 = (long *)CONCAT44(uStack_11c,uStack_120);
        uVar13 = uVar14;
        if (plVar11 != (long *)0x0) {
          LOCK();
          puVar1 = (ulong *)(plVar11 + 1);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar13 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            uVar13 = std::__shared_weak_count::__release_weak();
          }
        }
        param_4 = local_a8;
        if ((cVar5 == '\0') && ((int)uVar14 != 0)) goto LAB_10041a7fd;
      }
    }
    if (((int)param_1[0x260] == 6) && (*(char *)((long)param_1 + 0x1354) == '\x01')) {
      lVar12 = *local_c8;
      lVar22 = local_c8[1];
      if (lVar22 != 0) {
        LOCK();
        *(long *)(lVar22 + 8) = *(long *)(lVar22 + 8) + 1;
        UNLOCK();
      }
      local_a8 = param_4;
      plVar11 = operator_new(0x28);
      *plVar11 = (long)&PTR_FUN_100858090;
      plVar11[1] = (long)param_1;
      plVar11[2] = (long)plVar16;
      plVar11[3] = lVar12;
      plVar11[4] = lVar22;
      local_78 = plVar11;
      uVar7 = FUN_10041bb58(param_1);
      uVar21 = (ulong)uVar7;
      uVar13 = (**(code **)(*plVar11 + 0x28))(plVar11);
      param_4 = local_a8;
      if (uVar7 != 0xffffff80) {
        if (uVar7 == 0) {
          *(undefined4 *)((long)param_1 + 0x1304) = local_dc;
          uVar21 = 0;
        }
        goto LAB_10041a7fd;
      }
    }
    local_b8 = 0;
    bVar17 = 1;
    if (*(char *)((long)param_1 + 0x5c) == '\0') {
      uVar21 = FUN_1002287b5(plVar16[5]);
      bVar23 = local_b8 != 0;
      local_b8 = uVar21;
      if (bVar23) {
        _CFRelease();
      }
      bVar17 = *(byte *)((long)param_1 + 0x5c);
      uVar13 = local_b8;
      if ((local_b8 != 0) || (uVar21 = 0, (bVar17 & 1) != 0)) goto LAB_10041a293;
    }
    else {
LAB_10041a293:
      if (((int)local_b0 != 0) && ((bVar17 & 1) == 0)) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = 0x7a0a90;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xd433;
          uStack_58 = 0x7c;
          uStack_56 = 1;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        uVar13 = FUN_1001782e9(0,0);
        bVar17 = *(byte *)((long)param_1 + 0x5c);
      }
      if ((bVar17 & 1) == 0) {
        lVar12 = param_1[0xb];
        local_118 = (undefined4)*local_c8;
        uStack_114 = *(undefined4 *)((long)local_c8 + 4);
        uStack_110 = (undefined4)local_c8[1];
        uStack_10c = *(undefined4 *)((long)local_c8 + 0xc);
        if (local_c8[1] != 0) {
          LOCK();
          plVar11 = (long *)(local_c8[1] + 8);
          *plVar11 = *plVar11 + 1;
          UNLOCK();
        }
        uVar14 = FUN_100227fd1((int)lVar12,local_b8,&local_118);
        uVar21 = uVar14 & 0xffffffff;
        plVar11 = (long *)CONCAT44(uStack_10c,uStack_110);
        uVar13 = uVar14;
        if (plVar11 != (long *)0x0) {
          LOCK();
          puVar1 = (ulong *)(plVar11 + 1);
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (uVar13 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
            uVar13 = std::__shared_weak_count::__release_weak();
          }
        }
        if ((int)uVar14 != 0) goto LAB_10041a7f1;
      }
      local_d0 = 0;
      if ((int)param_1[0x260] == 6) {
        local_9c = (uint)CONCAT71((int7)(uVar13 >> 8),*(char *)((long)param_1 + 0x1354) == '\0');
      }
      else {
        local_9c = 0;
      }
      lVar12 = plVar16[4];
      bVar24 = (int)local_b0 != 2;
      bVar23 = bVar24 && lVar12 != 0;
      local_a8 = param_4;
      if (local_c0 == (long *)0x0) {
        if (((bool)(~bVar23 & 1) || (char)local_9c != '\0') ||
           (cVar5 = FUN_1004197a4(plVar16[5],&local_d0,local_138), cVar5 != '\0')) {
          iVar8 = FUN_10024a34a(plVar16,&local_f0);
          if ((iVar8 != -0x80) && (iVar8 != 0)) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_4_ = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x400;
              uStack_5a = (undefined2)iVar8;
              uStack_58 = (undefined2)((uint)iVar8 >> 0x10);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_68,0x12);
            }
          }
          iVar8 = FUN_10024a696(plVar16 + 2,&local_e8);
          if ((iVar8 != -0x80) && (iVar8 != 0)) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_4_ = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x400;
              uStack_5a = (undefined2)iVar8;
              uStack_58 = (undefined2)((uint)iVar8 >> 0x10);
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_68,0x12);
            }
          }
          uVar10 = local_f0;
          if ((int)local_b0 == 2) {
            lVar22 = 0;
          }
          else {
            lVar22 = plVar16[4];
          }
          local_b0 = local_e8;
          uVar15 = FUN_1001705fc(local_d0);
          local_68._0_4_ = (undefined4)uVar15;
          local_68._4_4_ = (undefined4)((ulong)uVar15 >> 0x20);
          uVar15 = FUN_1001705fc(lVar22);
          uStack_60 = (undefined4)uVar15;
          uStack_5c = (undefined2)((ulong)uVar15 >> 0x20);
          uStack_5a = (undefined2)((ulong)uVar15 >> 0x30);
          uVar10 = FUN_1001705fc(uVar10);
          uStack_58 = (undefined2)uVar10;
          uStack_56 = (undefined4)((ulong)uVar10 >> 0x10);
          local_52 = (undefined2)((ulong)uVar10 >> 0x30);
          local_50 = FUN_1001705fc(local_b0);
          local_48 = (long *)CONCAT71(local_48._1_7_,(char)local_9c);
          FUN_10017060f(local_f0);
          FUN_10017060f(local_e8);
          lVar4 = param_1[0xb];
          lVar22 = plVar16[5];
          puVar19 = (undefined8 *)0x2d;
          if (local_a8 == (long *)0x0) {
            puVar19 = (undefined8 *)0x0;
          }
          lVar3 = plVar16[6];
          puVar20 = (undefined8 *)0x0;
          if (bVar24 && lVar12 != 0) {
            puVar20 = &local_68;
          }
          local_108 = (undefined4)*local_c8;
          uStack_104 = *(undefined4 *)((long)local_c8 + 4);
          uStack_100 = (undefined4)local_c8[1];
          uStack_fc = *(undefined4 *)((long)local_c8 + 0xc);
          if (local_c8[1] != 0) {
            LOCK();
            plVar11 = (long *)(local_c8[1] + 8);
            *plVar11 = *plVar11 + 1;
            UNLOCK();
          }
          uVar7 = FUN_100222d8f((int)lVar4,local_a8 != (long *)0x0,lVar22,lVar3,puVar19,puVar20,
                                param_1,&local_108);
          uVar21 = (ulong)uVar7;
          plVar11 = (long *)CONCAT44(uStack_fc,uStack_100);
          if (plVar11 != (long *)0x0) {
            LOCK();
            plVar2 = plVar11 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (uVar7 == 0) {
            FUN_10041b38c(param_1,plVar16,bVar23,(char)local_9c);
            uVar7 = *(uint *)(param_1 + 0x260);
            plVar16 = (long *)FUN_10039a28c();
            uVar10 = (**(code **)(*plVar16 + 0x58))(plVar16);
            uVar9 = (**(code **)(*param_1 + 0x50))(param_1);
            FUN_1001c6987(uVar10,0x73776473,(uVar7 & 0xfffffffe) == 6,uVar9,0);
          }
          FUN_100426032(&local_68);
        }
        else {
          FUN_10041b38c(param_1,plVar16,bVar23,0);
          uVar7 = FUN_10041ad60(local_138[0],param_1);
          uVar21 = (ulong)uVar7;
        }
      }
      else {
        uVar21 = 0;
        FUN_10041b38c(param_1,plVar16,bVar23,(char)local_9c);
      }
      FUN_10014d890(&local_d0);
    }
LAB_10041a7f1:
    FUN_10014d890(&local_b8);
  }
  else {
    uVar6 = FUN_10024f5ea(param_1 + 0x99,(int)param_1[0xb],0,1,1,0,0,&local_d8);
    uVar21 = (ulong)uVar6;
    uVar7 = 0xffffff80;
    if (uVar6 != 0x5ca) {
      uVar7 = uVar6;
    }
    if (uVar7 == 0xffffff80) {
      uVar21 = 0xffffff80;
    }
    else if (uVar7 == 0) {
      if (local_d8 == 0) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_68._0_4_ = 0x8220202;
          local_68._4_4_ = 0x7a0a90;
          uStack_60 = 1;
          uStack_5c = 0x822;
          uStack_5a = 0xd3a1;
          uStack_58 = 0x7c;
          uStack_56 = 1;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        uVar21 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        uVar7 = FUN_10041b42a(param_1,local_d8,1,1,local_c0);
        uVar21 = (ulong)uVar7;
        if (uVar7 != 0xffffff80) {
          if (uVar7 == 0) {
            cVar5 = FUN_100173f7c(plVar16[5],&cf_protected);
            if (cVar5 == '\0') goto LAB_10041a02a;
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_68._0_4_ = 0x8220202;
              local_68._4_4_ = 0x7a0a90;
              uStack_60 = 1;
              uStack_5c = 0x822;
              uStack_5a = 0xd3cb;
              uStack_58 = 0x7c;
              uStack_56 = 1;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar21 = 0x660;
          }
          else {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              uStack_5a = (undefined2)uVar7;
              uStack_58 = (undefined2)(uVar7 >> 0x10);
              goto LAB_10041a0ce;
            }
          }
        }
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        uStack_5a = (undefined2)uVar7;
        uStack_58 = (undefined2)(uVar7 >> 0x10);
LAB_10041a0ce:
        uStack_60 = 1;
        local_68._4_4_ = 0x7a0a90;
        uStack_5c = 0x400;
        local_68._0_4_ = 0x8220202;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
  }
LAB_10041a7fd:
  FUN_10017060f(local_d8);
LAB_10041a809:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar21;
}

