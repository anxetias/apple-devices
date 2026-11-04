// name: FUN_10028b69b
// address: 10028b69b

void FUN_10028b69b(void)

{
  long *plVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar7 = FUN_100014b60();
  if (iVar7 != 0) {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar8 = DAT_1008b5ba8;
    cVar6 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar6 != '\0') {
      local_88._0_4_ = 0x4000100;
      local_88._4_4_ = iVar7;
      __os_log_impl(0x100000000,uVar8,0x10,"ADILoadLibrary failed with error %d.",&local_88,8);
    }
    if (iVar7 + 0x80U != 0) {
      uVar8 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar8,0x10);
      uVar5 = uStack_76;
      uVar4 = uStack_78;
      uStack_78 = (undefined2)iVar7;
      uVar2 = uStack_78;
      uStack_76 = (undefined2)((uint)iVar7 >> 0x10);
      uVar3 = uStack_76;
      if (cVar6 != '\0') {
        local_88._0_4_ = 0x8220202;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = uStack_78;
        uStack_78 = uStack_76;
        uStack_76 = uVar5;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_88,0x12);
        uVar4 = uStack_78;
        uVar5 = uStack_76;
      }
      uStack_76 = uVar5;
      uStack_78 = uVar4;
      if ((iVar7 + 0x80U & 0xffffff7f) != 0) {
        local_88._0_4_ = 0x845248;
        local_88._4_4_ = 1;
        local_80 = 0x28bf0b;
        uStack_7c = 1;
        uStack_7a = 0;
        local_58 = 0;
        uStack_50 = 0;
        uStack_49 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = (long *)0x0;
        uStack_78 = uVar2;
        uStack_76 = uVar3;
        local_68 = &local_88;
        FUN_10017869a(&local_88);
        if (local_30 != (long *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar9 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar9 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_68 == &local_88) {
          lVar9 = 0x20;
        }
        else {
          lVar9 = 0x28;
          if (local_68 == (long *)0x0) goto LAB_10028b7e4;
        }
        (**(code **)(*local_68 + lVar9))();
      }
    }
  }
LAB_10028b7e4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

