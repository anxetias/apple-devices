// name: FUN_1004d7142
// address: 1004d7142

void FUN_1004d7142(long *param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 local_a8 [4];
  undefined4 local_98 [4];
  undefined1 local_88 [16];
  undefined4 local_78 [2];
  long local_70 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar2 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar2 == 0) {
    uVar3 = FUN_1001cc310();
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "eventDict.IsValid()";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1004d647e(local_88);
    FUN_1001a7b90(local_60,&PTR_cf_metricsBase_10085ea48);
    FUN_10032f0f2(local_a8);
    FUN_10032f0f2(&local_48);
    cVar1 = FUN_1001a9164(local_88,local_60,&local_48);
    puVar4 = local_a8;
    if (cVar1 != '\0') {
      puVar4 = &local_48;
    }
    FUN_1001a7a9e(local_70,puVar4);
    FUN_1001a8fac(&local_48);
    FUN_1001a8fac(local_a8);
    FUN_1001ab240(local_60);
    if (local_70[0] != 0) {
      FUN_1001a9e22(plVar2,local_70);
    }
    FUN_1001a7b90(local_50,&PTR_cf_eventType_100855a30);
    FUN_1001aa318(local_78);
    FUN_1001aa318(&local_48);
    cVar1 = FUN_1001a921a(plVar2,local_50,&local_48);
    puVar4 = local_78;
    if (cVar1 != '\0') {
      puVar4 = &local_48;
    }
    FUN_1001a8c1c(local_60,puVar4);
    FUN_1001ab006(&local_48);
    cVar1 = FUN_1001ab10c(local_60,&PTR_cf_page_10085ea50);
    FUN_1001ab006(local_60);
    FUN_1001ab006(local_78);
    FUN_1001ab240(local_50);
    if (cVar1 != '\0') {
      FUN_1001a7b90(local_50,&PTR_cf_fields_10085ea58);
      FUN_10032f0f2(local_98);
      FUN_10032f0f2(&local_48);
      cVar1 = FUN_1001a9164(local_88,local_50,&local_48);
      puVar4 = local_98;
      if (cVar1 != '\0') {
        puVar4 = &local_48;
      }
      FUN_1001a7a9e(local_60,puVar4);
      FUN_1001a8fac(&local_48);
      FUN_1001a7b1c(local_70,local_60);
      FUN_1001a8fac(local_60);
      FUN_1001a8fac(local_98);
      FUN_1001ab240(local_50);
      if (local_70[0] != 0) {
        FUN_1001a9e22(plVar2,local_70);
      }
    }
    FUN_1001a8fac(local_70);
    FUN_1001a8fac(local_88);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

