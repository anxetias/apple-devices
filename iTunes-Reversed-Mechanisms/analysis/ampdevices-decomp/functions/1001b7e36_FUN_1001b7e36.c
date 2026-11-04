// name: FUN_1001b7e36
// address: 1001b7e36

void FUN_1001b7e36(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar1 = _CFStringGetLength(param_2);
    if (0 < lVar1) {
      plVar2 = operator_new(lVar1 * 2 + 0x10,(nothrow_t *)PTR_nothrow_10082c970);
      *plVar2 = lVar1;
      *(undefined4 *)(plVar2 + 1) = 1;
      *(undefined2 *)((long)plVar2 + lVar1 * 2 + 0xc) = 0;
      *param_1 = plVar2;
      _CFStringGetCharacters(param_2,0,lVar1,(long)plVar2 + 0xc);
      return;
    }
  }
  return;
}

