// name: FUN_1005362d6
// address: 1005362d6

void FUN_1005362d6(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 local_20 [6];
  short local_1a;
  undefined4 local_14;
  
  FUN_100177cff(&local_14);
  puVar3 = DAT_1008c7820;
  while (puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    (*(code *)puVar3[2])(DAT_1008c76a0,puVar3[3],puVar3[4],puVar3[5]);
    puVar3 = puVar1;
  }
  FUN_100178093(local_14,local_20);
  plVar4 = DAT_1008c7830;
  if (DAT_1008c7830 != (long *)0x0 && local_1a == 0) {
    do {
      plVar2 = (long *)*plVar4;
      (*(code *)plVar4[2])(DAT_1008c76a0,plVar4[3],plVar4[4],plVar4[5]);
      plVar4 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return;
}

