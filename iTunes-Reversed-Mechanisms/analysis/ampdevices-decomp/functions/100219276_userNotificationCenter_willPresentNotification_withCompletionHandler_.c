// name: userNotificationCenter:willPresentNotification:withCompletionHandler:
// address: 100219276

/* Function Stack Size: 0x28 bytes */

void UserNotificationsDelegate::
     userNotificationCenter_willPresentNotification_withCompletionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined2 local_60;
  ushort uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  uint local_58;
  undefined2 local_54;
  uint local_52;
  undefined2 local_4e;
  undefined8 local_4c;
  long local_38;
  
  puVar4 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(param_4);
  lVar8 = (*(code *)puVar4)(param_5);
  local_80 = uVar7;
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_request_10088c2e8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(uVar7,PTR_s_content_10088c2f0);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  uVar7 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_userInfo_10088be88);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  FUN_1003bb4c5(&local_78,0,0,uVar7);
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  if (CONCAT44(uStack_74,local_78) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(CONCAT44(uStack_74,local_78) + 0x20);
  }
  if (DAT_1008c75d0 != -1) {
    _dispatch_once(&DAT_1008c75d0,&PTR___NSConcreteGlobalBlock_1008570a8);
  }
  uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c75c8);
  cVar5 = _os_log_type_enabled(uVar7,1);
  if (cVar5 != '\0') {
    uVar10 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_title_10088bf20);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    local_52 = uVar6 & 0xff;
    local_58 = uVar6 >> 8 & 0xff;
    uStack_5e = (ushort)(uVar6 >> 0x10) & 0xff;
    uStack_64 = uVar6 >> 0x18;
    local_68 = 0x4000502;
    local_60 = 0x400;
    uStack_5c = 0;
    uStack_5a = 0x400;
    local_54 = 0x400;
    local_4e = 0x840;
    local_4c = uVar10;
    __os_log_impl(0x100000000,uVar7,1,"notify> rejected: %c%c%c%c \'%@\'",&local_68,0x24);
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar7);
  lVar11 = CONCAT44(uStack_74,local_78);
  if (lVar11 == 0) {
    uVar7 = FUN_1001cc310();
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_68 = 0x8220202;
      uStack_64 = 0x7a168c;
      local_60 = 1;
      uStack_5e = 0;
      uStack_5c = 0x822;
      uStack_5a = 0xe991;
      local_58 = 0x10079;
      local_54 = 0;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar7);
    cVar5 = FUN_1001782e9(0,0);
    if (cVar5 == '\0') {
      uVar7 = 0;
      goto LAB_1002195ab;
    }
    lVar11 = CONCAT44(uStack_74,local_78);
  }
  plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar1[1] = plVar1[1] + 1;
    UNLOCK();
  }
  FUN_1003bb68d(&local_68,*(undefined4 *)(lVar11 + 0x20));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar3 = (undefined8 *)CONCAT44(uStack_64,local_68);
  if (puVar3 == (undefined8 *)0x0) {
LAB_10021951f:
    uVar7 = 0;
  }
  else {
    local_98 = local_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    if (CONCAT44(uStack_6c,uStack_70) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(uStack_6c,uStack_70) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)*puVar3)(puVar3,&local_98);
    plVar1 = (long *)CONCAT44(uStack_8c,uStack_90);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar11 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar11 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if ((uVar6 & 1) == 0) goto LAB_10021951f;
    uVar7 = 0x10;
  }
  plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
  local_b8 = local_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar1[1] = plVar1[1] + 1;
    UNLOCK();
  }
  FUN_1003bb580(&DAT_1008c7600,&local_b8);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar1 = (long *)CONCAT26(uStack_5a,CONCAT24(uStack_5c,CONCAT22(uStack_5e,local_60)));
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_1002195ab:
  (**(code **)(lVar8 + 0x10))(lVar8,uVar7);
  plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
  if (plVar1 != (long *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    lVar11 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      std::__shared_weak_count::__release_weak();
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  (*(code *)PTR__objc_release_10082c7b0)(lVar8);
  (*(code *)PTR__objc_release_10082c7b0)(local_80);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

