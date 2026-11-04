// name: FUN_100584648
// address: 100584648

void FUN_100584648(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0x299) != '\0') {
    return;
  }
  uVar3 = 1;
  if ((*(char *)(param_1 + 0x2a2) != '\0') && (lVar1 = *(long *)(param_1 + 0x2a8), lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x299) = 6;
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_1001c72e9(param_1 + 0x2f0);
    FUN_1001c703f(param_1 + 0x2f0,FUN_1005846c2,param_1);
    uVar3 = FUN_100584849(uVar2,param_1,lVar1,0);
  }
  *(undefined1 *)(param_1 + 0x299) = uVar3;
  return;
}

