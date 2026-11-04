// name: FUN_1003c0f81
// address: 1003c0f81

void FUN_1003c0f81(long param_1,undefined8 param_2)

{
  double dVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  double dVar7;
  undefined2 local_28 [4];
  
  uVar4 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  IVar5 = NSProcessInfo::processInfo
                    ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
  dVar7 = (double)(*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_systemUptime_10088c9f0);
  dVar1 = *(double *)(param_1 + 0x30);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (dVar1 <= dVar7) {
    cVar3 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    if (cVar3 != '\0') {
      local_28[0] = 0;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "framework connection timed out waiting for device",local_28,2);
    }
    lVar2 = *(long *)(param_1 + 0x20);
    IVar5 = NSError::errorWithDomain_code_userInfo_
                      ((ID)PTR__OBJC_CLASS___NSError_10082c660,
                       PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                       *(undefined8 *)PTR__NSOSStatusErrorDomain_10082c608,0x45f,0);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  else {
    cVar3 = (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    if (cVar3 != '\x01') goto LAB_1003c106b;
  }
  (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_invalidate_10088c4e8);
LAB_1003c106b:
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  return;
}

