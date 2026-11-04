// name: FUN_100147b6e
// address: 100147b6e

undefined8 FUN_100147b6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  FUN_1001a7b90(local_30,param_3);
  FUN_10032f0f2(local_50);
  FUN_10032f0f2(local_40);
  cVar1 = FUN_1001a9164(param_2,local_30,local_40);
  puVar2 = local_50;
  if (cVar1 != '\0') {
    puVar2 = local_40;
  }
  FUN_1001a7a9e(param_1,puVar2);
  FUN_1001a8fac(local_40);
  FUN_1001a8fac(local_50);
  FUN_1001ab240(local_30);
  return param_1;
}

