// name: FUN_1001acf1c
// address: 1001acf1c

void FUN_1001acf1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar1 = _CFCharacterSetCreateMutable(DAT_1008c4e10);
    param_1[1] = uVar1;
  }
  else {
    uVar1 = FUN_1001705fc(param_2);
    *param_1 = uVar1;
  }
  return;
}

