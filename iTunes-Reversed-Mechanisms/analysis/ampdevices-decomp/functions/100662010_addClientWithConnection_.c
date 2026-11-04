// name: addClientWithConnection:
// address: 100662010

/* Function Stack Size: 0x18 bytes */

void AMPDevicesClientBroadcaster::addClientWithConnection_(ID param_1,SEL param_2,ID param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined2 local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 local_46;
  undefined4 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  if (lVar7 == 0) {
    uVar9 = FUN_100642e20();
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_58 = 0;
      __os_log_impl(0x100000000,uVar9,0x10,"Cannot add client with nil connection",&local_58,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
  }
  else {
    lVar8 = (*(code *)PTR__objc_retain_10082c7b8)(param_1);
    _objc_sync_enter(lVar8);
    iVar5 = 1;
    if (*(uint *)(lVar8 + 8) < 10000) {
      iVar5 = *(uint *)(lVar8 + 8) + 1;
    }
    *(int *)(lVar8 + 8) = iVar5;
    uVar9 = (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_exportedObject_10088da98);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar9,PTR_s_setClientID__10088de10,*(undefined4 *)(lVar8 + 8));
    uVar10 = FUN_100642e20();
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    cVar4 = _os_log_type_enabled(uVar10,1);
    if (cVar4 != '\0') {
      local_60 = lVar7;
      uVar11 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_processName_10088daf8);
      local_68 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_processID_10088de18);
      local_44 = (*(code *)PTR__objc_msgSend_10082c770)(uVar9,PTR_s_clientID_10088d1b8);
      uVar11 = local_68;
      local_58 = 0x302;
      uStack_56 = 0x842;
      uStack_54 = (undefined4)local_68;
      uStack_50 = (undefined4)((ulong)local_68 >> 0x20);
      uStack_4c = 0x400;
      uStack_4a = (undefined2)uVar6;
      uStack_48 = (undefined2)((uint)uVar6 >> 0x10);
      local_46 = 0x400;
      __os_log_impl(0x100000000,uVar10,1,"Added client: %{public}@ [%u:%u]",&local_58,0x18);
      (*(code *)PTR__objc_release_10082c7b0)(uVar11);
      lVar7 = local_60;
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar10);
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)(lVar8 + 0x10),PTR_s_addObject__10088c218,lVar7);
    FUN_10025b7fa(&local_58);
    lVar2 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x70) == '\x05')) {
      local_90 = PTR___NSConcreteStackBlock_10082caf0;
      local_88 = 0xc2000000;
      local_80 = FUN_100662315;
      local_78 = &DAT_10085cec8;
      local_70 = (*(code *)PTR__objc_retain_10082c7b8)(lVar7);
      _dispatch_async(PTR___dispatch_main_q_10082cb60,&local_90);
      (*(code *)PTR__objc_release_10082c7b0)(local_70);
    }
    plVar3 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
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
    (*(code *)PTR__objc_release_10082c7b0)(uVar9);
    _objc_sync_exit(lVar8);
    (*(code *)PTR__objc_release_10082c7b0)(lVar8);
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

