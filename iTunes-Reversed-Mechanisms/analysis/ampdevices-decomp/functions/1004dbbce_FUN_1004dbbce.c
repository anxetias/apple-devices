// name: FUN_1004dbbce
// address: 1004dbbce

void FUN_1004dbbce(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long local_98;
  long *local_90;
  undefined8 *local_88;
  long *local_80;
  long local_78 [2];
  undefined8 *local_68;
  long *local_60;
  long local_58;
  long *local_50;
  undefined2 local_48;
  undefined2 uStack_46;
  int iStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar5 = FUN_1004dbb86();
  if (cVar5 == '\0') goto LAB_1004dc074;
  cVar5 = FUN_1001c19cd();
  if (cVar5 == '\0') {
LAB_1004dbc55:
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
  }
  else {
    if (DAT_1008c7660 != -1) {
      _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
    }
    uVar7 = DAT_1008c7658;
    cVar5 = _os_log_type_enabled(DAT_1008c7658,1);
    if (cVar5 != '\0') {
      local_48 = 0;
      __os_log_impl(0x100000000,uVar7,1,"ch> (sending changes to library called when quitting)",
                    &local_48,2);
      goto LAB_1004dbc55;
    }
  }
  uVar7 = DAT_1008c7658;
  cVar5 = _os_log_type_enabled(DAT_1008c7658,1);
  if (cVar5 != '\0') {
    local_48 = 0;
    __os_log_impl(0x100000000,uVar7,1,"ch> ----- BEGIN SEND CHANGES -----",&local_48,2);
  }
  FUN_1004dbae6(&local_68,param_1);
  puVar4 = local_68;
  if (local_68 == (undefined8 *)0x0) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x202;
      uStack_46 = 0x822;
      iStack_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x5fea;
      uStack_38 = 0x1007d;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004db798(&local_98,param_1,1);
    if (local_98 == 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x202;
        uStack_46 = 0x822;
        iStack_44 = 0x7a168c;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x5f83;
        uStack_38 = 0x1007d;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar5 = FUN_1001782e9(0,0);
      if (cVar5 != '\0') goto LAB_1004dbd09;
    }
    else {
LAB_1004dbd09:
      local_88 = puVar4;
      local_80 = local_60;
      if (local_60 != (long *)0x0) {
        LOCK();
        local_60[1] = local_60[1] + 1;
        UNLOCK();
      }
      FUN_100580832(local_98,&local_88);
      if (local_80 != (long *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    cVar5 = FUN_1005b1148(local_68[5]);
    if (cVar5 == '\0') {
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar7 = DAT_1008c7658;
      cVar5 = _os_log_type_enabled(DAT_1008c7658,1);
      if (cVar5 != '\0') {
        local_48 = 0;
        __os_log_impl(0x100000000,uVar7,1,"ch>     ----- NO CHANGES TO SEND -----",&local_48,2);
      }
    }
    else {
      (**(code **)*local_68)(local_78,local_68);
      if (local_78[0] == 0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x202;
          uStack_46 = 0x822;
          iStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x1756;
          uStack_38 = 0x1007a;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        (**(code **)(*param_1 + 0x30))(&local_58,param_1);
        if (local_58 == 0) {
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          uVar7 = DAT_1008c7658;
          cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
          if (cVar5 != '\0') {
            local_48 = 0;
            __os_log_impl(0x100000000,uVar7,0x10,
                          "ch> **ERROR**: SendDBChangesToLibraryD - no library client",&local_48,2);
          }
          if (local_58 != 0) goto LAB_1004dbdf3;
          uVar7 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x202;
            uStack_46 = 0x822;
            iStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0x6001;
            uStack_38 = 0x1007d;
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
LAB_1004dbdf3:
          local_48 = 0;
          uStack_46 = 0;
          iStack_44 = 0;
          uStack_40 = 0;
          uStack_3c = 0;
          uStack_3a = 0;
          FUN_100217418(param_1 + 0x12,&local_48);
          plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,uStack_40));
          if (plVar3 != (long *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar2 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (param_1[0x10] != 0) {
            FUN_10057df9e();
          }
          if (DAT_1008c7660 != -1) {
            _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
          }
          uVar7 = DAT_1008c7658;
          cVar5 = _os_log_type_enabled(DAT_1008c7658,1);
          if (cVar5 != '\0') {
            local_48 = 0;
            __os_log_impl(0x100000000,uVar7,1,"ch>     ----- END SEND CHANGES -----",&local_48,2);
          }
          iVar6 = FUN_1005fc90c(local_58,local_78);
          if (iVar6 != 0) {
            if (DAT_1008c7660 != -1) {
              _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
            }
            uVar7 = DAT_1008c7658;
            cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x100;
              uStack_46 = 0x400;
              iStack_44 = iVar6;
              __os_log_impl(0x100000000,uVar7,0x10,
                            "ch> **ERROR**: SendDBChangesToLibraryD - SendDBChangesToLibrary err %d"
                            ,&local_48,8);
            }
          }
        }
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          lVar2 = *plVar3;
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      FUN_1001a8fac(local_78);
    }
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      lVar2 = *plVar3;
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*local_90 + 0x10))(local_90);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1004dc074:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

