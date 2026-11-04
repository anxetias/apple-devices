// name: FUN_1001c3444
// address: 1001c3444

cfstringStruct * FUN_1001c3444(undefined4 param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  
  if (param_2 < 0x10000) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a6e5d(uVar2);
    }
    FUN_1001782e9(0,0);
  }
  pcVar3 = (cfstringStruct *)FUN_1001c3393(param_1);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = (cfstringStruct *)FUN_1001c3393(param_2);
  }
  pcVar4 = &cf___;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar4 = pcVar3;
  }
  return pcVar4;
}

