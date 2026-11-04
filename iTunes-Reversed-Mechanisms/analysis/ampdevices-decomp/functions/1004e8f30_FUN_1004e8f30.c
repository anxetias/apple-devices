// name: FUN_1004e8f30
// address: 1004e8f30

void FUN_1004e8f30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_98;
  undefined4 local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined4 local_88;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined8 local_80;
  long *local_78;
  undefined8 local_68;
  undefined7 uStack_60;
  undefined4 uStack_59;
  undefined8 local_50;
  undefined8 uStack_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_98._0_4_ = 0x8220202;
      local_98._4_4_ = 0x7a0a90;
      local_90 = 1;
      uStack_8c = 0x822;
      uStack_8a = 0x6263;
      local_88 = 0x1007d;
      uStack_84 = 0;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1004e91d0;
  }
  iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.CurrentUserChanged");
  if (iVar5 == 0) {
    FUN_1004e1392(*(undefined8 *)(param_1 + 8),1);
  }
  else {
    iVar5 = FUN_1001b9c66(param_3,&DAT_1008c7620);
    if (iVar5 == 0) {
      lVar7 = *param_4;
      plVar2 = (long *)param_4[1];
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar2[1] = plVar2[1] + 1;
        UNLOCK();
      }
      if (lVar7 == 0) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_98._0_4_ = 0x8220202;
          local_98._4_4_ = 0x7ab58c;
          local_90 = 1;
          uStack_8c = 0x822;
          uStack_8a = 0xe991;
          local_88 = 0x10079;
          uStack_84 = 0;
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
        cVar4 = FUN_1001782e9(0,0);
        if (cVar4 != '\0') goto LAB_1004e8fe3;
      }
      else {
LAB_1004e8fe3:
        if (*(int *)(lVar7 + 0x20) == 0x6973756e) {
          lVar3 = *(long *)(param_1 + 8);
          local_80 = FUN_1001705fc(*(undefined8 *)(lVar7 + 0x28));
          local_88 = *(undefined4 *)(lVar3 + 0x28);
          local_98._0_4_ = 0x868418;
          local_98._4_4_ = 1;
          local_90 = 0x4e9331;
          uStack_8c = 1;
          uStack_8a = 0;
          local_68 = 0;
          uStack_60 = 0;
          uStack_59 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = (long *)0x0;
          local_78 = &local_98;
          FUN_10017869a(&local_98);
          if (local_40 != (long *)0x0) {
            LOCK();
            plVar1 = local_40 + 1;
            lVar7 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar7 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_78 == &local_98) {
            lVar7 = 0x20;
          }
          else {
            lVar7 = 0x28;
            if (local_78 == (long *)0x0) goto LAB_1004e9205;
          }
          (**(code **)(*local_78 + lVar7))();
        }
      }
LAB_1004e9205:
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar7 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar7 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.MachineAuthorized");
  if (iVar5 == 0) {
    FUN_1002d79dd(*(undefined8 *)(param_1 + 8));
  }
  else {
    iVar5 = FUN_1001ba026(param_3,"StoreServicesNotifications.MachineDeauthorized");
    if (iVar5 == 0) {
      FUN_1002d79dd(*(undefined8 *)(param_1 + 8));
      lVar7 = *(long *)(param_1 + 8);
      if ((*(char *)(lVar7 + 0x14cda) == '\0') && (*(char *)(lVar7 + 0x6abf) != '\0')) {
        local_88 = *(undefined4 *)(lVar7 + 0x28);
        local_98._0_4_ = 0x85f138;
        local_98._4_4_ = 1;
        local_90 = 0x507114;
        uStack_8c = 1;
        uStack_8a = 0;
        uStack_84 = 0;
        uStack_82 = 0;
        uStack_60 = 0;
        uStack_59 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = (long *)0x0;
        local_68 = CONCAT44(local_88,0xffffffff);
        local_78 = &local_98;
        FUN_10017869a(&local_98);
        if (local_40 != (long *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          lVar7 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar7 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 == &local_98) {
          lVar7 = 0x20;
        }
        else {
          lVar7 = 0x28;
          if (local_78 == (long *)0x0) goto LAB_1004e91d0;
        }
        (**(code **)(*local_78 + lVar7))();
      }
    }
  }
LAB_1004e91d0:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

