// name: FUN_1002b8874
// address: 1002b8874

bool FUN_1002b8874(undefined8 param_1,undefined4 param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
  cVar1 = FUN_1001e3373(param_1,param_2,"itls://",7,1);
  if ((cVar1 != '\0') || (cVar1 = FUN_1001e3373(param_1,param_2,"itlss://",8,1), cVar1 != '\0')) {
    bVar2 = true;
    if (param_3 == (undefined1 *)0x0) {
      return true;
    }
    uVar3 = 0;
    goto LAB_1002b88cf;
  }
  cVar1 = FUN_1001e3373(param_1,param_2,"itals://",8,1);
  if ((cVar1 == '\0') && (cVar1 = FUN_1001e3373(param_1,param_2,"italss://",9,1), cVar1 == '\0')) {
    cVar1 = FUN_1001e3373(param_1,param_2,"itvls://",8,1);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_1002b8920;
    }
    cVar1 = FUN_1001e3373(param_1,param_2,"itvlss://",9,1);
    uVar3 = cVar1 != '\0';
    bVar2 = (bool)uVar3;
  }
  else {
    uVar3 = 2;
LAB_1002b8920:
    bVar2 = true;
  }
  if (param_3 == (undefined1 *)0x0) {
    return bVar2;
  }
LAB_1002b88cf:
  *param_3 = uVar3;
  return bVar2;
}

