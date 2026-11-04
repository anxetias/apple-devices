// name: FUN_1001c3554
// address: 1001c3554

void FUN_1001c3554(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *local_40;
  undefined8 local_38 [2];
  
  FUN_1001c352f();
  FUN_1001c3a80(&local_40,&DAT_1008a2218);
  if (local_40 != local_38) {
    puVar2 = local_40;
    do {
      if ((void *)puVar2[5] != (void *)0x0) {
        operator_delete((void *)puVar2[5]);
      }
      puVar1 = (undefined8 *)FUN_10020e52a(&local_40,puVar2);
      operator_delete(puVar2);
      puVar2 = puVar1;
    } while (puVar1 != local_38);
  }
  FUN_1002a41f4(&local_40,local_38[0]);
  return;
}

