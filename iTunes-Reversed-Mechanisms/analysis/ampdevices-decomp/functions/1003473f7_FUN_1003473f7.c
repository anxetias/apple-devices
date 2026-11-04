// name: FUN_1003473f7
// address: 1003473f7

long FUN_1003473f7(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 local_58 [16];
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  undefined8 local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10048b5ec();
  if (lVar3 == 0) {
    lVar5 = 0;
    goto LAB_10034756c;
  }
  lVar5 = lVar3;
  if (*(long *)(lVar3 + 0x290) != 0) {
    lVar4 = FUN_100309333(*(undefined8 *)(lVar3 + 0x288));
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x84) != 0x2062696c)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar1 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar2 != '\0') {
        local_44 = *(char **)(lVar3 + 0x288);
        local_48 = 0x8000100;
        __os_log_impl(0x100000000,uVar1,0x10,"airtraffic> could not find source library 0x%016llX",
                      &local_48,0xc);
      }
      if (lVar4 == 0) goto LAB_1003474d3;
    }
    lVar5 = FUN_10048b5ec(lVar4,*(undefined8 *)(lVar3 + 0x290));
    if (lVar5 == 0) {
      lVar5 = lVar3;
    }
  }
LAB_1003474d3:
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar1 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    FUN_100486d8f(local_58,lVar3);
    local_3a = FUN_1001b83ae(local_58);
    local_44 = "library";
    if (lVar5 == lVar3) {
      local_44 = "device";
    }
    local_48 = 0x8220202;
    local_3c = 0x822;
    __os_log_impl(0x100000000,uVar1,1,
                  "airtraffic> getting artwork from %{public}s playlist for playlist \"%{public}s\""
                  ,&local_48,0x16);
    FUN_1001b7a50(local_58);
  }
LAB_10034756c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

