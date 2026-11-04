// name: FUN_10044e7c4
// address: 10044e7c4

undefined4 FUN_10044e7c4(long param_1,long *param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = &local_98;
  local_98 = 0;
  local_88 = 0x2020000000;
  local_80 = 0;
  lVar7 = *(long *)(param_1 + 400);
  if (lVar7 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      local_3a = "mLibraryClient != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar9 = 0x234f;
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    lVar8 = lVar2;
    if (lVar3 != 0) {
      LOCK();
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      UNLOCK();
      lVar8 = *param_2;
      lVar7 = *(long *)(param_1 + 400);
    }
    uVar9 = *(undefined4 *)(lVar8 + 0x58);
    uVar1 = *(undefined1 *)(lVar8 + 0x50);
    if (*(char *)(lVar8 + 0x48) == '\x01') {
      local_78 = PTR___NSConcreteStackBlock_10082caf0;
      local_70 = 0xc6000000;
      local_68 = FUN_10044eae0;
      local_60 = &DAT_1008597e8;
      if (lVar3 != 0) {
        LOCK();
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
        UNLOCK();
      }
      local_58 = lVar2;
      local_50 = lVar3;
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar7,PTR_s_fetchLibraryChangesFromRevision__10088d1e8,uVar9,uVar1,&local_78);
      iVar5 = FUN_1005fa72a(*param_2);
      *(int *)(local_90 + 3) = iVar5;
      lVar7 = local_50;
      if ((iVar5 != -0x80) && (iVar5 != 0)) {
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar6 = DAT_1008c7d18;
        cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        lVar7 = local_50;
        if (cVar4 != '\0') {
          local_44 = *(undefined4 *)(*param_2 + 0x58);
          local_48 = 0x4000200;
          uStack_40 = 0x400;
          uStack_3e = (undefined2)*(undefined4 *)(local_90 + 3);
          uStack_3c = (undefined2)((uint)*(undefined4 *)(local_90 + 3) >> 0x10);
          __os_log_impl(0x100000000,uVar6,0x10,
                        "**ERROR**: FetchChanges WaitForCompletion() failed! fromRevision:%u status:%d"
                        ,&local_48,0xe);
          lVar7 = local_50;
        }
      }
    }
    else {
      if (lVar3 != 0) {
        LOCK();
        *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
        UNLOCK();
      }
      (*(code *)PTR__objc_msgSend_10082c770)
                (lVar7,PTR_s_synchronousFetchLibraryChangesFr_10088d1f0,uVar9,uVar1);
      lVar7 = lVar3;
    }
    if (lVar7 != 0) {
      std::__shared_weak_count::__release_weak();
    }
    uVar9 = *(undefined4 *)(local_90 + 3);
    if (lVar3 != 0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  __Block_object_dispose(&local_98,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

