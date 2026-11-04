// name: FUN_10046cfe6
// address: 10046cfe6

void FUN_10046cfe6(undefined8 param_1,long param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  code *local_60;
  code *local_58;
  char *local_50;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_10046d0fb:
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      local_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x63b4;
      local_68 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
    FUN_10032f0f2(param_1,0);
  }
  else {
    if (*(int *)(param_2 + 0x80) != 0x74646174) {
      uVar3 = FUN_1001cc310();
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7ab58c;
        local_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0xec03;
        local_68 = 0x1007a;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar3);
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_10046d0fb;
    }
    local_78 = 0;
    uStack_74 = 0;
    local_70 = SUB84(&local_78,0);
    uStack_6c = (undefined2)((ulong)&local_78 >> 0x20);
    uStack_6a = (undefined2)((ulong)&local_78 >> 0x30);
    local_68 = 0x4012000000;
    uStack_62 = 0;
    local_60 = FUN_10046d4a4;
    local_58 = FUN_10046d4b6;
    local_50 = "";
    FUN_10032f0f2(local_48);
    if (*(long *)(param_2 + 0x2cf8) != 0) {
      lVar4 = ___dynamic_cast(*(long *)(param_2 + 0x2cf8),&PTR_DAT_100853258,&PTR_DAT_100855df0,0);
      if ((lVar4 == 0) || (plVar5 = *(long **)(param_2 + 0x2d00), plVar5 == (long *)0x0)) {
        plVar5 = (long *)0x0;
      }
      else {
        LOCK();
        plVar5[1] = plVar5[1] + 1;
        UNLOCK();
      }
      (*(code *)PTR__objc_msgSend_10082c770)
                (*(undefined8 *)(lVar4 + 0x28),PTR_s_synchronousFetchArtwork_withRepl_10088d368,
                 *param_3);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar4 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_1001a7a9e(param_1,CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70)) + 0x30);
    __Block_object_dispose(&local_78,8);
    FUN_1001a85d4(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

