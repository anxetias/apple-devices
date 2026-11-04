// name: FUN_1005b8a8e
// address: 1005b8a8e

undefined8
FUN_1005b8a8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = _CFNumberGetTypeID();
  lVar3 = FUN_1005b8d4a(param_1,param_2,param_3,uVar2);
  if (lVar3 != 0) {
    cVar1 = FUN_100172017(lVar3,param_4,param_5);
    uVar2 = 0;
    if (cVar1 != '\0') goto LAB_1005b8ae2;
  }
  uVar2 = 0xe8000008;
LAB_1005b8ae2:
  FUN_10017060f(lVar3);
  return uVar2;
}

