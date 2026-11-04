// name: FUN_100133ca4
// address: 100133ca4

undefined8 FUN_100133ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_30;
  undefined1 local_28 [8];
  
  FUN_1001a7b90(local_28);
  cVar1 = FUN_1001a9810(param_1,local_28,&local_30);
  if (cVar1 != '\0') {
    param_3 = local_30;
  }
  FUN_1001ab240(local_28);
  return param_3;
}

