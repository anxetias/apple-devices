// name: FUN_1001b5bfe
// address: 1001b5bfe

undefined1 FUN_1001b5bfe(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar2 = _NSClassFromString(&cf_NSMissingImage);
  cVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if (cVar3 != '\0') {
    return 1;
  }
  uVar4 = FUN_1001b31b6(param_1);
  return uVar4;
}

