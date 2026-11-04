// name: FUN_1005ffda8
// address: 1005ffda8

void FUN_1005ffda8(long *param_1,int param_2,long *param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_68;
  long *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 2) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = "0";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar7 = DAT_1008c7d18;
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar4 != '\0') {
      uVar8 = (**(code **)(*param_1 + 0x20))(param_1,param_2);
      local_58 = 0x8200202;
      local_54 = (undefined4)uVar8;
      uStack_50 = (undefined2)((ulong)uVar8 >> 0x20);
      uStack_4e = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,param_2);
      __os_log_impl(0x100000000,uVar7,0x10,"**ERROR**: Unknown or unhandled CommandType:%s %d",
                    &local_58,0x12);
    }
    goto LAB_1006000a3;
  }
  if ((*param_3 == 0) ||
     (lVar6 = ___dynamic_cast(*param_3,&PTR_DAT_10083e678,&PTR_DAT_100870748,0), lVar6 == 0))
  goto LAB_1006000a3;
  plVar2 = (long *)param_3[1];
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar2[1] = plVar2[1] + 1;
    UNLOCK();
  }
  local_68 = lVar6;
  local_60 = plVar2;
  if ((char)param_1[0x1b] == '\0') {
    bVar3 = FUN_1001c19cd();
    if ((param_4 == 0 & bVar3) == 0) {
      if (param_4 != -0x80) {
        if (param_4 == 0) {
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar7 = DAT_1008c7d18;
          cVar4 = _os_log_type_enabled(DAT_1008c7d18,0);
          if (cVar4 != '\0') {
            local_54 = *(undefined4 *)(lVar6 + 0x58);
            local_58 = 0x4000300;
            uStack_50 = 0x400;
            uStack_4e = (undefined2)*(undefined4 *)(lVar6 + 0x5c);
            uStack_4c = (undefined2)((uint)*(undefined4 *)(lVar6 + 0x5c) >> 0x10);
            local_4a._0_6_ = CONCAT42(*(undefined4 *)(lVar6 + 0x54),0x400);
            __os_log_impl(0x100000000,uVar7,0,
                          "amplc> Applying the fetched changes from AMPLibraryAgent starting at revision:%u to newRevision:%u. pushRev:%u"
                          ,&local_58,0x14);
          }
          iVar5 = FUN_1005fe9ec(param_1,&local_68);
          if (iVar5 != 0) {
            if (DAT_1008c7d20 != -1) {
              _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
            }
            uVar7 = DAT_1008c7d18;
            cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
            if (cVar4 != '\0') {
              local_54 = *(undefined4 *)(lVar6 + 0x5c);
              local_58 = 0x4000200;
              uStack_50 = 0x400;
              uStack_4e = (undefined2)iVar5;
              uStack_4c = (undefined2)((uint)iVar5 >> 0x10);
              __os_log_impl(0x100000000,uVar7,0x10,
                            "**ERROR**: ApplyChangesFromLibrary(%u) failed! status:%d",&local_58,0xe
                           );
            }
          }
        }
        goto LAB_10060007b;
      }
    }
    else {
LAB_1005ffeeb:
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar7 = DAT_1008c7d18;
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,0);
      if (cVar4 != '\0') {
        local_54 = *(undefined4 *)(lVar6 + 0x58);
        local_58 = 0x4000300;
        uStack_50 = 0x400;
        uStack_4e = (undefined2)*(undefined4 *)(lVar6 + 0x5c);
        uStack_4c = (undefined2)((uint)*(undefined4 *)(lVar6 + 0x5c) >> 0x10);
        local_4a._0_6_ = CONCAT42(*(undefined4 *)(lVar6 + 0x54),0x400);
        __os_log_impl(0x100000000,uVar7,0,
                      "amplc> Fetched changes from AMPLibraryAgent starting at revision:%u  to newRevision:%u was canceled. pushRev:%u"
                      ,&local_58,0x14);
      }
    }
LAB_100600064:
    cVar4 = FUN_1001c19cd();
    if (cVar4 == '\0') {
      FUN_1005fd1ce(param_1,*(undefined4 *)(lVar6 + 0x54),0);
    }
  }
  else {
    if (param_4 == -0x80) goto LAB_100600064;
    if (param_4 == 0) goto LAB_1005ffeeb;
  }
LAB_10060007b:
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1006000a3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

