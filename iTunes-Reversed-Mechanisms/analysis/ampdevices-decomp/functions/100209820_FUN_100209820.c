// name: FUN_100209820
// address: 100209820

undefined1 FUN_100209820(undefined8 param_1,undefined1 *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined1 local_29;
  
  local_29 = 0;
  uVar2 = FUN_1001ce537();
  lVar3 = FUN_1001722b7(param_1,uVar2);
  if (lVar3 == 0) {
    bVar4 = false;
  }
  else {
    FUN_100165191(lVar3,&local_29);
    uVar2 = FUN_1001ce537();
    cVar1 = _CFPreferencesAppValueIsForced(param_1,uVar2);
    bVar4 = cVar1 != '\0';
    FUN_10017060f(lVar3);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = bVar4;
  }
  if (param_3 != 0) {
    *(bool *)param_3 = lVar3 != 0;
  }
  return local_29;
}

