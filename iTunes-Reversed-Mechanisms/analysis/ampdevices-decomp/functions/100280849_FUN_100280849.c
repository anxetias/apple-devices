// name: FUN_100280849
// address: 100280849

void FUN_100280849(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar5 = (*(code *)puVar3)(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar6 = (long *)std::__shared_weak_count::lock();
    if (plVar6 != (long *)0x0) {
      lVar2 = *(long *)(lVar2 + 0x30);
      if (lVar2 != 0) {
        local_88 = (undefined8 ***)0x0;
        uStack_80 = 0;
        local_78 = 0;
        if (lVar5 == 0) {
          FUN_100384fa4(&local_58,local_60);
          FUN_100284fd2(&local_88);
          local_88 = local_58;
          uStack_80 = uStack_50;
          local_78 = local_48;
          local_58 = (undefined8 ***)0x0;
          uStack_50 = 0;
          local_48 = 0;
          FUN_10028504c();
          uVar7 = 0;
        }
        else {
          local_68 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_code_10088bb40);
          if (DAT_1008c7568 != -1) {
            _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
          }
          uVar7 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = (undefined8 ***)CONCAT44((int)local_68,0x4000100);
            __os_log_impl(0x100000000,uVar7,0x10,"fetch failed completely %d",&local_58,8);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar7);
          uVar7 = local_68;
        }
        FUN_10038667e(lVar2,uVar7,&local_88,param_1 + 0x38,
                      *(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30,
                      *(long *)(*(long *)(param_1 + 0x30) + 8) + 0x30);
        local_58 = &local_88;
        FUN_10028504c();
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
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(local_60);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

