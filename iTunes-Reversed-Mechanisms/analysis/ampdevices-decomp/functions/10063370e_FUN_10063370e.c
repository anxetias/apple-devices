// name: FUN_10063370e
// address: 10063370e

void FUN_10063370e(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = _IOIteratorNext(param_2);
  while (iVar1 != 0) {
    if ((param_1 != (undefined8 *)0x0) && ((code *)*param_1 != (code *)0x0)) {
      (*(code *)*param_1)(param_1[1],iVar1);
    }
    _IOObjectRelease(iVar1);
    iVar1 = _IOIteratorNext(param_2);
  }
  return;
}

