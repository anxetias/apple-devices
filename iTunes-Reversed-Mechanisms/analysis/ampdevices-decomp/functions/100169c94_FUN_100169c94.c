// name: FUN_100169c94
// address: 100169c94

bool FUN_100169c94(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001e5d7b(param_1,param_2,(int)(param_3 >> 1) + -1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006778fe(iVar2,uVar3);
    }
  }
  return iVar2 == 0;
}

