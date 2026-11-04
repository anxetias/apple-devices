// name: FUN_10055fa32
// address: 10055fa32

long FUN_10055fa32(undefined4 param_1,undefined4 param_2,char *param_3)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  
  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  cVar3 = '\x01';
  while ((cVar3 == '\x04' ||
         (((puVar2 = &DAT_10085d298, cVar3 != '\x12' &&
           (puVar2 = (undefined *)FUN_100240cd0(cVar3,0), puVar2 == (undefined *)0x0)) ||
          (lVar1 = FUN_1005607b5(puVar2,param_1,param_2), lVar1 == 0))))) {
    cVar3 = cVar3 + '\x01';
    if (cVar3 == '\x15') {
      return 0;
    }
  }
  if (param_3 == (char *)0x0) {
    return lVar1;
  }
  *param_3 = cVar3;
  return lVar1;
}

