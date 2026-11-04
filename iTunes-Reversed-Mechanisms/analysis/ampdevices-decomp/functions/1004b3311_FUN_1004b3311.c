// name: FUN_1004b3311
// address: 1004b3311

void FUN_1004b3311(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1001ebd46();
  *(undefined8 *)(param_1 + 0x660) = uVar2;
  *(undefined2 *)(param_1 + 0x670) = 1;
  if ((*(char *)(param_1 + 0x779) != '\0') && (lVar1 = *(long *)(param_1 + 0x38), lVar1 != 0)) {
    if (*(char *)(lVar1 + 0x670) == '\0') {
      uVar2 = FUN_1001ebd46();
      *(undefined8 *)(lVar1 + 0x660) = uVar2;
      *(undefined2 *)(lVar1 + 0x670) = 1;
      lVar1 = *(long *)(param_1 + 0x38);
    }
    *(undefined1 *)(lVar1 + 0x768) = 0;
    *(undefined8 *)(lVar1 + 0x770) = 0;
    uVar2 = FUN_1001ebd46();
    *(undefined8 *)(lVar1 + 0x760) = uVar2;
    *(undefined8 *)(lVar1 + 0x758) = 0;
  }
  return;
}

