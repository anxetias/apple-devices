// name: FUN_10012beac
// address: 10012beac

undefined8 FUN_10012beac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  
  FUN_1001a7b90(local_30,param_3);
  FUN_1001aa318(local_40);
  FUN_1001aa318(local_38);
  cVar1 = FUN_1001a9056(param_2,local_30,local_38);
  puVar2 = local_40;
  if (cVar1 != '\0') {
    puVar2 = local_38;
  }
  FUN_1001a8c1c(param_1,puVar2);
  FUN_1001ab240(local_38);
  FUN_1001ab240(local_40);
  FUN_1001ab240(local_30);
  return param_1;
}

