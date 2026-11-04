// name: FUN_100179644
// address: 100179644

void FUN_100179644(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_1001e9de0(*(undefined8 *)*param_1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10068395e(iVar2,uVar3);
    }
  }
  return;
}

