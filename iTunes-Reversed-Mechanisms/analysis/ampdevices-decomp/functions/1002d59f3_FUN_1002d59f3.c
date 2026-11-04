// name: FUN_1002d59f3
// address: 1002d59f3

void FUN_1002d59f3(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar4 = DAT_1008c75b8;
  cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar1 != '\0') {
    local_48 = local_48 & 0xffff0000;
    __os_log_impl(0x100000000,uVar4,1,"",&local_48,2);
  }
  pcVar2 = (char *)FUN_1002d6ef8(param_1,0);
  puVar5 = DAT_1008c5d80;
  if (pcVar2 != (char *)0x0) {
    for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
      lVar3 = FUN_1001720fd(pcVar2,puVar5[6],0);
      if (lVar3 == 0) {
        lVar3 = FUN_100263880(puVar5[5]);
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0x6d62) == '\x01')) {
          if (*(int *)(lVar3 + 0x28) != 1) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x822;
              local_3a = "iPodDevice->retainCount == 1";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
            }
            FUN_1001782e9(0,0);
            if (*(int *)(lVar3 + 0x28) != 1) goto LAB_1002d5b5a;
          }
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar4 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 != '\0') {
            local_44 = *(char **)(lVar3 + 0x18);
            local_48 = 0x8000100;
            __os_log_impl(0x100000000,uVar4,1,
                          "releasing empty unmountable iPod record with serialNumber %llx",&local_48
                          ,0xc);
          }
          FUN_100264ec8(lVar3);
        }
LAB_1002d5b5a:
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar4 = DAT_1008c75b8;
        cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar1 != '\0') {
          local_48 = 0x8420102;
          local_44 = pcVar2;
          __os_log_impl(0x100000000,uVar4,1,"deleting device with appearance time %{public}@",
                        &local_48,0xc);
        }
        FUN_1002d7303(puVar5);
        break;
      }
    }
    FUN_10017060f(pcVar2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

