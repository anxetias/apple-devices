// name: FUN_1001f1fae
// address: 1001f1fae

undefined8 *
FUN_1001f1fae(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = operator_new(0x28);
  *param_1 = puVar4;
  param_1[1] = param_2 + 0x10;
  *(undefined1 *)(param_1 + 2) = 0;
  *puVar4 = 0;
  puVar4[1] = param_3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(puVar4 + 2) = *param_4;
  *(undefined4 *)((long)puVar4 + 0x14) = uVar1;
  *(undefined4 *)(puVar4 + 3) = uVar2;
  *(undefined4 *)((long)puVar4 + 0x1c) = uVar3;
  FUN_1001a8c1c(puVar4 + 4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return param_1;
}

