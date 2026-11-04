// name: FUN_10028389c
// address: 10028389c

void FUN_10028389c(long param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  long local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)(lVar4,PTR_s_code_10088bb40);
    if (DAT_1008c7568 != -1) {
      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
    }
    uVar5 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_44 = *(undefined8 *)(param_1 + 0x28);
      local_48 = 0x8000202;
      local_3c = 0x840;
      local_3a = lVar4;
      __os_log_impl(0x100000000,uVar5,0x10,"purgeAllItemsforDatabase:%llu failed! status:%@",
                    &local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x50);
  local_48 = uVar3;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_48);
    (*(code *)PTR__objc_release_10082c7b0)(lVar4);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

