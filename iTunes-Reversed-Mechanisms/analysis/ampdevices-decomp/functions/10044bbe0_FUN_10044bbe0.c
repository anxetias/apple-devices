// name: FUN_10044bbe0
// address: 10044bbe0

long FUN_10044bbe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined4 local_48;
  undefined8 local_44;
  long local_38;
  
  puVar2 = PTR__objc_msgSend_10082c770;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar6 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_domain_10088bb78);
  puVar3 = PTR_s_code_10088bb40;
  puVar1 = PTR__NSCocoaErrorDomain_10082c5c0;
  lVar7 = (*(code *)puVar2)(param_1,PTR_s_code_10088bb40);
  if (lVar6 == *(long *)puVar1) {
    if (lVar7 == 0x1001) {
      lVar7 = 0x2389;
    }
    else if (lVar7 == 0x1003) {
      lVar7 = 0x238b;
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar4 = DAT_1008c7d18;
      cVar5 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar5 != '\0') {
        local_44 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,puVar3);
        local_48 = 0x8000100;
        __os_log_impl(0x100000000,uVar4,0x10,
                      "**ERROR**: NSErrorToOSStatus unknown NSCocoaErrorDomain error code returned from XPC! code:%ld"
                      ,&local_48,0xc);
      }
      lVar7 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,puVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

