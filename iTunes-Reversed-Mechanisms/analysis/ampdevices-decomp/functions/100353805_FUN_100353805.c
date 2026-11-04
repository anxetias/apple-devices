// name: FUN_100353805
// address: 100353805

undefined1 FUN_100353805(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  if ((*(int *)(param_1 + 0x5860) == 0) && (*(char *)(param_1 + 0x3a2) == '\0')) {
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_100597c13(param_2,0);
    if ((lVar2 == 0) || (uVar1 = 1, (~*(uint *)(lVar2 + 0x48) & 0x60) != 0)) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

