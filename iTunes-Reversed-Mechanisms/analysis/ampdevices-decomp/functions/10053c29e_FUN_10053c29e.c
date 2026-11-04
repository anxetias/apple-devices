// name: FUN_10053c29e
// address: 10053c29e

void FUN_10053c29e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1008697a8;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  FUN_10032f0f2(param_1 + 5);
  uVar1 = FUN_10025b8e3();
  uVar1 = _os_signpost_id_generate(uVar1);
  param_1[7] = uVar1;
  return;
}

