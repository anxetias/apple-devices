// name: FUN_1001ab378
// address: 1001ab378

void FUN_1001ab378(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _CFURLCreateWithString(DAT_1008c4d98,*param_2,0);
  }
  *param_1 = uVar1;
  return;
}

