// name: FUN_1004a1668
// address: 1004a1668

undefined8 FUN_1004a1668(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 uVar3;
  long lVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 local_70 [16];
  long local_60;
  long *local_58;
  undefined1 local_50 [8];
  undefined2 local_48;
  undefined2 uStack_46;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = *param_2;
  lVar4 = *(long *)(param_1 + 8);
  FUN_10032f0f2(local_70);
  FUN_1001bb78a(&local_48,"media-domain:%u",uVar3);
  FUN_1001aaf14(local_50,&local_48);
  FUN_1001b7a50(&local_48);
  FUN_1001a7b90(&local_48,local_50);
  cVar5 = FUN_1001a9164(lVar4 + 0x20,&local_48,local_70);
  FUN_1001ab240(&local_48);
  if (cVar5 != '\0') {
    FUN_10049fff2(&local_60,local_70);
    if (local_60 == 0) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x202;
        uStack_46 = 0x822;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x1028;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar7,0x10,
                            "ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      puVar6 = (undefined1 *)FUN_1002796f8(uVar3,0);
      if (puVar6 == (undefined1 *)0x0) {
        uVar7 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x202;
          uStack_46 = 0x822;
          uStack_44 = 0x7a0a90;
          local_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0x6e46;
          uStack_38 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar7,0x10,
                              "ch>      LIBRARY PREFS modifiedFields 0x%0.16llx",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        if (DAT_1008c7660 != -1) {
          _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
        }
        uVar7 = DAT_1008c7658;
        cVar5 = _os_log_type_enabled(DAT_1008c7658,1);
        if (cVar5 != '\0') {
          local_48 = 0;
          __os_log_impl(0x100000000,uVar7,1,"ch> LIBRARY PREFS",&local_48,2);
        }
        plVar2 = local_58;
        local_48 = (undefined2)local_60;
        uStack_46 = (undefined2)((ulong)local_60 >> 0x10);
        uStack_44 = (undefined4)((ulong)local_60 >> 0x20);
        local_40 = SUB84(local_58,0);
        uStack_3c = (undefined2)((ulong)local_58 >> 0x20);
        uStack_3a = (undefined2)((ulong)local_58 >> 0x30);
        if (local_58 != (long *)0x0) {
          LOCK();
          local_58[1] = local_58[1] + 1;
          UNLOCK();
        }
        if (*(char *)(local_60 + 0x170) == '\0') {
          FUN_1004a0240(local_60);
        }
        FUN_10049f54a(local_60 + 0x28,0,puVar6);
        lVar4 = *(long *)(lVar4 + 0x30);
        if (lVar4 != 0) {
          FUN_1002bbfbc(lVar4,*puVar6,puVar6);
        }
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
    if (local_58 != (long *)0x0) {
      LOCK();
      plVar2 = local_58 + 1;
      lVar4 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar4 == 0) {
        (**(code **)(*local_58 + 0x10))(local_58);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_1001ab006(local_50);
  FUN_1001a8fac(local_70);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

