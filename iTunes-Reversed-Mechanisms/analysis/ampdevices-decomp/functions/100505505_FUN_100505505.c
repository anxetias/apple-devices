// name: FUN_100505505
// address: 100505505

undefined1 FUN_100505505(undefined8 param_1,char param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1004de449();
  if (lVar2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (*(char *)(lVar2 + 0x379) != '\0') {
    for (lVar2 = FUN_1002f930c(*(undefined8 *)(lVar2 + 0x30)); lVar2 != 0;
        lVar2 = FUN_1002f9451(lVar2)) {
      cVar1 = FUN_1002bd28d(lVar2);
      if ((cVar1 != '\0') && ((param_2 == '\0' || (-1 < *(int *)(lVar2 + 0xc2))))) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar3 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        uVar4 = 1;
        if (cVar1 != '\0') {
          FUN_100476ac1(&local_48,lVar2);
          local_54 = FUN_1001b83ae(&local_48);
          local_58 = 0x8220102;
          __os_log_impl(0x100000000,uVar3,1,"found device rental track \"%{public}s\"",&local_58,0xc
                       );
          FUN_1001b7a50(&local_48);
        }
        goto LAB_10050559c;
      }
    }
  }
  uVar4 = 0;
LAB_10050559c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

