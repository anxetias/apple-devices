// name: FUN_100169026
// address: 100169026

undefined8 FUN_100169026(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    uVar3 = FUN_100170f3b(param_2);
    uVar2 = FUN_100170ef7(param_2);
    uVar3 = FUN_100168f04(param_1,uVar3,uVar2);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_100676a42(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0;
}

