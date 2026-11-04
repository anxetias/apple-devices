// name: FUN_100240cd0
// address: 100240cd0

undefined8 FUN_100240cd0(int param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  local_18 = 0;
  puVar1 = DAT_1008c7680;
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar1 + 0x18) == param_1) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  FUN_10043d486(puVar1,param_2,&local_18);
  return local_18;
}

