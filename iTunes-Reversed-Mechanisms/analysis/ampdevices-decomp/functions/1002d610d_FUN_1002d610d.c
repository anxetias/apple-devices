// name: FUN_1002d610d
// address: 1002d610d

void FUN_1002d610d(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (DAT_1008c5d70 != (void *)0x0) {
    if (*(long *)((long)DAT_1008c5d70 + 8) != 0) {
      FUN_1001822bc(*(long *)((long)DAT_1008c5d70 + 8),1);
      *(undefined8 *)((long)DAT_1008c5d70 + 8) = 0;
    }
    FUN_100633912();
    if (DAT_1008c5d70 != (void *)0x0) {
      operator_delete(DAT_1008c5d70);
    }
    DAT_1008c5d70 = (void *)0x0;
  }
  uVar2 = DAT_1008c5d78;
  uVar3 = FUN_1001727a0();
  _DASessionUnscheduleFromRunLoop(uVar2,uVar3,*(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
  FUN_10017060f(DAT_1008c5d78);
  puVar1 = DAT_1008c5d80;
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1002d7303();
  }
  return;
}

