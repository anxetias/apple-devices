// name: FUN_100354d30
// address: 100354d30

int FUN_100354d30(long param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4,
                 int param_5,undefined8 param_6)

{
  byte bVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined1 local_e8 [24];
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  long *plStack_b0;
  undefined8 *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  local_90 = 0;
  if (param_3 == (undefined8 *)0x0 && param_5 != 3) {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      local_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0x290e;
      uStack_58 = 0x7c;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x32;
    goto LAB_1003551b0;
  }
  bVar1 = (byte)param_5;
  if (param_3 == (undefined8 *)0x0) {
    param_3 = param_2;
  }
  local_94 = param_4;
  local_88 = param_6;
  local_70 = param_2;
  uVar4 = FUN_1005d1c9c(param_3);
  puVar12 = local_70;
  local_78 = CONCAT44(local_78._4_4_,uVar4);
  if ((bVar1 & 0xfe) == 2) {
    lVar7 = FUN_1003539f0(*(undefined8 *)(param_1 + 0x66c0),local_70);
    if (lVar7 == 0) {
LAB_10035500c:
      puVar12 = local_70;
      if (bVar1 != 3) goto LAB_100355022;
    }
    else {
      if (bVar1 != 2) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          FUN_100476ac1(&local_68,local_70);
          uVar8 = FUN_1001b83ae(&local_68);
          uStack_44 = (undefined4)uVar8;
          uStack_40 = (undefined4)((ulong)uVar8 >> 0x20);
          pcVar11 = "artwork> deleting artwork for track \"%{public}s\"";
LAB_100354f52:
          local_48 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,pcVar11,&local_48,0xc);
          FUN_1001b7a50(&local_68);
        }
LAB_100354f6e:
        *(undefined4 *)((long)local_70 + 0x174) = 0;
        FUN_1002fef76();
        if ((*(int *)(lVar7 + 0x1c) == 0) ||
           (iVar5 = *(int *)(lVar7 + 0x1c) + -1, *(int *)(lVar7 + 0x1c) = iVar5, iVar5 == 0)) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar3 != '\0') {
            uStack_64 = *(undefined4 *)(lVar7 + 0x18);
            local_68 = 0x4000100;
            __os_log_impl(0x100000000,uVar9,1,"artwork> deleting artwork record id %u",&local_68,8);
          }
          *(undefined1 *)(lVar7 + 0x83) = 1;
          *(undefined1 *)(param_1 + 0x6af8) = 1;
        }
        FUN_100496f8c(*(undefined8 *)(param_1 + 0x66c0),1);
        goto LAB_10035500c;
      }
      if ((int)local_78 != *(int *)(lVar7 + 0x94)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          FUN_100476ac1(&local_68,local_70);
          uVar8 = FUN_1001b83ae(&local_68);
          uStack_44 = (undefined4)uVar8;
          uStack_40 = (undefined4)((ulong)uVar8 >> 0x20);
          pcVar11 = "artwork> replacing artwork for track \"%{public}s\"";
          goto LAB_100354f52;
        }
        goto LAB_100354f6e;
      }
    }
    plVar13 = (long *)0x0;
    lVar7 = 0;
    iVar5 = 0;
    goto LAB_10035515c;
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar3 != '\0') {
    FUN_100476ac1(&local_68,puVar12);
    uVar8 = FUN_1001b83ae(&local_68);
    local_48 = 0x8220102;
    uStack_44 = (undefined4)uVar8;
    uStack_40 = (undefined4)((ulong)uVar8 >> 0x20);
    __os_log_impl(0x100000000,uVar9,1,"artwork> adding artwork for track \"%{public}s\"",&local_48,
                  0xc);
    FUN_1001b7a50(&local_68);
  }
