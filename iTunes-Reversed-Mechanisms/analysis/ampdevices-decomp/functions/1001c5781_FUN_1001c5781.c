// name: FUN_1001c5781
// address: 1001c5781

void FUN_1001c5781(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x46697841)) {
    while (*(long *)(param_1 + 4) != 0) {
      FUN_1001c57ee();
    }
    *param_1 = 0;
    FUN_1001c64c1(param_1);
    return;
  }
  uVar2 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar2,0x10);
  if (cVar1 != '\0') {
    FUN_1006a8868(uVar2);
  }
  FUN_1001782e9(0,0);
  return;
}

