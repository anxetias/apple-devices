// name: FUN_10013e2dc
// address: 10013e2dc

bool FUN_10013e2dc(undefined8 *param_1,long *param_2,undefined1 *param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10013e83f(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (DAT_1008c4d40 == 0) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_10013e8b5(uVar3);
      }
      cVar2 = FUN_1001782e9(0,0);
      if (cVar2 == '\0') goto LAB_10013e3c5;
    }
    if (*(long *)*param_1 != 0) {
      uVar3 = _objc_autoreleasePoolPush();
      IVar4 = NSURLResponse::_responseWithCFURLResponse_
                        ((ID)PTR__OBJC_CLASS___NSURLResponse_10082c6c8,
                         PTR_s__responseWithCFURLResponse__10088bae8,*param_2);
      if (IVar4 != 0) {
        (*(code *)PTR__objc_msgSend_10082c770)
                  (DAT_1008c4d40,PTR_s_handleResponse_forRequest_should_10088bb00,IVar4,
                   *(undefined8 *)*param_1);
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = 0;
        }
      }
      _objc_autoreleasePoolPop(uVar3);
    }
  }
LAB_10013e3c5:
  return lVar1 != 0;
}

