// name: FUN_1002b0e52
// address: 1002b0e52

void FUN_1002b0e52(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x44) = 0;
  cVar1 = FUN_1002b0295();
  if (cVar1 != '\0') {
    if ((*(int *)(param_1 + 0x3c) == 0x4d425546) &&
       (*(char *)(*(undefined8 **)(param_1 + 0x80) + 7) != '\0')) {
      FUN_1001c64c1(**(undefined8 **)(param_1 + 0x80));
    }
    FUN_1001c64c1(*(undefined8 *)(param_1 + 0x80));
    uVar2 = FUN_1001c6588();
    *(undefined8 *)(param_1 + 0x80) = uVar2;
  }
  return;
}