LAB_100355022:
  local_a0 = (undefined8 *)(param_1 + 0x66c8);
  if (*(long *)(param_1 + 0x66c8) == 0) {
    iVar5 = FUN_1003574ff(param_1 + 0x4ed8,local_a0);
    if (iVar5 != -0x80) {
      puVar12 = local_70;
      if (iVar5 == 0) goto LAB_10035503e;
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        local_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x400;
        uStack_5a = (undefined2)iVar5;
        uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
LAB_100355159:
    plVar13 = (long *)0x0;
    lVar7 = 0;
  }
  else {
LAB_10035503e:
    iVar5 = 0;
    if (((*(long *)(param_1 + 0x66d0) == 0) && (*(int *)(param_1 + 0x5860) != 0)) &&
       (iVar6 = FUN_1003574ff(param_1 + 0x5850,param_1 + 0x66d0), puVar12 = local_70, iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x5860) = 0;
      iVar5 = iVar6;
    }
    lVar7 = FUN_1003541e0(param_1,puVar12,param_3);
    if (lVar7 != 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar9 = DAT_1008c75b8;
      cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar3 != '\0') {
        uVar4 = *(undefined4 *)(lVar7 + 0x18);
        FUN_100476ac1(&local_48,local_70);
        uVar8 = FUN_1001b83ae(&local_48);
        local_68 = 0x4000202;
        local_60 = 0x822;
        uStack_5e = (undefined2)uVar8;
        uStack_5c = (undefined2)((ulong)uVar8 >> 0x10);
        uStack_5a = (undefined2)((ulong)uVar8 >> 0x20);
        uStack_58 = (undefined2)((ulong)uVar8 >> 0x30);
        uStack_64 = uVar4;
        __os_log_impl(0x100000000,uVar9,1,
                      "artwork> using existing artwork record id %u for track \"%{public}s\"",
                      &local_68,0x12);
        FUN_1001b7a50(&local_48);
      }
      *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
      FUN_100496f8c(*(undefined8 *)(lVar7 + 0x10),1);
      *(undefined4 *)((long)local_70 + 0x174) = *(undefined4 *)(lVar7 + 0x18);
      FUN_1002fef76();
      goto LAB_100355159;
    }
    local_80 = FUN_100497d69(*(undefined8 *)(param_1 + 0x66c0),0);
    if (local_80 == 0) {
      uVar9 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar9,0x10);
      if (cVar3 != '\0') {
        local_68 = 0x8220202;
        uStack_64 = 0x7a0a90;
        local_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x822;
        uStack_5a = 0x7b90;
        uStack_58 = 0x7b;
        uStack_56 = 1;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      iVar5 = -0x6c;
      goto LAB_100355159;
    }
    FUN_1004987ec(local_80,*local_70);
    *(int *)(local_80 + 0x94) = (int)local_78;
    *(undefined4 *)((long)local_70 + 0x174) = *(undefined4 *)(local_80 + 0x18);
    *(undefined4 *)(local_80 + 0x1c) = 1;
    uVar4 = FUN_1004744bf(local_70,0);
    *(undefined4 *)(local_80 + 0xac) = uVar4;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar4 = *(undefined4 *)(local_80 + 0x18);
      FUN_100476ac1(&local_48,local_70);
      uVar8 = FUN_1001b83ae(&local_48);
      local_68 = 0x4000202;
      local_60 = 0x822;
      uStack_5e = (undefined2)uVar8;
      uStack_5c = (undefined2)((ulong)uVar8 >> 0x10);
      uStack_5a = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_58 = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_64 = uVar4;
      __os_log_impl(0x100000000,uVar9,1,
                    "artwork> creating new artwork record id %u for track \"%{public}s\"",&local_68,
                    0x12);
      FUN_1001b7a50(&local_48);
    }
    FUN_1002fef76(local_70);
    cVar3 = FUN_100353805(param_1,param_3);
    if ((cVar3 == '\0') || (*(int *)(param_1 + 0x5860) == 0)) {
      local_78 = CONCAT71(local_78._1_7_,1);
      plVar13 = (long *)0x0;
      lVar7 = 0;
LAB_100355402:
      cVar3 = FUN_100353841(param_1,param_3);
      if (cVar3 == '\0' && (char)local_94 == '\0') {
        if ((byte)local_78 != '\0') goto LAB_10035554b;
        iVar5 = FUN_1003575b9(param_1,local_80,*(undefined8 *)(lVar7 + 0x4cac),param_3,1,local_88);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) goto LAB_10035554b;
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            uStack_5a = (undefined2)iVar5;
            uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
            goto LAB_1003558b6;
          }
        }
      }
      else if (*(int *)(param_1 + 0x4ee8) == 0) {
LAB_10035554b:
        if ((param_3 != local_70) && (local_70[2] != 0)) {
          if (local_70[2] != *(long *)(param_1 + 0x30)) {
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            if (cVar3 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              local_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x1eb6;
              uStack_58 = 0x7c;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
          }
          lVar10 = FUN_100597c13(local_70,0);
          if (lVar10 == 0) {
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            if (cVar3 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              local_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x8e77;
              uStack_58 = 0x7b;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else {
            local_78 = FUN_1005974ad(param_3,0);
            if ((local_78 == 0) && (local_78 = param_3[0xb], local_78 == 0)) {
              uVar9 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar9,0x10);
              if (cVar3 != '\0') {
                local_68 = 0x8220202;
                uStack_64 = 0x7a0a90;
                local_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                uStack_5a = 0x1de5;
                uStack_58 = 0x7c;
                uStack_56 = 1;
                uStack_54 = 0;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else if ((*(short *)(lVar10 + 0x74) != 0) &&
                    ((*(int *)(lVar10 + 0x78) != 0 &&
                     (*(int *)(lVar10 + 0x78) != *(int *)(local_78 + 0x78))))) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar9 = DAT_1008c75b8;
              cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar3 != '\0') {
                FUN_100476ac1(&local_48,local_70);
                uVar8 = FUN_1001b83ae(&local_48);
                local_68 = 0x8220302;
                uStack_64 = (undefined4)uVar8;
                local_60 = (undefined2)((ulong)uVar8 >> 0x20);
                uStack_5e = (undefined2)((ulong)uVar8 >> 0x30);
                uStack_5c = 0x400;
                uStack_5a = (undefined2)*(undefined4 *)(lVar10 + 0x78);
                uStack_58 = (undefined2)((uint)*(undefined4 *)(lVar10 + 0x78) >> 0x10);
                uStack_56 = 0x400;
                uStack_54 = (undefined2)*(undefined4 *)(local_78 + 0x78);
                uStack_52 = (undefined2)((uint)*(undefined4 *)(local_78 + 0x78) >> 0x10);
                __os_log_impl(0x100000000,uVar9,1,
                              "artwork> artwork size for track \"%{public}s\" changed from %u to %u"
                              ,&local_68,0x18);
                FUN_1001b7a50(&local_48);
              }
              *(undefined4 *)(lVar10 + 0x78) = *(undefined4 *)(local_78 + 0x78);
            }
          }
        }
      }
      else {
        iVar5 = FUN_100354428(param_3,&local_90);
        if (iVar5 == 0) {
          FUN_1001b52da(&local_48,local_90,1);
          if (CONCAT44(uStack_44,local_48) == 0) {
            uVar9 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar9,0x10);
            if (cVar3 != '\0') {
              local_68 = 0x8220202;
              uStack_64 = 0x7a0a90;
              local_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              uStack_5a = 0x52f2;
              uStack_58 = 0x7a;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
            }
            iVar5 = -0x32;
            FUN_1001782e9(0,0);
          }
          else {
            uVar9 = *local_a0;
            local_c0 = CONCAT44(uStack_3c,uStack_40);
            if (local_c0 != 0) {
              LOCK();
              *(long *)(local_c0 + 8) = *(long *)(local_c0 + 8) + 1;
              UNLOCK();
            }
            local_c8 = CONCAT44(uStack_44,local_48);
            FUN_100196476(local_e8);
            iVar5 = FUN_10023d282(uVar9,&local_c8,0,local_e8,local_88,0);
            FUN_1001966e2(local_e8);
            FUN_100205d70(&local_c8);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                iVar5 = FUN_1003578c9(param_1,local_80,param_3,(byte)local_78 - 1,param_1 + 0x4ed8,
                                      *(undefined8 *)(param_1 + 0x66c8));
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    FUN_100205d70(&local_48);
                    iVar5 = 0;
                    goto LAB_10035554b;
                  }
                  uVar9 = FUN_1001cc310();
                  cVar3 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar3 != '\0') {
                    uStack_5a = (undefined2)iVar5;
                    uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
                    goto LAB_100355cbc;
                  }
                }
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar9,0x10);
                if (cVar3 != '\0') {
                  uStack_5a = (undefined2)iVar5;
                  uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
LAB_100355cbc:
                  uStack_5c = 0x400;
                  uStack_5e = 0;
                  local_60 = 1;
                  uStack_64 = 0x7a0a90;
                  local_68 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,
                                      0x12);
                }
              }
            }
          }
          FUN_100205d70(&local_48);
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            uStack_5a = (undefined2)iVar5;
            uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
