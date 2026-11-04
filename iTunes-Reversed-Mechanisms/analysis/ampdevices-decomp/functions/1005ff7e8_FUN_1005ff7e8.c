// name: FUN_1005ff7e8
// address: 1005ff7e8

int FUN_1005ff7e8(long *param_1,int param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long local_78;
  long *local_70;
  long local_68;
  long *local_60;
  long local_58;
  long *plStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined8 local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 1) {
    if (*param_3 != 0) {
      lVar5 = ___dynamic_cast(*param_3,&PTR_DAT_10083e678,&PTR_DAT_1008706b0,0);
      if (lVar5 != 0) {
        plVar1 = (long *)param_3[1];
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar1[1] = plVar1[1] + 1;
          UNLOCK();
        }
        local_58 = lVar5;
        plStack_50 = plVar1;
        if (*(char *)(lVar5 + 0x48) == '\0') {
          uVar6 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar6,0x10);
          if (cVar3 != '\0') {
            local_48 = 0x8220202;
            local_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3e = 0;
            uStack_3c = 0x822;
            local_3a = "scData->IsWaitingForCompletion() == true";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar1[1] = plVar1[1] + 1;
          UNLOCK();
        }
        local_68 = lVar5;
        local_60 = plVar1;
        iVar4 = FUN_10044e364(param_1,&local_68);
        if (local_60 != (long *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar5 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar5 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar4 == 0) {
          iVar4 = 0;
          if (*(int *)(local_58 + 0x68) != 0) {
            FUN_1005fe7c4(param_1);
          }
        }
        goto LAB_1005ff96e;
      }
    }
    goto LAB_1005ff961;
  }
  if (param_2 != 2) {
    uVar6 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      local_3a = "0";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar6 = DAT_1008c7d18;
    cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    iVar4 = -0x32;
    if (cVar3 != '\0') {
      uVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      local_48 = 0x8200202;
      local_44 = (undefined4)uVar8;
      uStack_40 = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_3e = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,param_2);
      __os_log_impl(0x100000000,uVar6,0x10,"**ERROR**: Unknown or unhandled CommandType:%s %d",
                    &local_48,0x12);
    }
    goto LAB_1005ffa40;
  }
  if (*param_3 == 0) {
LAB_1005ff961:
    local_58 = 0;
    plStack_50 = (long *)0x0;
    iVar4 = -0x32;
  }
  else {
    lVar5 = ___dynamic_cast(*param_3,&PTR_DAT_10083e678,&PTR_DAT_100870748,0);
    if (lVar5 == 0) goto LAB_1005ff961;
    plVar1 = (long *)param_3[1];
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar1[1] = plVar1[1] + 1;
      UNLOCK();
    }
    local_58 = lVar5;
    plStack_50 = plVar1;
    if ((char)param_1[0x1b] == '\0') {
      cVar3 = FUN_1001c19cd();
      if (cVar3 != '\0') goto LAB_1005ff878;
      FUN_100238ca8(&local_48,param_1 + 7);
      lVar2 = param_1[0x15];
      FUN_10015a142(&local_48);
      *(int *)(lVar5 + 0x58) = (int)lVar2;
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar6 = DAT_1008c7d18;
      cVar3 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar3 != '\0') {
        local_44 = *(undefined4 *)(lVar5 + 0x58);
        local_48 = 0x4000200;
        uStack_40 = 0x400;
        uStack_3e = (undefined2)*(undefined4 *)(lVar5 + 0x54);
        uStack_3c = (undefined2)((uint)*(undefined4 *)(lVar5 + 0x54) >> 0x10);
        __os_log_impl(0x100000000,uVar6,0,
                      "amplc> Fetching changes from AMPLibraryAgent starting at revision:%u. pushRev:%u"
                      ,&local_48,0xe);
      }
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar1[1] = plVar1[1] + 1;
        UNLOCK();
      }
      local_78 = lVar5;
      local_70 = plVar1;
      iVar4 = FUN_10044e7c4(param_1,&local_78);
      if (local_70 != (long *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar5 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar5 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar6 = DAT_1008c7d18;
      if (iVar4 == -0x80) {
        cVar3 = _os_log_type_enabled(DAT_1008c7d18,0);
        if (cVar3 != '\0') {
          local_44 = *(undefined4 *)(local_58 + 0x58);
          local_48 = 0x4000200;
          uStack_40 = 0x400;
          uStack_3e = (undefined2)*(undefined4 *)(local_58 + 0x54);
          uStack_3c = (undefined2)((uint)*(undefined4 *)(local_58 + 0x54) >> 0x10);
          __os_log_impl(0x100000000,uVar6,0,
                        "amplc> Fetched changes from AMPLibraryAgent starting at revision:%u was canceled. pushRev:%u"
                        ,&local_48,0xe);
        }
        goto LAB_1005ff878;
      }
      if (iVar4 == 0) {
        iVar4 = 0;
        cVar3 = _os_log_type_enabled(DAT_1008c7d18,0);
        if (cVar3 != '\0') {
          local_44 = *(undefined4 *)(local_58 + 0x58);
          local_48 = 0x4000300;
          uStack_3e = (undefined2)*(undefined4 *)(local_58 + 0x5c);
          uStack_3c = (undefined2)((uint)*(undefined4 *)(local_58 + 0x5c) >> 0x10);
          local_3a._0_6_ = CONCAT42(*(undefined4 *)(local_58 + 0x54),0x400);
          pcVar7 = 
          "amplc> Fetched changes from AMPLibraryAgent starting at revision:%u to newRevision:%u. pushRev:%u"
          ;
          iVar4 = 0;
          uVar8 = 0;
          uVar9 = 0x14;
LAB_1005ffcbf:
          uStack_40 = 0x400;
          __os_log_impl(0x100000000,uVar6,uVar8,pcVar7,&local_48,uVar9);
        }
      }
      else {
        cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        if (cVar3 != '\0') {
          local_44 = *(undefined4 *)(local_58 + 0x58);
          local_48 = 0x4000200;
          uStack_3e = (undefined2)iVar4;
          uStack_3c = (undefined2)((uint)iVar4 >> 0x10);
          pcVar7 = "**ERROR**: FetchChangesFromLibrary(%u) failed! status:%d";
          uVar8 = 0x10;
          uVar9 = 0xe;
          goto LAB_1005ffcbf;
        }
      }
    }
    else {
LAB_1005ff878:
      iVar4 = -0x80;
    }
  }
LAB_1005ff96e:
  if (plStack_50 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1005ffa40:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

