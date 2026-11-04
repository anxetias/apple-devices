// name: FUN_100596e1c
// address: 100596e1c

undefined8 FUN_100596e1c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_100595fc8();
  if (iVar1 == 8) {
    lVar2 = FUN_10030252b(param_1);
  }
  else {
    if (iVar1 == 5) {
      uVar3 = FUN_10031b48b(param_1);
      return uVar3;
    }
    if (iVar1 != 3) {
      return 0;
    }
    lVar2 = FUN_100490af0(param_1);
  }
  if (lVar2 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar2 + 8);
}

