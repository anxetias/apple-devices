// name: FUN_1001a871e
// address: 1001a871e

void FUN_1001a871e(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    uVar1 = _CFDataGetBytePtr();
    if (*param_2 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = _CFDataGetLength();
    }
    FUN_1001a8772(param_1,uVar1,uVar2);
    return;
  }
  return;
}

