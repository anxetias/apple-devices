// name: FUN_1002efe58
// address: 1002efe58

undefined8 FUN_1002efe58(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
  }
  return uVar1;
}

