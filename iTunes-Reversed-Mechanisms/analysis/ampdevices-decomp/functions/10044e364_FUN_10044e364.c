// name: FUN_10044e364
// address: 10044e364

int FUN_10044e364(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  undefined8 uVar10;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 400) == 0) {
    uVar10 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar10,0x10);
    if (cVar8 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      local_3a = "mLibraryClient != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar9 = 0x234f;
  }
  else {
    lVar6 = *param_2;
    uVar4 = *(undefined4 *)((long)param_2 + 4);
    lVar7 = param_2[1];
    uVar5 = *(undefined4 *)((long)param_2 + 0xc);
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      LOCK();
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
      UNLOCK();
    }
    if (DAT_1008c7d20 != -1) {
      _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
    }
    uVar10 = DAT_1008c7d18;
    cVar8 = _os_log_type_enabled(DAT_1008c7d18,1);
    if (cVar8 != '\0') {
      local_44 = *(undefined4 *)(*param_2 + 0x50);
      local_48 = 0x4000100;
      __os_log_impl(0x100000000,uVar10,1,"sendDBChangesToLibrary] from revision:%u",&local_48,8);
    }
    uVar10 = *(undefined8 *)(param_1 + 400);
    uVar3 = *(undefined8 *)(*param_2 + 0x58);
    uVar1 = *(undefined4 *)(*param_2 + 0x50);
    local_78 = PTR___NSConcreteStackBlock_10082caf0;
    local_70 = 0xc6000000;
    local_68 = FUN_10044e5ff;
    local_60 = &DAT_1008597b8;
    if (lVar2 != 0) {
      LOCK();
      *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
      UNLOCK();
    }
    local_58 = (int)lVar6;
    uStack_54 = uVar4;
    uStack_50 = (int)lVar7;
    uStack_4c = uVar5;
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar10,PTR_s_sendDBChangesToLibrary_fromRevis_10088d1e0,uVar3,uVar1,&local_78);
    iVar9 = 0;
    if (*(char *)(*param_2 + 0x48) == '\x01') {
      iVar9 = FUN_1005fa72a();
      if ((iVar9 != -0x80) && (iVar9 != 0)) {
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar10 = DAT_1008c7d18;
        cVar8 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        if (cVar8 != '\0') {
          local_44 = *(undefined4 *)(*param_2 + 0x50);
          local_48 = 0x4000200;
          uStack_40 = 0x400;
          uStack_3e = (undefined2)iVar9;
          uStack_3c = (undefined2)((uint)iVar9 >> 0x10);
          __os_log_impl(0x100000000,uVar10,0x10,
                        "**ERROR**: SendChanges WaitForCompletion(%u) failed! status:%d",&local_48,
                        0xe);
        }
      }
    }
    if (CONCAT44(uStack_4c,uStack_50) != 0) {
      std::__shared_weak_count::__release_weak();
    }
    if (lVar2 != 0) {
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

