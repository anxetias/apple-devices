// name: FUN_1002832a2
// address: 1002832a2

void FUN_1002832a2(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  undefined8 local_4a;
  undefined2 local_42;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar3 = uStack_50;
  uVar6 = uStack_54;
  uStack_54 = (undefined4)param_2;
  uVar2 = uStack_54;
  uStack_50 = (undefined4)((ulong)param_2 >> 0x20);
  uVar4 = uStack_50;
  uStack_50 = uVar3;
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    uStack_54 = uVar6;
    uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(lVar7,PTR_s_code_10088bb40);
    if (DAT_1008c7568 != -1) {
      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
    }
    uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_4a = *(undefined8 *)(param_1 + 0x20);
      local_58 = 0x8000302;
      local_4c = 0x842;
      local_42 = 0x840;
      uStack_54 = uVar2;
      uStack_50 = uVar4;
      local_40 = lVar7;
      __os_log_impl(0x100000000,uVar8,0x10,"removeArtwork:%llu forUUID:%{public}@ failed! status:%@"
                    ,&local_58,0x20);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
  }
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x50);
  local_5c = uVar6;
  local_58 = uVar2;
  uStack_54 = uVar4;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_5c,&local_58);
    (*(code *)PTR__objc_release_10082c7b0)(lVar7);
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  FUN_10016bf14();
}

