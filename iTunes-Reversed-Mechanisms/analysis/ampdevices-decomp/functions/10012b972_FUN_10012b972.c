// name: FUN_10012b972
// address: 10012b972

void FUN_10012b972(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_68 [8];
  long *local_60;
  undefined1 local_58 [8];
  long *local_50;
  undefined2 local_48 [8];
  ulong local_38;
  long *local_30;
  
  cVar4 = FUN_10013303f();
  if (cVar4 == '\0') {
    uVar7 = FUN_10012a714();
    cVar4 = _os_log_type_enabled(uVar7,1);
    if (cVar4 != '\0') {
      local_38 = local_38 & 0xffffffffffff0000;
      __os_log_impl(0x100000000,uVar7,1,"Notification arrived after shutdown has begun. Ignoring.",
                    &local_38,2);
    }
  }
  else {
    iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.CurrentUserChanged");
    if (iVar5 == 0) {
      uVar7 = FUN_10012a714();
      cVar4 = _os_log_type_enabled(uVar7,1);
      if (cVar4 != '\0') {
        local_38 = local_38 & 0xffffffffffff0000;
        __os_log_impl(0x100000000,uVar7,1,"Current user changed. Invalidating bag.",&local_38,2);
      }
      FUN_10012b6b4(param_1);
      FUN_10012ac76(local_68,param_1);
    }
    else {
      iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.CurrentUserPropertyChanged");
      if (iVar5 != 0) {
        return;
      }
      uVar2 = *param_4;
      local_30 = (long *)param_4[1];
      if (local_30 != (long *)0x0) {
        LOCK();
        local_30[1] = local_30[1] + 1;
        UNLOCK();
      }
      lVar3 = *(long *)(uVar2 + 0x20);
      local_38 = uVar2;
      FUN_10015095e(local_48);
      lVar6 = FUN_100150dd2(local_48);
      FUN_100150de8(local_48);
      local_60 = local_30;
      if ((lVar3 == lVar6) && ((*(uint *)(uVar2 + 0x19) & 0x80000002) != 0)) {
        uVar7 = FUN_10012a714();
        cVar4 = _os_log_type_enabled(uVar7,1);
        if (cVar4 != '\0') {
          local_48[0] = 0;
          __os_log_impl(0x100000000,uVar7,1,
                        "Current user properties changed (storefront, etc.) Invalidating bag.",
                        local_48,2);
        }
        FUN_10012b6b4(param_1);
        FUN_10012ac76(local_58,param_1);
        local_60 = local_30;
        if (local_50 != (long *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar3 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
            std::__shared_weak_count::__release_weak();
            local_60 = local_30;
          }
        }
      }
    }
    if (local_60 != (long *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar3 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  return;
}

