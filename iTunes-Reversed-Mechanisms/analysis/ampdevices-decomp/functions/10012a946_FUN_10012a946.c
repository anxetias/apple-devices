// name: FUN_10012a946
// address: 10012a946

void FUN_10012a946(void)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  long *local_60;
  undefined **local_58 [4];
  undefined ***local_38;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  pvVar3 = operator_new(0x78,(nothrow_t *)PTR_nothrow_10082c970);
  if (pvVar3 != (void *)0x0) {
    FUN_10012aba4(pvVar3);
  }
  FUN_10012c11e(&DAT_10088fc30,pvVar3);
  FUN_1001b5f9c(&local_68);
  lVar4 = local_68;
  if (local_68 != 0) {
    local_88 = (undefined4)DAT_10088fc30;
    uStack_84 = DAT_10088fc30._4_4_;
    uStack_80 = (undefined4)DAT_10088fc38;
    uStack_7c = DAT_10088fc38._4_4_;
    if (CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1001b7b04(local_58,"StoreServicesNotifications.CurrentUserChanged");
    FUN_1001b62e2(lVar4,&local_88,local_58);
    FUN_1001b7a50(local_58);
    plVar1 = (long *)CONCAT44(uStack_7c,uStack_80);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_78 = (undefined4)DAT_10088fc30;
    uStack_74 = DAT_10088fc30._4_4_;
    uStack_70 = (undefined4)DAT_10088fc38;
    uStack_6c = DAT_10088fc38._4_4_;
    if (CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) != 0) {
      LOCK();
      plVar1 = (long *)(CONCAT44(DAT_10088fc38._4_4_,(undefined4)DAT_10088fc38) + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    FUN_1001b7b04(local_58,"StoreServicesNotifications.CurrentUserPropertyChanged");
    FUN_1001b62e2(local_68,&local_78,local_58);
    FUN_1001b7a50(local_58);
    plVar1 = (long *)CONCAT44(uStack_6c,uStack_70);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_58[0] = &PTR_FUN_100838b78;
    local_38 = local_58;
    FUN_100132f20(local_58);
    if (local_38 == local_58) {
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
      if (local_38 == (undefined ***)0x0) goto LAB_10012aac5;
    }
    (**(code **)((long)*local_38 + lVar4))();
  }
LAB_10012aac5:
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar4 == 0) {
      (**(code **)(*local_60 + 0x10))(local_60);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

