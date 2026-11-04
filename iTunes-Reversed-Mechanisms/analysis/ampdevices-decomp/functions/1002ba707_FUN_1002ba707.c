// name: FUN_1002ba707
// address: 1002ba707

undefined8 FUN_1002ba707(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x68);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    cVar1 = FUN_10048c3a1(*puVar3);
    if (cVar1 != '\0') break;
    puVar3 = (undefined8 *)puVar3[10];
  }
  uVar2 = FUN_1002ba4fc(puVar3);
  return uVar2;
}

