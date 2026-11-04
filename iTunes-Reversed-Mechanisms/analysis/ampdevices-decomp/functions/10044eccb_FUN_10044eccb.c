// name: FUN_10044eccb
// address: 10044eccb

void FUN_10044eccb(long param_1,long param_2,int param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined4 local_48;
  undefined4 local_44;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_10044edfc;
  plVar6 = (long *)std::__shared_weak_count::lock();
  if (plVar6 == (long *)0x0) goto LAB_10044edfc;
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    cVar4 = FUN_1005fa6c8(lVar2);
    uVar5 = 0xffffff80;
    if (cVar4 == '\0') {
      if (param_2 == 0) {
        *(int *)(lVar2 + 0x5c) = param_3;
        FUN_1001a8d64(&local_48,param_4);
        FUN_1001a7b1c(lVar2 + 0x60,&local_48);
        FUN_1001a8fac(&local_48);
        goto LAB_10044edd9;
      }
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar3 = DAT_1008c7d18;
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar4 != '\0') {
        local_44 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_code_10088bb40);
        local_48 = 0x4000100;
        __os_log_impl(0x100000000,uVar3,0x10,
                      "**ERROR**: fetchLibraryChangesFromRevision: failed! error:%d",&local_48,8);
      }
      if (param_3 != 0) {
        *(int *)(lVar2 + 0x5c) = param_3;
      }
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_code_10088bb40);
    }
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = uVar5;
  }
LAB_10044edd9:
  LOCK();
  plVar1 = plVar6 + 1;
  lVar2 = *plVar1;
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (lVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    std::__shared_weak_count::__release_weak();
  }
LAB_10044edfc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

