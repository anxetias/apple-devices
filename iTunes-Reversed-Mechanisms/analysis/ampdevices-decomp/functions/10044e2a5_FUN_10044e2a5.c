// name: FUN_10044e2a5
// address: 10044e2a5

void FUN_10044e2a5(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined4 local_38;
  long local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != 0) {
    lVar3 = (*(code *)PTR__objc_msgSend_10082c770)(param_2,PTR_s_code_10088bb40);
    if (lVar3 != 0x1003) {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar1 = DAT_1008c7d18;
      cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8400102;
        local_34 = param_2;
        __os_log_impl(0x100000000,uVar1,0x10,
                      "**ERROR**: [mLibraryClient closeMediaDomains] failed! error:%@",&local_38,0xc
                     );
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

