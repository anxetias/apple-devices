// name: FUN_10043a6c4
// address: 10043a6c4

undefined8 FUN_10043a6c4(long param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  
  lVar1 = *param_2;
  if (*(int *)(lVar1 + 0xc) == 0) {
    cVar2 = FUN_1002bcf12(lVar1,*(undefined1 *)(*(long *)(param_1 + 8) + 0x365));
    if (cVar2 != '\0') {
      **(undefined1 **)(param_1 + 0x10) = 0;
    }
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = 0;
  }
  return 0;
}

