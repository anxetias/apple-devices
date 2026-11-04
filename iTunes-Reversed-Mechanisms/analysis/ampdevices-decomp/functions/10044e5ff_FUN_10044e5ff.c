// name: FUN_10044e5ff
// address: 10044e5ff

void FUN_10044e5ff(long param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar3 = DAT_1008c7d18;
  if (param_2 == 0) {
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,1);
    uVar5 = 0;
    if (cVar4 != '\0') {
      local_48 = 0x4000100;
      uStack_44 = param_3;
      __os_log_impl(0x100000000,uVar3,1,"sendDBChangesToLibrary] updated to revision:%u",&local_48,8
                   );
    }
  }
  else {
    cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8400102;
      uStack_44 = (undefined4)param_2;
      uStack_40 = (undefined4)((ulong)param_2 >> 0x20);
      __os_log_impl(0x100000000,uVar3,0x10,
                    "**ERROR**: [mLibraryClient sendDBChangesToLibrary] failed! error:%@",&local_48,
                    0xc);
    }
    uVar5 = FUN_10044bbe0(param_2);
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar6 = (long *)std::__shared_weak_count::lock();
    uStack_40 = SUB84(plVar6,0);
    uStack_3c = (undefined4)((ulong)plVar6 >> 0x20);
    if (plVar6 != (long *)0x0) {
      lVar2 = *(long *)(param_1 + 0x20);
      local_48 = (undefined4)lVar2;
      uStack_44 = (undefined4)((ulong)lVar2 >> 0x20);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x48) == '\x01')) {
        *(undefined4 *)(lVar2 + 0x68) = param_3;
        cVar4 = FUN_1001e8dbb(lVar2 + 0x18);
        if (cVar4 != '\0') {
          *(undefined4 *)(lVar2 + 0x4c) = uVar5;
          FUN_1001e8f15(lVar2 + 0x18);
        }
      }
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