LAB_1003558b6:
            uStack_5c = 0x400;
            uStack_5e = 0;
            local_60 = 1;
            uStack_64 = 0x7a0a90;
            local_68 = 0x8220202;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_68,0x12);
          }
        }
      }
    }
    else {
      local_78 = CONCAT71(local_78._1_7_,1);
      FUN_100241e02(&local_68,param_3[0xb],0x20,0,0,0);
      plVar2 = (long *)CONCAT44(uStack_64,local_68);
      plVar13 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,CONCAT22(uStack_5e,local_60)));
      local_b8 = plVar2;
      plStack_b0 = plVar13;
      if (plVar2 == (long *)0x0) {
        uVar9 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar9,0x10);
        if (cVar3 != '\0') {
          local_68 = 0x8220202;
          uStack_64 = 0x7a0a90;
          local_60 = 1;
          uStack_5e = 0;
          uStack_5c = 0x822;
          uStack_5a = 0x8eb6;
          uStack_58 = 0x7b;
          uStack_56 = 1;
          uStack_54 = 0;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
        }
        lVar7 = 0;
        FUN_1001782e9(0,0);
        iVar5 = -0x32;
      }
      else {
        lVar7 = FUN_1003ae1f8();
        if (lVar7 == 0) {
          iVar5 = -0x6c;
          goto LAB_1003557b4;
        }
        uVar4 = FUN_10047fc8b(param_3);
        iVar5 = (**(code **)(*plVar2 + 0x88))(plVar2,8,uVar4,0,0,lVar7 + 0x4ca8,0);
        if (iVar5 != -0x80) {
          if (iVar5 == 0) {
            if (*(long *)(lVar7 + 0x4cac) == 0) {
              iVar5 = -0x32;
LAB_1003557b4:
              local_d0 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(local_d0,0x10);
              if (cVar3 != '\0') {
                local_68 = 0x8220202;
                uStack_64 = 0x7a0a90;
                local_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x400;
                uStack_5a = (undefined2)iVar5;
                uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
                __os_log_error_impl(0x100000000,local_d0,0x10,"%{public}s: err == (%d)",&local_68,
                                    0x12);
              }
              if (iVar5 != 0) goto LAB_100355402;
            }
            else {
              iVar5 = FUN_1003575b9(param_1,local_80,*(long *)(lVar7 + 0x4cac),param_3,0,local_88);
              if (iVar5 == -0x80) goto LAB_100355402;
              if (iVar5 != 0) goto LAB_1003557b4;
            }
            local_78 = CONCAT71(local_78._1_7_,*(short *)(local_80 + 0x62) == 0);
            iVar5 = 0;
            goto LAB_100355402;
          }
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            uStack_5a = (undefined2)iVar5;
            uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
            goto LAB_1003558b6;
          }
        }
      }
    }
  }
LAB_10035515c:
  FUN_10017060f(local_90);
  if (lVar7 != 0) {
    FUN_1003ae783(lVar7 + 0x4ca8);
    FUN_1001c64c1(lVar7);
    plVar13 = plStack_b0;
  }
  if (plVar13 != (long *)0x0) {
    LOCK();
    plVar2 = plVar13 + 1;
    lVar7 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar7 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1003551b0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

