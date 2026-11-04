// name: FUN_10013de3c
// address: 10013de3c

ulong FUN_10013de3c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  ID IVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (DAT_1008c4d30 != -1) {
    FUN_10013e477();
  }
  if (DAT_1008c4d38 == '\0') {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10013e667(uVar3);
    }
  }
  else {
    if (*param_2 != 0) {
      (*(code *)PTR__objc_release_10082c7b0)(*(undefined8 *)*param_1);
      IVar2 = _objc_alloc(PTR__OBJC_CLASS___NSURLRequest_10082c6c0);
      IVar2 = NSURLRequest::_initWithCFURLRequest_
                        (IVar2,PTR_s__initWithCFURLRequest__10088bae0,*param_2);
      *(ID *)*param_1 = IVar2;
      uVar4 = CONCAT71((int7)((ulong)param_1 >> 8),1);
      goto LAB_10013dee2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10013e6dd(uVar3);
    }
  }
  uVar4 = 0;
  FUN_1001782e9(0,0);
LAB_10013dee2:
  return uVar4 & 0xffffffff;
}

