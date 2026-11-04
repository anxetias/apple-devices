// name: FUN_10017cb2a
// address: 10017cb2a

undefined8 FUN_10017cb2a(undefined8 *param_1,long param_2,long param_3,long param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  size_t sVar4;
  
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
    *param_1 = 0;
  }
  param_1[2] = param_2;
  param_1[1] = param_3;
  uVar3 = (param_4 * param_2 + 7U >> 3) + 0x1f & 0xffffffffffffffe0;
  param_1[3] = uVar3;
  sVar4 = uVar3 * param_3;
  if (sVar4 == 0) {
    uVar2 = 6;
  }
  else {
    pvVar1 = _valloc(sVar4);
    *param_1 = pvVar1;
    uVar2 = 6;
    if (pvVar1 != (void *)0x0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

