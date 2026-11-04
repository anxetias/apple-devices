// name: FUN_1004c6512
// address: 1004c6512

undefined8 FUN_1004c6512(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_1001c6429(8);
  *param_1 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0xffffff94;
  }
  else {
    puVar2 = operator_new(0x38);
    *puVar2 = &PTR_FUN_10085e1a0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    *puVar1 = puVar2;
    uVar3 = 0;
  }
  return uVar3;
}

