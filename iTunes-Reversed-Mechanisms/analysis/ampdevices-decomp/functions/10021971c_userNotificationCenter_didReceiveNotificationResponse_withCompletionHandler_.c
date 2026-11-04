// name: userNotificationCenter:didReceiveNotificationResponse:withCompletionHandler:
// address: 10021971c

/* Function Stack Size: 0x28 bytes */

void UserNotificationsDelegate::
     userNotificationCenter_didReceiveNotificationResponse_withCompletionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  uint uVar9;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_69;
  undefined4 local_68;
  uint uStack_64;
  undefined2 uStack_60;
  ushort uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  uint uStack_58;
  undefined2 uStack_54;
  uint local_52;
  undefined2 local_4e;
  undefined8 local_4c;
  long local_38;
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  local_a0 = (*(code *)puVar3)(param_5);
  local_a8 = uVar5;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_actionIdentifier_10088c2f8);
  local_90 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_notification_10088c300);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_request_10088c2e8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_content_10088c2f0);
  local_98 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar3 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)puVar3)(uVar5);
  puVar3 = PTR_s_isEqualToString__10088bb98;
  local_88 = 0;
  uStack_80 = (long *)0x0;
  local_69 = (*(code *)PTR__objc_msgSend_10082c770)
                       (local_90,PTR_s_isEqualToString__10088bb98,
                        *(undefined8 *)PTR__UNNotificationDismissActionIdentifier_10082c3d8);
  cVar4 = '\0';
  if (local_69 == '\0') {
    cVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                      (local_90,puVar3,
                       *(undefined8 *)PTR__UNNotificationDefaultActionIdentifier_10082c3d0);
    cVar4 = (cVar4 == '\0') + '\x01';
  }
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_userInfo_10088be88);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  FUN_1003bb4c5(&local_68,1,cVar4,uVar5);
  lVar2 = CONCAT44(uStack_64,local_68);
  plVar8 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,CONCAT22(uStack_5e,uStack_60)));
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  uStack_5c = 0;
  uStack_5a = 0;
  local_88 = lVar2;
  uStack_80 = plVar8;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (lVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(uint *)(lVar2 + 0x20);
  }
  if (DAT_1008c75d0 != -1) {
    _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
  }
  uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
  cVar4 = _os_log_type_enabled(uVar5,1);
  if (cVar4 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(local_98,PTR_s_title_10088bf20);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_52 = uVar9 & 0xff;
    uStack_58 = uVar9 >> 8 & 0xff;
    uStack_5e = (ushort)(uVar9 >> 0x10) & 0xff;
    uStack_64 = uVar9 >> 0x18;
    local_68 = 0x4000502;
    uStack_60 = 0x400;
    uStack_5c = 0;
    uStack_5a = 0x400;
    uStack_54 = 0x400;
    local_4e = 0x840;
    local_4c = uVar6;
    __os_log_impl(0x100000000,uVar5,1,"notify> activated: %c%c%c%c \'%@\'",&local_68,0x24);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (lVar2 == 0) {
    uVar5 = FUN_1001cc310();
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a168c;
      uStack_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0xe991;
      uStack_58 = 0x10079;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    cVar4 = FUN_1001782e9(0,0);
    if (cVar4 == '\0') goto LAB_100219b99;
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar8[1] = plVar8[1] + 1;
    UNLOCK();
  }
  FUN_1003bb68d(&local_68,*(undefined4 *)(lVar2 + 0x20));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)CONCAT44(uStack_64,local_68);
  if (local_69 == '\0') {
    if (plVar8 != (long *)0x0) {
      local_b8 = (undefined4)local_88;
      uStack_b4 = local_88._4_4_;
      uStack_b0 = (undefined4)uStack_80;
      uStack_ac = uStack_80._4_4_;
      if (uStack_80 != (long *)0x0) {
        LOCK();
        uStack_80[1] = uStack_80[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x10))(plVar8,&local_b8);
      plVar8 = (long *)CONCAT44(uStack_ac,uStack_b0);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plVar8 = uStack_80;
    local_e8 = (undefined4)local_88;
    uStack_e4 = local_88._4_4_;
    uStack_e0 = (undefined4)uStack_80;
    uStack_dc = uStack_80._4_4_;
    if (uStack_80 != (long *)0x0) {
      LOCK();
      uStack_80[1] = uStack_80[1] + 1;
      UNLOCK();
    }
    FUN_1003bb580(&DAT_1008c7620,&local_e8);
  }
  else {
    if (plVar8 != (long *)0x0) {
      local_c8 = (undefined4)local_88;
      uStack_c4 = local_88._4_4_;
      uStack_c0 = (undefined4)uStack_80;
      uStack_bc = uStack_80._4_4_;
      if (uStack_80 != (long *)0x0) {
        LOCK();
        uStack_80[1] = uStack_80[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,&local_c8);
      plVar8 = (long *)CONCAT44(uStack_bc,uStack_c0);
      if (plVar8 != (long *)0x0) {
        LOCK();
        plVar1 = plVar8 + 1;
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plVar8 = uStack_80;
    local_f8 = (undefined4)local_88;
    uStack_f4 = local_88._4_4_;
    uStack_f0 = (undefined4)uStack_80;
    uStack_ec = uStack_80._4_4_;
    if (uStack_80 != (long *)0x0) {
      LOCK();
      uStack_80[1] = uStack_80[1] + 1;
      UNLOCK();
    }
    FUN_1003bb580(&DAT_1008c7610,&local_f8);
  }
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar8 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,CONCAT22(uStack_5e,uStack_60)));
  if (plVar8 != (long *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_100219b99:
  (**(code **)(local_a0 + 0x10))();
  if (uStack_80 != (long *)0x0) {
    LOCK();
    plVar8 = uStack_80 + 1;
    lVar2 = *plVar8;
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*uStack_80 + 0x10))(uStack_80);
      std::__shared_weak_count::__release_weak();
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(local_98);
  (*(code *)PTR__objc_release_10082c7b0)(local_90);
  (*(code *)PTR__objc_release_10082c7b0)(local_a0);
  (*(code *)PTR__objc_release_10082c7b0)(local_a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

