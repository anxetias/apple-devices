// name: FUN_10012d582
// address: 10012d582

undefined8
FUN_10012d582(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [8];
  
  FUN_1001a7b90(local_30,param_3);
  FUN_1001a7a9e(local_50,param_4);
  FUN_10032f0f2(local_40);
  cVar1 = FUN_1001a92ae(param_2,local_30,local_40);
  puVar2 = local_50;
  if (cVar1 != '\0') {
    puVar2 = local_40;
  }
  FUN_1001a7a9e(param_1,puVar2);
  FUN_1001a85d4(local_40);
  FUN_1001a85d4(local_50);
  FUN_1001ab240(local_30);
  return param_1;
}

