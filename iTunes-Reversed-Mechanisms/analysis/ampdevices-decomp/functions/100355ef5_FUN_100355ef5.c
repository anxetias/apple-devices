// name: FUN_100355ef5
// address: 100355ef5

int FUN_100355ef5(long param_1,long param_2,long param_3,int param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 *local_a0;
  long local_98;
  long *local_90;
  long local_88;
  long *plStack_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  bVar4 = (byte)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a8 = param_5;
  if (param_3 == 0 && param_4 != 3) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      local_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      uStack_4a = 0x29f9;
      uStack_48 = 0x7c;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_1003565ea;
  }
  if (param_3 == 0) {
    param_3 = param_2;
  }
  local_58 = 0;
  uStack_54 = 0;
  iVar6 = FUN_100354991(param_3);
  local_70 = 0;
  if (iVar6 == 0) {
    local_70 = FUN_100170ef7(CONCAT44(uStack_54,local_58));
    FUN_10017060f(CONCAT44(uStack_54,local_58));
  }
  if ((bVar4 & 0xfe) == 2) {
    lVar7 = FUN_100353aeb(*(undefined8 *)(param_1 + 0x66c0),param_2);
    if (lVar7 == 0) {
LAB_1003561a6:
      if (bVar4 != 3) goto LAB_1003561b0;
    }
    else {
      if (bVar4 != 2) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          FUN_100486d8f(&local_58,param_2);
          uVar8 = FUN_1001b83ae(&local_58);
          uStack_64 = (undefined4)uVar8;
          uStack_60 = (undefined4)((ulong)uVar8 >> 0x20);
          pcVar10 = "artwork> deleting artwork for playlist \"%{public}s\"";
LAB_100356121:
          local_68 = 0x8220102;
          __os_log_impl(0x100000000,uVar9,1,pcVar10,&local_68,0xc);
          FUN_1001b7a50(&local_58);
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
        }
LAB_10035614b:
        uVar9 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          uStack_54 = *(undefined4 *)(lVar7 + 0x18);
          local_58 = 0x4000100;
          __os_log_impl(0x100000000,uVar9,1,"artwork> deleting artwork record id %u",&local_58,8);
        }
        *(undefined1 *)(lVar7 + 0x83) = 1;
        *(undefined1 *)(param_1 + 0x6af8) = 1;
        goto LAB_1003561a6;
      }
      if ((int)local_70 != *(int *)(lVar7 + 0x94)) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar9 = DAT_1008c75b8;
        cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar5 != '\0') {
          FUN_100486d8f(&local_58,param_2);
          uVar8 = FUN_1001b83ae(&local_58);
          uStack_64 = (undefined4)uVar8;
          uStack_60 = (undefined4)((ulong)uVar8 >> 0x20);
          pcVar10 = "artwork> replacing artwork for playlist \"%{public}s\"";
          goto LAB_100356121;
        }
        goto LAB_10035614b;
      }
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      FUN_100486d8f(&local_58,param_2);
      uVar8 = FUN_1001b83ae(&local_58);
      local_68 = 0x8220102;
      uStack_64 = (undefined4)uVar8;
      uStack_60 = (undefined4)((ulong)uVar8 >> 0x20);
      __os_log_impl(0x100000000,uVar9,1,"artwork> adding artwork for playlist \"%{public}s\"",
                    &local_68,0xc);
      FUN_1001b7a50(&local_58);
    }
LAB_1003561b0:
    if (*(long *)(param_1 + 0x66c8) == 0) {
      iVar6 = FUN_1003574ff(param_1 + 0x4ed8);
      if (iVar6 == -0x80) goto LAB_1003565ea;
      if (iVar6 != 0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar6;
          uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_1003565ea;
      }
    }
    local_a0 = (undefined8 *)(param_1 + 0x66c8);
    lVar7 = FUN_100497d69(*(undefined8 *)(param_1 + 0x66c0),0);
    if (lVar7 == 0) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        local_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        uStack_4a = 0x7b90;
        uStack_48 = 0x7b;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar6 = -0x6c;
      goto LAB_1003565ea;
    }
    FUN_1004987ec(lVar7,*(undefined8 *)(param_2 + 0x60));
    *(int *)(lVar7 + 0x94) = (int)local_70;
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      uVar3 = *(undefined4 *)(lVar7 + 0x18);
      FUN_100486d8f(&local_68,param_2);
      uVar8 = FUN_1001b83ae(&local_68);
      local_58 = 0x4000202;
      local_50 = 0x822;
      uStack_4e = (undefined2)uVar8;
      uStack_4c = (undefined2)((ulong)uVar8 >> 0x10);
      uStack_4a = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_48 = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_54 = uVar3;
      __os_log_impl(0x100000000,uVar9,1,
                    "artwork> creating new artwork record id %u for playlist \"%{public}s\"",
                    &local_58,0x12);
      FUN_1001b7a50(&local_68);
    }
    if (*(int *)(param_1 + 0x4ee8) != 0) {
      FUN_10032f0f2(&local_68);
      local_88 = 0;
      plStack_80 = (long *)0x0;
      FUN_10046d2e2(&local_58,param_2);
      FUN_1001a7b1c(&local_68,&local_58);
      FUN_1001a85d4(&local_58);
      if (CONCAT44(uStack_64,local_68) == 0) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0xd8a6;
          uStack_48 = 0x7b;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar6 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001b52da(&local_58,CONCAT44(uStack_64,local_68),1);
        local_88 = CONCAT44(uStack_54,local_58);
        plStack_80 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,CONCAT22(uStack_4e,local_50)));
        if (local_88 == 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_58 = 0x8220202;
            uStack_54 = 0x7a0a90;
            local_50 = 1;
            uStack_4e = 0;
            uStack_4c = 0x822;
            uStack_4a = 0x52f2;
            uStack_48 = 0x7a;
            uStack_46 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          iVar6 = -0x32;
          FUN_1001782e9(0,0);
        }
        else {
          uVar9 = *local_a0;
          if (plStack_80 != (long *)0x0) {
            LOCK();
            plStack_80[1] = plStack_80[1] + 1;
            UNLOCK();
          }
          local_98 = local_88;
          local_90 = plStack_80;
          FUN_100196476(local_c0);
          iVar6 = FUN_10023d282(uVar9,&local_98,0,local_c0,local_a8,0);
          FUN_1001966e2(local_c0);
          if (local_90 != (long *)0x0) {
            LOCK();
            plVar1 = local_90 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*local_90 + 0x10))(local_90);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar6 != -0x80) {
            if (iVar6 != 0) {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                local_50 = 1;
                uStack_4e = 0;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
              if (iVar6 != 0) goto LAB_1003565b5;
            }
            iVar6 = FUN_1003578c9(param_1,lVar7,0,0,param_1 + 0x4ed8,
                                  *(undefined8 *)(param_1 + 0x66c8));
            if ((iVar6 != -0x80) && (iVar6 != 0)) {
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                local_50 = 1;
                uStack_4e = 0;
                uStack_4c = 0x400;
                uStack_4a = (undefined2)iVar6;
                uStack_48 = (undefined2)((uint)iVar6 >> 0x10);
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
          }
        }
      }
LAB_1003565b5:
      if (plStack_80 != (long *)0x0) {
        LOCK();
        plVar1 = plStack_80 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plStack_80 + 0x10))(plStack_80);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a85d4(&local_68);
      goto LAB_1003565ea;
    }
  }
  iVar6 = 0;
LAB_1003565ea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

