// name: FUN_10044d3e6
// address: 10044d3e6

undefined4 FUN_10044d3e6(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ID IVar13;
  __shared_weak_count **pp_Var14;
  undefined8 uVar15;
  undefined8 uVar16;
  __shared_weak_count *p_Var17;
  char *pcVar18;
  shared_ptr<AMPLibraryEventsDelegate> sVar19;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  __shared_weak_count *local_88;
  long *local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b811c(param_2);
  IVar13 = _objc_alloc(&objc::class_t::AMPLClientEventsDelegate);
  FUN_1002c3cd0(&local_58,param_1 + 8);
  local_68 = (__shared_weak_count *)CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
  uStack_60 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,CONCAT22(uStack_4e,uStack_50)));
  if (local_68 == (__shared_weak_count *)0x0) {
    pp_Var14 = &local_88;
    p_Var17 = (__shared_weak_count *)0x0;
  }
  else {
    p_Var17 = local_68 + 0x18;
    pp_Var14 = (__shared_weak_count **)&local_68;
    local_88 = p_Var17;
    local_80 = uStack_60;
  }
  *pp_Var14 = (__shared_weak_count *)0x0;
  pp_Var14[1] = (__shared_weak_count *)0x0;
  sVar19.field1_0x8 = p_Var17;
  sVar19.field0_0x0 = (AMPLibraryEventsDelegate *)&local_88;
  IVar13 = AMPLClientEventsDelegate::initWithDelegate_
                     (IVar13,PTR_s_initWithDelegate__10088d1a8,sVar19);
  *(ID *)(param_1 + 0x198) = IVar13;
  if (local_80 != (long *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*local_80 + 0x10))(local_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (uStack_60 != (long *)0x0) {
    LOCK();
    plVar6 = uStack_60 + 1;
    lVar2 = *plVar6;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_60 + 0x10))(uStack_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    local_70 = 0;
    local_78 = 0;
    bVar3 = *(byte *)(param_1 + 0x34);
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar16 = DAT_1008c7d18;
    cVar9 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar9 != '\0') {
      FUN_1001c16ac(&local_68);
      uVar15 = FUN_1001b83ae(&local_68);
      local_58 = 0x202;
      uStack_56 = 0x820;
      uStack_54 = (undefined4)uVar15;
      uStack_50 = (undefined2)((ulong)uVar15 >> 0x20);
      uStack_4e = (undefined2)((ulong)uVar15 >> 0x30);
      uStack_4c = 0x400;
      uStack_4a = (undefined2)*(undefined4 *)(param_1 + 0x30);
      uStack_48 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
      __os_log_impl(0x100000000,uVar16,1,"amplc> creating/registering client:%s with clientID:%u",
                    &local_58,0x12);
      FUN_1001b7a50(&local_68);
    }
    IVar13 = _objc_alloc(PTR__OBJC_CLASS___AMPLMediaAppClient_10082b4e0);
    IVar13 = AMPLMediaAppClient::
             initWithClientInfo_withClientID_withMediaDomains_withEventsDelegate_protocolVersion_error_
                       (IVar13,PTR_s_initWithClientInfo_withClientID__10088d1b0,&cf_AMPDevicesAgent,
                        (ulong)*(uint *)(param_1 + 0x30),(ulong)(bVar3 & 0xf),
                        *(undefined8 *)(param_1 + 0x198),&local_78,&local_70);
    *(ID *)(param_1 + 400) = IVar13;
    if (local_78 != 0) {
      FUN_1001bdca6(&local_58);
      FUN_1001b80b2(param_2,&local_58);
      FUN_1001b7a50(&local_58);
      IVar13 = *(ID *)(param_1 + 400);
    }
    puVar7 = PTR_s_clientID_10088d1b8;
    if (IVar13 != 0) {
      iVar4 = *(int *)(param_1 + 0x30);
      iVar10 = (*(code *)PTR__objc_msgSend_10082c770)(IVar13,PTR_s_clientID_10088d1b8);
      if (iVar4 == iVar10) {
LAB_10044d643:
        FUN_1002c3cd0(&local_58,param_1 + 8);
        local_98 = CONCAT22(uStack_56,local_58);
        uStack_90 = CONCAT22(uStack_4e,uStack_50);
        uStack_8c = CONCAT22(uStack_4a,uStack_4c);
        uStack_94 = uStack_54;
        FUN_1004d91de(&local_68,&local_98,*(undefined8 *)(param_1 + 0xa0),
                      *(undefined1 *)(param_1 + 0x34));
        uVar11 = (undefined4)local_68;
        uVar5 = local_68._4_4_;
        uVar12 = (undefined4)uStack_60;
        uVar8 = uStack_60._4_4_;
        local_68 = (__shared_weak_count *)0x0;
        uStack_60 = (long *)0x0;
        plVar6 = *(long **)(param_1 + 0xf8);
        *(undefined4 *)(param_1 + 0xf0) = uVar11;
        *(undefined4 *)(param_1 + 0xf4) = uVar5;
        *(undefined4 *)(param_1 + 0xf8) = uVar12;
        *(undefined4 *)(param_1 + 0xfc) = uVar8;
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (uStack_60 != (long *)0x0) {
          LOCK();
          plVar6 = uStack_60 + 1;
          lVar2 = *plVar6;
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*uStack_60 + 0x10))(uStack_60);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar6 = (long *)CONCAT44(uStack_8c,uStack_90);
        if (plVar6 != (long *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar2 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        uVar11 = 0;
        if (*(long *)(param_1 + 0xf0) != 0) goto LAB_10044d7f6;
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar16 = DAT_1008c7d18;
        cVar9 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        uVar11 = 0xffffff94;
        if (cVar9 == '\0') goto LAB_10044d7f6;
        local_58 = 0;
        pcVar18 = "**ERROR**: AMPLibraryClientChangeHandler::Create() failed!";
        uVar15 = 2;
      }
      else {
        uVar16 = FUN_1001cc310();
        cVar9 = _os_log_type_enabled(uVar16,0x10);
        if (cVar9 != '\0') {
          local_58 = 0x202;
          uStack_56 = 0x822;
          uStack_54 = 0x7ab58c;
          uStack_50 = 1;
          uStack_4e = 0;
          uStack_4c = 0x822;
          uStack_4a = 0xf270;
          uStack_48 = 0x7c;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar9 = FUN_1001782e9(0,0);
        if (cVar9 != '\0') goto LAB_10044d643;
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar16 = DAT_1008c7d18;
        cVar9 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        uVar11 = 0x234f;
        if (cVar9 == '\0') goto LAB_10044d7f6;
        uVar5 = *(undefined4 *)(param_1 + 0x30);
        uVar12 = (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)(param_1 + 400),puVar7);
        local_58 = 0x200;
        uStack_56 = 0x400;
        uStack_50 = 0x400;
        uStack_4e = (undefined2)uVar12;
        uStack_4c = (undefined2)((uint)uVar12 >> 0x10);
        pcVar18 = 
        "**ERROR**: mAMPClientID != mLibraryClient.clientID!  mAMPClientID:%u  mLibraryClient.clientID:%u"
        ;
        uVar15 = 0xe;
        uStack_54 = uVar5;
      }
      __os_log_impl(0x100000000,uVar16,0x10,pcVar18,&local_58,uVar15);
      goto LAB_10044d7f6;
    }
    if (local_70 != 0) {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar16 = DAT_1008c7d18;
      cVar9 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar9 != '\0') {
        local_58 = 0x102;
        uStack_56 = 0x840;
        uStack_54 = (undefined4)local_70;
        uStack_50 = (undefined2)((ulong)local_70 >> 0x20);
        uStack_4e = (undefined2)((ulong)local_70 >> 0x30);
        __os_log_impl(0x100000000,uVar16,0x10,"**ERROR**: initWithClientInfo failed! error:%@",
                      &local_58,0xc);
      }
      uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(local_70,PTR_s_code_10088bb40);
      goto LAB_10044d7f6;
    }
  }
  uVar11 = 0xffffff94;
LAB_10044d7f6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

