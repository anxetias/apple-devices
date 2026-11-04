// name: FUN_1001acf54
// address: 1001acf54

void FUN_1001acf54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2[1] == 0) {
    uVar1 = FUN_1001705fc(*param_2);
  }
  else {
    uVar1 = _CFCharacterSetCreateCopy(DAT_1008c4e10,param_2[1]);
  }
  *param_1 = uVar1;
  return;
}

