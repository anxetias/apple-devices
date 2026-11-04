// name: FUN_1001540fe
// address: 1001540fe

undefined8 FUN_1001540fe(undefined8 param_1,long *param_2)

{
  long lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40 [2];
  undefined1 local_30 [8];
  
  lVar1 = *param_2;
  FUN_1001a7b90(local_30);
  local_58 = 0;
  uStack_50 = 0;
  FUN_10032f0f2(&local_58);
  FUN_10032f0f2(local_40);
  cVar2 = FUN_10012a492(lVar1 + 0x18,local_30,local_40);
  puVar3 = &local_58;
  if (cVar2 != '\0') {
    puVar3 = local_40;
  }
  FUN_1001a7a9e(param_1,puVar3);
  FUN_1001a8fac(local_40);
  FUN_1001a8fac(&local_58);
  FUN_1001ab240(local_30);
  return param_1;
}

