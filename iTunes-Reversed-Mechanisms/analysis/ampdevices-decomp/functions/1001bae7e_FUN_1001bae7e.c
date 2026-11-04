// name: FUN_1001bae7e
// address: 1001bae7e

uint FUN_1001bae7e(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  long local_78 [5];
  long local_50 [5];
  
  FUN_1001baa68(local_50,param_1);
  FUN_1001baac0(local_78,param_1);
  if (local_50[0] == local_78[0]) {
    uVar1 = 0;
  }
  else {
    do {
      puVar2 = (undefined2 *)FUN_1001bab26(local_50);
      uVar1 = FUN_1001ad018(param_2,*puVar2);
      if ((char)uVar1 == '\0') break;
      FUN_1001babfe(local_50);
    } while (local_50[0] != local_78[0]);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

