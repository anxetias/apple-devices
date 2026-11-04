// name: FUN_100138530
// address: 100138530

undefined8 *
FUN_100138530(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x50);
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1001b7a5c(puVar1 + 2,*param_5);
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

