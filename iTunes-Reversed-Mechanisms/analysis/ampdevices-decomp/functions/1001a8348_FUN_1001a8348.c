// name: FUN_1001a8348
// address: 1001a8348

void FUN_1001a8348(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar1 = param_2;
  }
  uVar1 = _CFDataCreateMutable(DAT_1008c4d98,uVar1);
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 1;
  _CFDataSetLength(uVar1,param_2);
  return;
}

