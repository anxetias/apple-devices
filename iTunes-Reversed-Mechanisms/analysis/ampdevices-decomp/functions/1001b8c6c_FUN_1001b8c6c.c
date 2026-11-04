// name: FUN_1001b8c6c
// address: 1001b8c6c

cfstringStruct * FUN_1001b8c6c(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  cfstringStruct *pcVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    pcVar3 = &cf___;
    if (((puVar1 != (undefined8 *)0x0) &&
        (pcVar3 = (cfstringStruct *)FUN_100173ab4(param_2,(long)puVar1 + 0xc,*puVar1,0x8000100,0),
        pcVar3 == (cfstringStruct *)0x0)) &&
       (cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), pcVar3 = &cf___,
       cVar2 != '\0')) {
      FUN_1006a190e();
    }
  }
  else {
    pcVar3 = (cfstringStruct *)FUN_1001734b1(param_2,(long)puVar1 + 0xc,*puVar1);
    if (pcVar3 == (cfstringStruct *)0x0) {
      cVar2 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      pcVar3 = &cf___;
      if (cVar2 != '\0') {
        FUN_1006a18d6();
      }
    }
  }
  return pcVar3;
}

