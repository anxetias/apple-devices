// name: FUN_1001605d9
// address: 1001605d9

undefined8 FUN_1001605d9(long param_1,char param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 5) != param_2) &&
     ((param_2 != '\0' || (uVar1 = 0xffffffc3, *(char *)(param_1 + 6) == '\0')))) {
    uVar1 = FUN_1001602ae(param_1);
    if ((int)uVar1 == 0) {
      *(char *)(param_1 + 5) = param_2;
      lVar3 = *(long *)(param_1 + 0x30);
      if (param_2 == '\0') {
        lVar2 = lVar3 + *(long *)(param_1 + 0x18) + -1;
      }
      else {
        lVar2 = lVar3;
        lVar3 = lVar3 + 1;
      }
      *(long *)(param_1 + 0x20) = lVar3;
      *(long *)(param_1 + 0x38) = lVar2;
      uVar1 = 0;
    }
  }
  return uVar1;
}

