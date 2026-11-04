// name: FUN_1001c57ee
// address: 1001c57ee

void FUN_1001c57ee(int *param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if (*param_1 != 0x4669784c) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006a88de(uVar4);
    }
    FUN_1001782e9(0,0);
    return;
  }
  piVar3 = *(int **)(param_1 + 2);
  do {
    piVar1 = *(int **)(piVar3 + 4);
    if (piVar1 == param_1) {
      *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_1 + 4);
      break;
    }
    piVar3 = piVar1;
  } while (piVar1 != (int *)0x0);
  FUN_1001c64c1();
  return;
}

