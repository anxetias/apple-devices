// name: FUN_1002c12ed
// address: 1002c12ed

bool FUN_1002c12ed(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  size_t sVar2;
  bool bVar3;
  
  if (param_1 != param_2) {
    bVar3 = true;
    if (param_2 != (undefined8 *)0x0 && param_1 != (undefined8 *)0x0) {
      sVar2 = param_1[1] - (long)*param_1;
      if (sVar2 == param_2[1] - (long)*param_2) {
        iVar1 = _memcmp((void *)*param_1,(void *)*param_2,sVar2);
        bVar3 = iVar1 != 0;
      }
    }
    return bVar3;
  }
  return false;
}

