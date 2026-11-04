// name: FUN_1004b467c
// address: 1004b467c

void FUN_1004b467c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x668) = uVar2;
  *(undefined1 *)(param_1 + 0x671) = 1;
  if ((*(char *)(param_1 + 0x779) != '\0') && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    *(undefined1 *)(lVar1 + 0x768) = 1;
    uVar2 = FUN_1001ebd46();
    *(undefined8 *)(lVar1 + 0x770) = uVar2;
    FUN_1004b4b7b(lVar1 + 0x648);
    return;
  }
  return;
}

